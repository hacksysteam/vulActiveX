

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Sat Jul 21 19:14:48 2012
 */
/* Compiler settings for vulActiveX.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IATLActivexControl,0xAB622ABB,0x0711,0x4702,0x95,0x5D,0xFB,0x35,0x2F,0xC4,0xD5,0x5E);


MIDL_DEFINE_GUID(IID, LIBID_vulActiveXLib,0xC393674F,0xB96C,0x4E0A,0xAA,0xD5,0x5E,0x96,0x86,0x0B,0xEF,0xB2);


MIDL_DEFINE_GUID(IID, DIID__IATLActivexControlEvents,0xDA7A918C,0xB2E2,0x4E9B,0x96,0x84,0x44,0xBB,0x46,0x85,0x50,0x36);


MIDL_DEFINE_GUID(CLSID, CLSID_ATLActivexControl,0xC44CBF61,0x7844,0x4C4B,0xBC,0x77,0x76,0x43,0xFD,0x70,0x84,0x8E);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



