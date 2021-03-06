#include "shellprv.h"
#pragma  hdrstop

//==========================================================================
// CProxyPage: Class definition
//==========================================================================

typedef struct // shprxy
{
    CCommonUnknown              cunk;
    CCommonShellExtInit         cshx;
    CKnownShellPropSheetExt     kspx;
} CProxyPage, *LPPROXYPAGE;

//==========================================================================
// CProxyPage: Member prototype
//==========================================================================
STDMETHODIMP CProxyPage_QueryInterface(LPUNKNOWN punk, REFIID riid, LPVOID FAR* ppvObj);
STDMETHODIMP_(ULONG) CProxyPage_AddRef(LPUNKNOWN punk);
STDMETHODIMP_(ULONG) CProxyPage_Release(LPUNKNOWN punk);
STDMETHODIMP CProxyPage_AddPages(LPSHELLPROPSHEETEXT pspx,
                                 LPFNADDPROPSHEETPAGE lpfnAddPage,
                                 LPARAM lParam);
STDMETHODIMP CProxyPage_ReplacePage(LPSHELLPROPSHEETEXT pspx,
                                 UINT uPageID,
                                 LPFNADDPROPSHEETPAGE lpfnReplaceWith,
                                 LPARAM lParam);

//==========================================================================
// CProxyPage: VTable
//==========================================================================

IUnknownVtbl c_CProxyPageVtbl =
{
    CProxyPage_QueryInterface,
    CProxyPage_AddRef,
    CProxyPage_Release,
};

IShellPropSheetExtVtbl c_CProxyPageSPXVtbl =
{
    Common_QueryInterface,
    Common_AddRef,
    Common_Release,
    CProxyPage_AddPages,
    CProxyPage_ReplacePage,
};


HRESULT CALLBACK CProxyPage_CreateInstance(LPUNKNOWN punkOuter, REFIID riid, LPVOID * ppvOut)
{
    HRESULT hres = ResultFromScode(E_OUTOFMEMORY);
    LPPROXYPAGE pshprxy;

    //
    // We are not supposed to pass non-zero value here.
    //
    Assert(punkOuter==NULL);

	// BUGBUG (DavePl) Does this account for the nul terminator when it allocs?

    pshprxy = (LPPROXYPAGE)LocalAlloc(LPTR, SIZEOF(CProxyPage));
    if (pshprxy)
    {
        // Initialize CommonUnknown
        pshprxy->cunk.unk.lpVtbl = &c_CProxyPageVtbl;
        pshprxy->cunk.cRef = 1;

        // Initialize CCommonShellExtInit
        CCommonShellExtInit_Init(&pshprxy->cshx, &pshprxy->cunk);

        // Initialize CKnonwnPropSheetExt
        pshprxy->kspx.unk.lpVtbl = &c_CProxyPageSPXVtbl;
        pshprxy->kspx.nOffset = (int)&pshprxy->kspx - (int)&pshprxy->cunk;

        // Initialize pif stuff
        PifMgrDLL_Init();

        hres = CProxyPage_QueryInterface(&pshprxy->cunk.unk, riid, ppvOut);
        CProxyPage_Release(&pshprxy->cunk.unk);
    }

    return(hres);
}

//==========================================================================
// CProxyPage: Members
//==========================================================================
//
// CProxyPage::QueryInterface
//
STDMETHODIMP CProxyPage_QueryInterface(LPUNKNOWN punk, REFIID riid, LPVOID FAR* ppvObj)
{
    LPPROXYPAGE this = IToClassN(CProxyPage, cunk.unk, punk);

    if (IsEqualIID(riid, &IID_IUnknown))
    {
        *((LPUNKNOWN *)ppvObj) = &this->cunk.unk;
        this->cunk.cRef++;
        return NOERROR;
    }

    if (IsEqualIID(riid, &IID_IShellExtInit)
     || IsEqualIID(riid, &CLSID_CCommonShellExtInit))
    {
        *((LPSHELLEXTINIT *)ppvObj) = &this->cshx.kshx.unk;
        this->cunk.cRef++;
        return NOERROR;
    }

    if (IsEqualIID(riid, &IID_IShellPropSheetExt))
    {
        *((LPSHELLPROPSHEETEXT *)ppvObj) = &this->kspx.unk;
        this->cunk.cRef++;
        return NOERROR;
    }

    *ppvObj = NULL;
    return(ResultFromScode(E_NOINTERFACE));
}

//
// CProxyPage::AddRef
//
STDMETHODIMP_(ULONG) CProxyPage_AddRef(LPUNKNOWN punk)
{
    LPPROXYPAGE this = IToClassN(CProxyPage, cunk.unk, punk);

    this->cunk.cRef++;
    return this->cunk.cRef;
}

//
// CProxyPage::Release
//
STDMETHODIMP_(ULONG) CProxyPage_Release(LPUNKNOWN punk)
{
    LPPROXYPAGE this = IToClassN(CProxyPage, cunk.unk, punk);

    this->cunk.cRef--;
    if (this->cunk.cRef > 0)
    {
        return this->cunk.cRef;
    }

    CCommonShellExtInit_Delete(&this->cshx);

    LocalFree((HLOCAL)this);
    return 0;
}

//
// CProxyPage::AddPages
//
STDMETHODIMP CProxyPage_AddPages(LPSHELLPROPSHEETEXT pspx,
                                 LPFNADDPROPSHEETPAGE pfnAddPage,
                                 LPARAM lParam)
{
    LPPROXYPAGE this = IToClassN(CProxyPage, kspx.unk, pspx);
    HRESULT hres;

    if (this->cshx.pdtobj)
    {
        STGMEDIUM medium;
        FORMATETC fmte = { CF_HDROP, NULL, DVASPECT_CONTENT,    -1, TYMED_HGLOBAL};

        hres = this->cshx.pdtobj->lpVtbl->GetData(this->cshx.pdtobj, &fmte, &medium);
        if (SUCCEEDED(hres))
        {
            PifPropGetPages( medium.hGlobal ? GlobalLock(medium.hGlobal) : NULL, pfnAddPage, lParam);
            if (medium.hGlobal)
                GlobalUnlock( medium.hGlobal );
            SHReleaseStgMedium(&medium);
        }
    }
    else
    {
        hres = ResultFromScode(E_INVALIDARG);
    }

    return hres;
}


//
// CProxyPage::ReplacePage
//
STDMETHODIMP CProxyPage_ReplacePage(LPSHELLPROPSHEETEXT pspx,
                                 UINT uPageID,
                                 LPFNADDPROPSHEETPAGE pfnReplaceWith,
                                 LPARAM lParam)
{
    return ResultFromScode( E_NOTIMPL );
}
