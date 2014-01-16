

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __vulActiveX_i_h__
#define __vulActiveX_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IATLActivexControl_FWD_DEFINED__
#define __IATLActivexControl_FWD_DEFINED__
typedef interface IATLActivexControl IATLActivexControl;
#endif 	/* __IATLActivexControl_FWD_DEFINED__ */


#ifndef ___IATLActivexControlEvents_FWD_DEFINED__
#define ___IATLActivexControlEvents_FWD_DEFINED__
typedef interface _IATLActivexControlEvents _IATLActivexControlEvents;
#endif 	/* ___IATLActivexControlEvents_FWD_DEFINED__ */


#ifndef __ATLActivexControl_FWD_DEFINED__
#define __ATLActivexControl_FWD_DEFINED__

#ifdef __cplusplus
typedef class ATLActivexControl ATLActivexControl;
#else
typedef struct ATLActivexControl ATLActivexControl;
#endif /* __cplusplus */

#endif 	/* __ATLActivexControl_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IATLActivexControl_INTERFACE_DEFINED__
#define __IATLActivexControl_INTERFACE_DEFINED__

/* interface IATLActivexControl */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IATLActivexControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AB622ABB-0711-4702-955D-FB352FC4D55E")
    IATLActivexControl : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE BufferOverflow( 
            /* [in] */ BSTR sBuffer,
            /* [retval][out] */ LONG *retVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IATLActivexControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IATLActivexControl * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IATLActivexControl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IATLActivexControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IATLActivexControl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IATLActivexControl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IATLActivexControl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IATLActivexControl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *BufferOverflow )( 
            IATLActivexControl * This,
            /* [in] */ BSTR sBuffer,
            /* [retval][out] */ LONG *retVal);
        
        END_INTERFACE
    } IATLActivexControlVtbl;

    interface IATLActivexControl
    {
        CONST_VTBL struct IATLActivexControlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IATLActivexControl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IATLActivexControl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IATLActivexControl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IATLActivexControl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IATLActivexControl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IATLActivexControl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IATLActivexControl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IATLActivexControl_BufferOverflow(This,sBuffer,retVal)	\
    ( (This)->lpVtbl -> BufferOverflow(This,sBuffer,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IATLActivexControl_INTERFACE_DEFINED__ */



#ifndef __vulActiveXLib_LIBRARY_DEFINED__
#define __vulActiveXLib_LIBRARY_DEFINED__

/* library vulActiveXLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_vulActiveXLib;

#ifndef ___IATLActivexControlEvents_DISPINTERFACE_DEFINED__
#define ___IATLActivexControlEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IATLActivexControlEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__IATLActivexControlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("DA7A918C-B2E2-4E9B-9684-44BB46855036")
    _IATLActivexControlEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IATLActivexControlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IATLActivexControlEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IATLActivexControlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IATLActivexControlEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IATLActivexControlEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IATLActivexControlEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IATLActivexControlEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IATLActivexControlEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _IATLActivexControlEventsVtbl;

    interface _IATLActivexControlEvents
    {
        CONST_VTBL struct _IATLActivexControlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IATLActivexControlEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _IATLActivexControlEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _IATLActivexControlEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _IATLActivexControlEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _IATLActivexControlEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _IATLActivexControlEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _IATLActivexControlEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IATLActivexControlEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ATLActivexControl;

#ifdef __cplusplus

class DECLSPEC_UUID("C44CBF61-7844-4C4B-BC77-7643FD70848E")
ATLActivexControl;
#endif
#endif /* __vulActiveXLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


