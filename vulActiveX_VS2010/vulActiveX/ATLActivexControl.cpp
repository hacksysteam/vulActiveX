// ATLActivexControl.cpp : Implementation of CATLActivexControl
#include "stdafx.h"
#include "ATLActivexControl.h"


// CATLActivexControl


STDMETHODIMP CATLActivexControl::BufferOverflow(BSTR sBuffer, LONG* retVal)
{
	//USES_CONVERSION macro avoids compiler errors 
	//facilitates use of String Conversion macro
	USES_CONVERSION; 
	char buffer[200] = {0};
	
	//To convert a Unicode string to ANSI
	//use ATL String Conversion macro W2A()
	char *tmp = W2A(sBuffer);
	
	//Vulnerable code 'strcpy' is vulnerable to buffer overflow attacks 
	//it does not validate user input
	strcpy(buffer, tmp);
	
	//Output the message via MesasgeBoxA Win32 API
	MessageBoxA(0,buffer,"vulActiveX Control",0);
	return S_OK;
}
