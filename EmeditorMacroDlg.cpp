// HelloMFC.cpp : Defines the initialization routines for the DLL.
//

#include <direct.h>  
#include "stdafx.h"
#include "EmeditorMacroDlg.h"
#include "DemoDlg.h"
#include "util.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
//TODO: If this DLL is dynamically linked against the MFC DLLs,
//		any functions exported from this DLL which call into
//		MFC must have the AFX_MANAGE_STATE macro added at the
//		very beginning of the function.
//
//		For example:
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// normal function body here
//		}
//
//		It is very important that this macro appear in each
//		function, prior to any calls into MFC.  This means that
//		it must appear as the first statement within the
//		function, even before any object variable declarations
//		as their constructors may generate calls into the MFC
//		DLL.
//
//		Please see MFC Technical Notes 33 and 58 for additional
//		details.
//

//-------------------------------------------------------------------------------------------------
// The following line is needed after CMyFrame definition.
_ETL_IMPLEMENT


//-------------------------------------------------------------------------------------------------
CMyFrame::CMyFrame()
{
}

CMyFrame::~CMyFrame()
{
}

// Queries whether the auto complete for brackets/quotation marks feature should be disabled.
BOOL CMyFrame::DisableAutoComplete( HWND /* hwnd */ )
{
	return FALSE;
}

// Queries whether the plug-in wants to use dropped files.
BOOL CMyFrame::UseDroppedFiles( HWND /* hwnd */ )
{
	return FALSE;
}

// Queries the status of the plug-in, whether the command is enabled and whether the plug-in is a checked status.
BOOL CMyFrame::QueryStatus( HWND /*hwndView*/, LPBOOL pbChecked )
{
	*pbChecked = FALSE;
	return TRUE;
}

// Queries whether the plug-in can be uninstalled.
BOOL CMyFrame::QueryUninstall( HWND /*hDlg*/ )
{
	return TRUE;
}

// Returns TRUE if Properties (dialog box) are supported.
BOOL CMyFrame::QueryProperties( HWND /*hDlg*/ )
{
	return FALSE;
}

// Requests the plug-in to display the properties.
BOOL CMyFrame::SetProperties( HWND /*hDlg*/ )
{
	return FALSE;
}

// Called before each Windows message is translated.
BOOL CMyFrame::PreTranslateMessage( HWND /*hwndView*/, MSG* pMsg )
{
	return FALSE;
}

LRESULT CMyFrame::UserMessage(HWND hwndView, WPARAM wParam, LPARAM lParam)
{
	CString     sMsg;
	CDemoDlg    dlg;
	//CString     fromParent((LPCWSTR)lParam);

	if (dlg.DoModal() == IDOK) {
		sMsg.Format(
			L"============================\n"
			L"Hello World!!\n"
			L"input text = [%s]\n"
			L"choose CheckBox = [%d]\n"
			L"strParam = [%s]\n"
			L"lParam = [%d]\n"
			L"============================\n",
			dlg.m_sEdit.GetString(),
			dlg.m_bChk,
			(LPCWSTR)lParam,
			wParam
		);
		LPWSTR returnMsg = L"我被改变了haha";
		wcscpy((LPWSTR)lParam, returnMsg);
		// writes "Hello Worlds" and user input data in the text editor.
		Editor_InsertW(hwndView, sMsg, true);
	}

	return 5;
}

// The plug-in has been selected from a menu or a toolbar.
void CMyFrame::OnCommand(HWND hwndView)
{
    CString     sMsg;
    CDemoDlg    dlg;
    
    if (dlg.DoModal() == IDOK) {
        sMsg.Format(
            L"============================\n"
            L"Hello World!!\n"
            L"input text = [%s]\n"
            L"choose CheckBox = [%d]\n"
			L"current Directory = [%s]\n"
            L"============================\n",
            dlg.m_sEdit.GetString(),
            dlg.m_bChk,
			getCurrentDirectory().c_str()
        );
	    // writes "Hello Worlds" and user input data in the text editor.
	    Editor_InsertW( hwndView, sMsg, true);
    }
}

// When a status is changed, this function is called with the Events parameter.
void CMyFrame::OnEvents(HWND hwndView, UINT nEvent, LPARAM lParam)
{
}

// Uninstalls the plug-in.
BOOL CMyFrame::SetUninstall( HWND hDlg, LPTSTR pszUninstallCommand, LPTSTR pszUninstallParam )
{
	TCHAR sz[80];
	TCHAR szAppName[80];
	LoadString( EEGetLocaleInstanceHandle(), IDS_SURE_TO_UNINSTALL, sz, sizeof( sz ) / sizeof( TCHAR ) );
	LoadString( EEGetLocaleInstanceHandle(), IDS_MENU_TEXT, szAppName, sizeof( szAppName ) / sizeof( TCHAR ) );
	if( MessageBox( hDlg, sz, szAppName, MB_YESNO | MB_ICONEXCLAMATION ) == IDYES ){
		return UNINSTALL_SIMPLE_DELETE;
	}
	return UNINSTALL_FALSE;
}

//-------------------------------------------------------------------------------------------------
// CHelloMFCApp

BEGIN_MESSAGE_MAP(CHelloMFCApp, CWinApp)
END_MESSAGE_MAP()

// The one and only CHelloMFCApp object
CHelloMFCApp theApp;


// CHelloMFCApp construction

CHelloMFCApp::CHelloMFCApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}

// CHelloMFCApp initialization

BOOL CHelloMFCApp::InitInstance()
{
	CWinApp::InitInstance();
    OnDllProcess_AttachDetach(true);

	return TRUE;
}

int CHelloMFCApp::ExitInstance()
{
    // TODO: Add your specialized code here and/or call the base class
    OnDllProcess_AttachDetach(false);

    return CWinApp::ExitInstance();
}

