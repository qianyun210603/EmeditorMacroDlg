// HelloMFC.h : main header file for the HelloMFC DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols

//we must add following 3 lines :
#define ETL_FRAME_CLASS_NAME CMyFrame
#define __USE_MFC__
#include "EmeLib\etlframe_mfc.h"


//-------------------------------------------------------------------------------------------------
class CMyFrame : public CETLFrame<CMyFrame>
{
public:
	// _loc.dll in MUI sub folder?
	enum { _USE_LOC_DLL			= FALSE					};

	// string ID
	enum { _IDS_MENU			= IDS_MENU_TEXT			};   // name of command, menu
	enum { _IDS_STATUS			= IDS_MENU_TEXT			};   // description of command, status bar
	enum { _IDS_NAME			= IDS_MENU_TEXT			};   // name of plug-in, plug-in settings dialog box
	enum { _IDS_VER				= IDS_VERSION			};   // version string of plug-in, plug-in settings dialog box

	// bitmaps
	enum { _IDB_BITMAP			= IDB_BITMAP			};
	enum { _IDB_16C_24			= 0						};
	enum { _IDB_256C_16_DEFAULT = 0						};
	enum { _IDB_256C_16_HOT		= 0						};
	enum { _IDB_256C_16_BW		= 0						};
	enum { _IDB_256C_24_DEFAULT = 0						};
	enum { _IDB_256C_24_HOT		= 0						};
	enum { _IDB_256C_24_BW		= 0						};
	enum { _IDB_TRUE_16_DEFAULT = 0						};
	enum { _IDB_TRUE_16_HOT		= 0						};
	enum { _IDB_TRUE_16_BW		= 0						};
	enum { _IDB_TRUE_24_DEFAULT = 0						};
	enum { _IDB_TRUE_24_HOT		= 0						};
	enum { _IDB_TRUE_24_BW		= 0						};

	// masks
	enum { _MASK_TRUE_COLOR		= RGB( 192, 192, 192 )	};
	enum { _MASK_256_COLOR		= RGB( 192, 192, 192 )	};

	// whether to allow a file is opened in the same window group during the plug-in execution.
	enum { _ALLOW_OPEN_SAME_GROUP = TRUE				};

	// whether to allow multiple instances.
	enum { _ALLOW_MULTIPLE_INSTANCES = TRUE				};

	// supporting EmEditor newest version * 1000
	enum { _MAX_EE_VERSION		= 11000					};

	// supporting EmEditor oldest version * 1000
	enum { _MIN_EE_VERSION		= 10000					};

	// supports EmEditor Professional
	enum { _SUPPORT_EE_PRO		= TRUE					};

	// supports EmEditor Standard
	enum { _SUPPORT_EE_STD		= TRUE					};

	BOOL DisableAutoComplete( HWND /* hwnd */ );
	BOOL UseDroppedFiles( HWND /* hwnd */ );
	void OnCommand( HWND hwndView );
	BOOL QueryStatus( HWND /*hwndView*/, LPBOOL pbChecked );
	void OnEvents( HWND hwndView, UINT nEvent, LPARAM lParam );
	BOOL QueryUninstall( HWND /*hDlg*/ );
	BOOL SetUninstall( HWND hDlg, LPTSTR pszUninstallCommand, LPTSTR pszUninstallParam );
	BOOL QueryProperties( HWND /*hDlg*/ );
	BOOL SetProperties( HWND /*hDlg*/ );
	BOOL PreTranslateMessage( HWND /*hwndView*/, MSG* pMsg );
	LRESULT UserMessage(HWND /*hwndView*/, WPARAM wParam, LPARAM lParam);
	CMyFrame();
	~CMyFrame();
};
