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
	LPWSTR      buffer = (LPWSTR)lParam;
	UINT        bufferFlag = static_cast<UINT>(wParam);
	CDemoDlg    dlg(buffer, bufferFlag);

	if (dlg.DoModal() == IDOK) {
		return dlg.getBufferFlag();
	}
	return 0;
}

// The plug-in has been selected from a menu or a toolbar.
void CMyFrame::OnCommand(HWND hwndView)
{
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
