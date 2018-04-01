// EmEditor Plug-In definition file
// v3.08 (6 Jan 2001)   CCustomizeInfo::m_bIgnoreColorPrint, CCustomizeInfo::m_bNoFullPathIfNotActive added.
// v3.12 (16 Jan 2001)  EEID_ALL_PROP added.
//                      CCustomizeInfo::m_abUrlChar is now BYTE, not bool.  =2 means not permitted at end of URL.
// v3.13 (15 Mar 2001)  EEID_NEW_PASTE_PREFIX, EEID_NEW_PASTE_PREFIX_RETURN, EEID_CUSTOMIZE_TRAY,
//                      EEID_INSERT_CR_LF, EEID_MRU_FONT1 added.
//                      CCustomizeInfo::m_bSaveOverwrite, CCustomizeInfo::m_bNoChangeCrLf,
//                      CCustomizeInfo::m_bShowSpace, CCustomizeInfo::m_bWordWrapMark added.
//                      EI_IS_PROPORTIONAL_FONT added.
// v3.14 (23 Apr 2001)  CCustomizeInfo::m_bPrintSeparatingLines, CCustomizeInfo::m_bSameFontPrint,
//                      CCustomizeInfo::m_bHiliteCorresParen added.
//                      EEID_DELETE_RIGHT_WORD, EEID_NEXT_PAREN, EEID_SHIFT_NEXT_PAREN added.
//                      CHECK_FILE_CHANGED_EXCLUSIVE added.
// v3.15 (22 May 2001)  CCustomizeInfo::m_bDetectUTF8, CCustomizeInfo::m_bDetectCharset,
//                      CCustomizeInfo::m_bDetectAll, CCustomizeInfo::m_bDeleteSpaceEnd,
//                      CCustomizeInfo::m_bSaveAsEntity, CCustomizeInfo::m_bShowControl added.
//                      Changed LOAD_FILE_INFO structure.
//                      CHARSET_OEM added.
//                      EEID_CHARSET_OEM, EEID_TRIM_RIGHT added.
//                      CODEPAGE_DETECT_UTF8, CODEPAGE_DETECT_CHARSET, CODEPAGE_DETECT_ALL added.
// v3.16 (21 Jun 2001)  EEID_FILE_RELOAD_DETECT_ALL added.
//                      SMART_COLOR_ constants redefined.
//                      CColorInfo class redefined.
//                      CCustomizeInfo::m_nHiliteTag, m_nHiliteMultiComment removed.
//                      CCustomizeInfo::m_nSpecialSyntax, m_chEscape, m_bPasteAnsi, m_bQuoteType,
//                      m_szScriptBegin, m_szScriptEnd, m_szLineComment1, m_szLineComment2 added.
// v3.17 (25 Jul 2001)  EEID_DELETE_LEFT_WORD, EEID_FILE_NEW_CONFIG,
//                      EEID_NEW_CONFIG_POPUP, EEID_FONT_POPUP added.
//                      CCustomizeInfo::m_bSaveAsNameEntity, m_chIndentBegin, m_bNewTemplate,
//                      m_chIndentEnd, m_chEndOfStatement added.
// v3.18 (29 Aug 2001)  EEID_RELOAD_POPUP, EEID_DELETE_PANES added.
//                      MAX_RECENT_FILE defined.
// v3.19 (1 Oct 2001)   EVENT_CHAR added.
//                      EEID_SHOW_PLUGINS_BAR added.
//                      SIGNATURE_PIB_LIST is superseded by SIGNATURE_PIB_LIST_2.
// v3.20 (21 Nov 2001)  EP_GET_BITMAP, EP_GET_MASK added.
// v3.22 (2 Jan 2002)   EEID_PRINT_PREVIEW, EEID_WINDOW_TOP, EEID_WINDOW_BOTTOM,
//                      EEID_WINDOW_RIGHT, EEID_WINDOW_LEFT, EEID_HOME_TEXT, EEID_SHIFT_HOME_TEXT,
//                      EEID_KEYBOARD_MAP added.
// v3.23 (31 Jan 2002)  EEID_WINDOW_SPLIT_HORZ, EEID_WINDOW_SPLIT_VERT
//                      EEID_CONTEXT_MENU, EEID_DELETE_LEFT_LINE,
//                      EEID_INSERT_GRAVE, EEID_INSERT_ACUTE, EEID_INSERT_CIRCUMFLEX, EEID_INSERT_TILDE,
//                      EEID_INSERT_DIAERESIS, EEID_INSERT_RING_ABOVE, EEID_INSERT_LIGATURE, EEID_INSERT_CEDILLA,
//                      EEID_INSERT_STROKE, EEID_INSERT_INVERTED_QUESTION, EEID_INSERT_INVERTED_EXCLAMATION, 
//                      EEID_INSERT_COPYRIGHT, EEID_INSERT_REGISTERED, EEID_INSERT_TRADEMARK, EEID_INSERT_EURO added.
// v3.24 (10 Feb 2002)  EVENT_FILE_OPENED event added. EEID_WRAP_BY_PAPER added.
// v3.28 ( 1 Oct 2002)  FLAG_FIND_REG_EXP and FLAG_FIND_CLOSE added.
// v3.29 ( 6 Nov 2002)  EEID_SHOW_TOOLS_BAR, EEID_BOOKMARK_TOGGLE, EEID_BOOKMARK_NEXT, EEID_BOOKMARK_PREV,
//                      EEID_BOOKMARK_CLEAR, EEID_CUSTOMIZE_TOOLS, EEID_TOOL1 added.
// v3.31 (17 Dec 2002)  EEID_RETRIEVE_FIND_TEXT, EEID_COPY_FILE_PATH, EEID_COPY_FILE_DIR, EEID_DUPLICATE_LINE,
//                      EEID_LOAD_WORKSPACE, EEID_SAVE_WORKSPACE, EEID_SAVE_WORKSPACE_EXIT_ALL, EEID_SAVE_WORKSPACE_QUIT_ALL,
//                      EEID_LOGICAL_HOME_TEXT, EEID_SHIFT_LOGICAL_HOME_TEXT, EEID_WINDOW_SPLIT_HORZ_FIX, EEID_WINDOW_SPLIT_VERT_FIX,
//                      EEID_SHOW_WINDOWS_BAR added.
//                      CCustomizeInfo::m_bShowScrollOnlyActive, CCustomizeInfo::m_bWrapPagePrint added.
//                      EI_GET_NEXT_BOOKMARK added.
// v3.32 (25 Jan 2003)  CCustomizeInfo::m_nMaxFindHilite added. CColorInfo structure removed.
//
// v4.00 (18 Dec 2003)  EE_SET_SEL_TYPE, EE_GET_STATUSA, EE_GET_STATUSW, EE_INSERT_FILEA, EE_INSERT_FILEW added.
//                      EE_INSERT_STRINGA, EE_INSERT_STRINGW extended to use lParam.
//                      EE_GET_VERSION extended to use wParam.
//                      Editor_GetVersionEx, VERSION_PRO, VERSION_STD added.
//                      EI_GET_HILITE_FIND, EI_SET_HILITE_FIND, EI_GET_APP_VERSIONA, EI_GET_APP_VERSIONW, EI_GET_READ_ONLY, 
//                      EI_IS_WINDOW_COMBINED, EI_WINDOW_COMBINE added.
//                      EEID_SHOW_BAR_TITLE, EEID_LOCK_TOOLBARS, EEID_WINDOW_COMBINE, EEID_WINDOW_ALWAYS_TOP_ON, EEID_WINDOW_ALWAYS_TOP_OFF, EEID_MOVE_LAST_EDIT,
//                      EEID_MACRO_SAVE, EEID_MACRO_SELECT, EEID_MACRO_EDIT, EEID_MACRO_SELECT_THIS, EEID_CUSTOMIZE_MACRO, EEID_BOOKMARK_NEXT_WITHIN, 
//                      EEID_BOOKMARK_PREV_WITHIN, EEID_BOOKMARK_SET, EEID_BOOKMARK_RESET, EEID_SPACE_TO_TAB, EEID_TABIFY, EEID_UNTABIFY, EEID_INDENT,
//                      EEID_UNINDENT, EEID_MACRO_HELP, EEID_MACRO_HELP_WORD, EEID_REPLACE_IN_FILES, EEID_QUIT_ALL, EEID_MACRO_RUN_OPTIONS, EEID_INSERT_CARON,
//                      EEID_VIEW_MARKS, EEID_EDIT_COMMENT, EEID_EDIT_UNCOMMENT, EEID_INCREASE_FONT_SIZE, EEID_DECREASE_FONT_SIZE added.
// v4.01 (27 Dec 2003)  EI_IS_UNDO_COMBINED added.
//                      EEID_FIND_NEXT_UNICODE, EEID_FIND_PREV_UNICODE, EEID_ERASE_UNICODE_HILITE added.
// v4.02 (30 Jan 2004)  EE_FIND_IN_FILES, EE_REPLACE_IN_FILES added.
// v4.03 (25 Feb 2004)  EE_GET_ANCHOR_POS, EE_SET_ANCHOR_POS added.  EE_SET_CARET_POS extended.
// v4.05 (30 Apr 2004)  "cb" field of GET_LINE_INFO was changed to "cch" for clarity.
// v4.10 ( 1 Jan 2005)  EEID_JOIN_LINES, EEID_SPLIT_LINES, EEID_IMPORT_EXPORT, EEID_CAPITALIZE, EEID_WINDOW_MOVE_NEXT, EEID_WINDOW_MOVE_PREV, EEID_CLOSE_ALL_OTHERS added.
//                      FLAG_CAPITALIZE flag added for EE_CONVERT message.
// v4.13 (15 Feb 2005)  EEID_WINDOW_SPLIT_HORZ_TOGGLE, EEID_WINDOW_SPLIT_VERT_TOGGLE added.
// v5.00 (24 Nov 2005)  EE_GET_REDRAW added.
//                      EVENT_CREATE_FRAME, EVENT_CLOSE_FRMAE, EVENT_DOC_SEL_CHANGED, EVENT_DOC_CLOSE events added.
//                      EEID_GROUP_CLOSE_ALL, EEID_GROUP_CLOSE_OTHERS, EEID_GROUP_CLOSE_LEFT, EEID_GROUP_CLOSE_RIGHT, EEID_NEW_GROUP, EEID_NEW_GROUP_MINIMIZE,
//                      EEID_NEW_GROUP_CASCADE, EEID_NEW_GROUP_HORZ, EEID_NEW_GROUP_VERT, EEID_MOVE_PREV_GROUP, EEID_MOVE_NEXT_GROUP,
//                      EEID_SORT_FILE_NAME, EEID_SORT_TYPE, EEID_SORT_MODIFIED, EEID_SORT_ZORDER, EEID_SORT_ASCENDING, EEID_SORT_DESCENDING,
//                      EEID_AUTO_SORT, EEID_RESTORE_POS, 
//                      EEID_CUSTOMIZE_FILE, EEID_CUSTOMIZE_SEARCH, EEID_CUSTOMIZE_HISTORY, EEID_CUSTOMIZE_WINDOW, EEID_CUSTOMIZE_TAB, 
//                      EEID_CUSTOMIZE_STATUS, EEID_CUSTOMIZE_ADVANCED, EEID_WINDOW_COMBINE_ON, EEID_WINDOW_COMBINE_OFF added.
//                      EE_SAVE_FILEA, EE_SAVE_FILEW, EE_GET_MODIFIED, EE_GET_CONFIGA, EE_GET_CONFIGW, EE_SET_CONFIGA, EE_SET_CONFIGW, EE_INFO extended to use HIWORD(wParam) = iDoc.
//                      Editor_DocSaveFileA, Editor_DocSaveFileW, Editor_DocGetModified, Editor_DocGetConfigA, Editor_DocGetConfigW
//                      Editor_DocSetConfigA, Editor_DocSetConfigW, Editor_DocInfo macros added.
//                      EI_GET_DOC_COUNT, EI_INDEX_TO_DOC, EI_DOC_TO_INDEX, EI_ZORDER_TO_DOC, EI_DOC_TO_ZORDER, EI_GET_ACTIVE_INDEX, EI_SET_ACTIVE_INDEX, 
//                      EI_GET_FULL_TITLEA, EI_GET_FULL_TITLEW, EI_GET_SHORT_TITLEA, EI_GET_SHORT_TITLEW, EI_GET_SAVE_AS_TITLEA, EI_GET_SAVE_AS_TITLEW, 
//                      EI_MOVE_ORDER, EI_CLOSE_DOC, EI_SAVE_DOC added for EE_INFO commands.
//                      HEEDOC (handle to document) type defined.
//                      Type changes for x64 (EE_GET_SEL_TEXTA, EE_GET_SEL_TEXTW, EE_GET_LINES, EE_GET_LINEA, EE_GET_LINEW, EE_GET_CARET_POS
//                      EE_DEV_TO_VIEW, EE_GET_PAGE_SIZE, EE_GET_SCROLL_POS, EE_LINE_FROM_CHAR, EE_LINE_INDEX, EE_LOGICAL_TO_SERIAL, EE_LOGICAL_TO_VIEW,
//                      EE_SERIAL_TO_LOGICAL, EE_SET_CARET_POS, EE_SET_SCROLL_POS, EE_VIEW_TO_DEV, EE_VIEW_TO_LOGICAL, EE_GET_SEL_START,
//                      EE_GET_SEL_END, EE_SET_SEL_LENGTH, EE_SET_SEL_VIEW, EE_GET_MARGIN, EE_GET_STATUSA, EE_GET_STATUSW, EE_GET_ANCHOR_POS,
//                      EE_SET_ANCHOR_POS messages, 
//                      GET_LINE_INFO, GREP_INFOW, GREP_INFOA, LOAD_FILE_INFO, LOAD_FILE_INFO_EX structures
//                      EE_DO_IDLE message (Editor_DoIdle) added.
//                      EE_GET_SEL_TYPE, EE_SET_SEL_TYPE, EE_SET_SCROLL_POS expanded to use wParam.
//                      EP_GET_INFO added for plugin message.
// v6.00 (7 Jun 2006)   EEID_ACTIVE_PANE, EEID_OUTLINE_COLLAPSE_ALL, EEID_OUTLINE_EXPAND_ALL, EEID_OUTLINE_TOGGLE_LINE,
//                      EEID_OUTLINE_COLLAPSE_LINE, EEID_OUTLINE_EXPAND_LINE, EEID_OUTLINE_NEXT_NODE, EEID_OUTLINE_PREV_NODE,
//                      EEID_SHIFT_NEXT_NODE, EEID_SHIFT_PREV_NODE, EEID_RESTORE_DELETED, EEID_VIEW_OUTPUT command added.
//                      EE_CUSTOM_BAR_OPEN, EE_CUSTOM_BAR_CLOSE, EE_MATCH_REGEX, EE_FIND_REGEX, EE_GET_OUTLINE_LEVEL, EE_SET_OUTLINE_LEVEL,
//                      EE_SHOW_OUTLINE, EE_ENUM_CONFIG messages added.
//						EVENT_IDLE, EVENT_CUSTOM_BAR_CLOSED, EVENT_CUSTOM_BAR_CLOSING events added.
//                      EP_PRE_TRANSLATE_MSG added for plugin message.
//
// v7.00 (18 Dec 2007)  m_nKanjiRead renamed to m_nEncodingRead, m_nEncodeNew renamed to m_nEncodingNew, m_nEncodeWrite renamed to m_nEncodingWrite
//                      EE_TOOLBAR_OPEN, EE_TOOLBAR_CLOSE, EE_TOOLBAR_SHOW, EE_HELP, EE_REG_SET_VALUE, EE_REG_QUERY_VALUE, EE_QUERY_STRING, 
//                      EE_KEYBOARD_PROP, EE_GET_ACCEL_ARRAY, EE_OUTPUT_STRING, EE_OUTPUT_DIR, EE_ENUM_HIGHLIGHT messages added.
//                      Editor_ToolbarOpen, Editor_ToolbarClose, Editor_ToolbarShow, Editor_Help, Editor_RegSetValue, Editor_RegQueryValue, Editor_QueryString,
//                      Editor_KeyboardProp, Editor_GetAccelArray, Editor_OutputString, Editor_OutputDir, Editor_EnumHighlight inline functions added.
//                      TOOLBAR_INFO, REG_SET_VALUE_INFO, REG_QUERY_VALUE_INFO structures added.
//                      EVENT_TOOLBAR_CLOSED, EVENT_TOOLBAR_SHOW events added.
//                      m_bVirtualSpace member added to CCustomizeInfo.
//                      EI_GET_CURRENT_FOLDER, EI_IS_LARGE_DOC flag added.
//                      EE_GET_LINES, EE_GETLINEW, EE_GETLINEA (GET_LINE_INFO structure) supports iDoc parameter.
//                      Editor_DocGetLines inline functions added.
// v7.00.4 (6 Mar 2008) POS_SCROLL_ALWAYS flag added.
//
// v8.00 (16 Aug 2008)  EI_USE_INI, EI_GET_LANGUAGE flags added.
//						m_bShowIndentGuides, m_bDottedLine members added to CCustomizeInfo.
//                      EE_GET_DROPPED_FILE message added.
//						EP_USE_DROPPED_FILES message to plug-ins added.
//						EVENT_SAVING, EVENT_DROPPED events added.
//
// v9.00 (11 Oct 2009)  EE_CLIP_HISTORY, EE_EDIT_TEMP, EE_GET_ATTR, EE_GET_OUTPUT_STRING, EE_RUN_MACRO messages added.
//                      ATTR_INFO, CLIP_INFO, RUN_MACRO_INFO, TEMP_INFO structures added.
//                      Editor_ActivateTemp, Editor_CloseTemp, Editor_EditTemp, Editor_GetAttr, Editor_GetClip, Editor_GetClipPos, Editor_GetOutputString, Editor_InsertClip, Editor_RunMacro, Editor_SaveTemp, Editor_RemoveClip, Editor_RotateClip inline functions.
//                      EP_DISABLE_AUTO_COMPLETE message to plug-ins added.
//                      EVENT_HISTORY, EVENT_TEMP_SAVING events added.
//                      FIND_REGEX_INFO structure was extended with members for the replace expression.
//						EI_COMBINE_HISTORY, EI_GET_BAR_TEXT_COLOR, EI_GET_BAR_BACK_COLOR, EI_GET_RETURN_TYPE flags added.
//
// v9.01 (14 Oct 2009)  EEID_CHECK_UPDATES, EEID_CUSTOMIZE_UPDATE_CHECKER added.
//
// v10.00 (30 Jun 2010) EE_GET_WORD message added.
//                      Editor_GetWord inline function added.
//                      EI_GET_ACTIVE_DOC, EI_SET_ACTIVE_DOC, EI_GET_SYNC_SESSION, and EI_GET_LOC_DLL_INSTANCE flags added.
//						byteCrLf field and FLAG_GET_CRLF_BYTE flag was added to the GET_LINE_INFO structure.
//                      New commands (from EEID_SAVE_UTF16LE_SIGN through EEID_NUMBERING) added.

#pragma once

#ifdef __cplusplus
#define EE_STRICT    // uses inline functions instead of macros
#endif


#ifndef CLR_NONE
#define CLR_NONE                0xFFFFFFFFL
#endif

#define REG_VERSION             10
#define REG_VERSION_3           3  // v3

#define MAX_HIGHLIGHT_COLOR	10

#define RETURN_METHOD_BOTH		0
#define RETURN_METHOD_CR_ONLY	1
#define RETURN_METHOD_LF_ONLY	2

#define WRAP_NONE		0
#define WRAP_BY_CHAR	1
#define WRAP_BY_WINDOW	2
#define WRAP_BY_PAPER	3
#define MAX_WRAP_MODE	4

#define MIN_MARGIN		16
#define MAX_MARGIN		0x7fff  // inclusive

#define MIN_LINE_SPACE		0
#define MAX_LINE_SPACE		30  // inclusive

#define MIN_CHAR_SPACE		0
#define MAX_CHAR_SPACE		30  // inclusive

#define MIN_FIND_HILITE		0
#define MAX_FIND_HILITE     30  // inclusive

#define SPECIAL_SYNTAX_NONE 0
#define SPECIAL_SYNTAX_HTML 1
#define SPECIAL_SYNTAX_HTML_EMBEDDED 2
#define MAX_SPECIAL_SYNTAX	3

#define MAX_FIND_HISTORY 32
#define MIN_RECENT_FILE 0
#define MAX_RECENT_FILE 64
#define DEF_RECENT_FILE 8

#define DEFAULT_COLOR		(ULONG_MAX-1)
#define TRANSPARENT_COLOR	(ULONG_MAX-2)

#define SIGNATURE_FACE_LIST         0x00FF0000
#define SIGNATURE_HILITE_LIST       0x00FF0100
#define SIGNATURE_FIND_LIST         0x00FF0200
#define SIGNATURE_PIK_LIST          0x00FF0300
#define SIGNATURE_PIB_LIST_2        0x00FF0401
#define SIGNATURE_ASSOCIATE_LIST    0x00FF0500
#define SIGNATURE_CODEPAGE_LIST_2   0x00FF0601
#define SIGNATURE_MENU_LIST         0x00FF0700
#define SIGNATURE_MENU_LIST_2       0x00FF0701
#define SIGNATURE_TOOL_LIST         0x00FF0800
#define SIGNATURE_TOOL_LIST_2       0x00FF0801
#define SIGNATURE_TOOL_LIST_3       0x00FF0802
#define SIGNATURE_PIK_T_LIST        0x00FF0900
#define SIGNATURE_WORKSPACE_LISTW   0x00FF0A00
#define SIGNATURE_WORKSPACE_LISTA   0x00FF0A01
#define SIGNATURE_WORKSPACE_LISTW_2 0x00FF0A02
#define SIGNATURE_WORKSPACE_LISTA_2 0x00FF0A03
#define SIGNATURE_WORKSPACE_LISTW_3 0x00FF0A06
#define SIGNATURE_WORKSPACE_LISTA_3 0x00FF0A07
#define SIGNATURE_WORKSPACE_LISTW_4 0x00FF0A08 // new v9
#define SIGNATURE_WORKSPACE_LISTW_5 0x00FF0A09 // new v10
#define SIGNATURE_WORKSPACE_LIST	SIGNATURE_WORKSPACE_LISTW_5
#define SIGNATURE_PIK_M_LIST        0x00FF0B00
#define SIGNATURE_MACRO_LANG_LIST   0x00FF0C00
#define SIGNATURE_THEME_LIST        0x00FF0D00
#define SIGNATURE_PAIR_LIST         0x00FF0E00

#define MAX_CODEPAGE_NAME 80

#define CHARSET_DEFAULT             0
#define CHARSET_ARABIC              1
#define CHARSET_BALTIC              2
#define CHARSET_CENTRAL_EUROPE      3
#define CHARSET_CHINESE_SIMPLIFIED  4
#define CHARSET_CHINESE_TRADITIONAL 5
#define CHARSET_CYRILLIC            6
#define CHARSET_GREEK               7
#define CHARSET_HEBREW              8
#define CHARSET_JAPANESE            9
#define CHARSET_KOREAN              10
#define CHARSET_THAI                11
#define CHARSET_TURKISH             12
#define CHARSET_VIETNAMESE          13
#define CHARSET_WESTERN_EUROPE      14
#define CHARSET_OEM                 15
#define CHARSET_RESERVED_4          16
#define CHARSET_RESERVED_3          17
#define CHARSET_RESERVED_2          18
#define CHARSET_RESERVED_1          19
#define MAX_CHARSET                 20
#define MAX_USED_CHARSET            16

#define CODEPAGE_ANSI               65536
#define CODEPAGE_UNICODE            65537
#define CODEPAGE_UTF16LE            CODEPAGE_UNICODE
#define CODEPAGE_UNICODE_BIGENDIAN  65538
#define CODEPAGE_UTF16BE            CODEPAGE_UNICODE_BIGENDIAN
#define CODEPAGE_BINARY				65539  // v8
#define CODEPAGE_HEX				65540  // v8

#define CODEPAGE_UTF8               65001
#define CODEPAGE_UTF7               65000

#define CODEPAGE_ANSI_FIRST         4
#define CODEPAGE_ANSI_LAST          64999

#define CODEPAGE_932                932     // Japanese Shift-JIS
#define CODEPAGE_JIS                65616   // obsolete, Japanese JIS, use 50220 instead
#define CODEPAGE_EUC                65617   // obsolete, Japanese EUC, use 51932 instead.

#define CODEPAGE_DETECT_UNICODE     0x00020000
#define CODEPAGE_DETECT_UTF8        0x00040000  // v3.15
#define CODEPAGE_DETECT_CHARSET     0x00080000  // v3.15
#define CODEPAGE_DETECT_ALL         0x00100000  // v3.15
#define CODEPAGE_MASK               0x0001ffff

#define CODEPAGE_AUTO_SJIS_JIS      66049  // obsolete
#define CODEPAGE_AUTO_SJIS_JIS_EUC  66050  // obsolete, use 50932 instead.

#define CODEPAGE_UNKNOWN            66304  // internal use only
#define CODEPAGE_MAYBE_EUC          66305  // internal use only
#define CODEPAGE_CONFIG             66307  // internal use only
#define CODEPAGE_SAME_AS_DOC		66308  // internal use only

#define DEF_UNDO_BUFFER_SIZE    10000
#define MIN_UNDO_BUFFER_SIZE    10
#define MAX_UNDO_BUFFER_SIZE    0x0aaaaaa9
#define MAX_PLUG_IN_NAME        80
#define MAX_FILTER_LENGTH       256
#define MAX_CONFIG_NAME         260
#define MAX_ASSOCIATE_LENGTH    16
#define MAX_THEME_NAME			32

#define MAX_HEADER              116  // was 128 before v3.16
#define MAX_FOOTER              116  // was 128 before v3.16
#define MAX_KINSOKU_BEGIN       128
#define MAX_KINSOKU_END         128
#define MAX_MULTI_COMMENT_BEGIN 16
#define MAX_MULTI_COMMENT_END   16
#define MAX_LINE_COMMENT        4  // v3.16
#define MAX_SCRIPT_BEGIN        8  // v3.16
#define MAX_SCRIPT_END          8  // v3.16
#define MAX_PREFIX_LENGTH       80
#define MAX_FILE_FILTER         128
#define MAX_DEF_EXT             128
#define MAX_PREFIX_LIST         40


#define SMART_COLOR_NONE			((BYTE)(-1))
#define SMART_COLOR_NORMAL			0
#define SMART_COLOR_SEL				1
#define SMART_COLOR_CURLINE			2
#define SMART_COLOR_QUOTE			3
#define SMART_COLOR_FIND			4
#define SMART_COLOR_LINK_URL		5
#define SMART_COLOR_LINK_ID			6
#define SMART_COLOR_LINK_TAG		7
#define SMART_COLOR_SINGLE_QUOTES   8
#define SMART_COLOR_DOUBLE_QUOTES   9
#define SMART_COLOR_COMMENT			10
#define SMART_COLOR_SCRIPT			11
#define SMART_COLOR_BRACES			12
#define SMART_COLOR_IN_TAG			13
#define SMART_COLOR_HILITE_1		14
#define SMART_COLOR_HILITE_2		15
#define SMART_COLOR_HILITE_3		16
#define SMART_COLOR_HILITE_4		17
#define SMART_COLOR_HILITE_5		18
#define SMART_COLOR_HILITE_6		19
#define SMART_COLOR_HILITE_7		20
#define SMART_COLOR_HILITE_8		21
#define SMART_COLOR_HILITE_9		22
#define SMART_COLOR_HILITE_10		23
#define SMART_COLOR_RETURN			24
#define SMART_COLOR_LINE			25
#define SMART_COLOR_PAGE_LINE		26
#define SMART_COLOR_LINE_NUMBER		27
#define SMART_COLOR_RULER			28
#define SMART_COLOR_OUTSIDE			29
#define SMART_COLOR_COMPARE_CHANGE	30
#define SMART_COLOR_COMPARE_CHAR	31
#define SMART_COLOR_COMPARE_ADDED	32
#define SMART_COLOR_COMPARE_DELETED	33
#define SMART_COLOR_COMPARE_BLANK	34
#define SMART_COLOR_SPELL			35
#define SMART_COLOR_UNICODE			36
#define SMART_COLOR_VERTICAL_SEL	37
#define SMART_COLOR_HEX_SEL			38
#define SMART_COLOR_INDENT_GUIDES	39
#define SMART_COLOR_HORZ_GRID		40
#define SMART_COLOR_OUTLINE			41
#define SMART_COLOR_LINE_NUMBER_LINES	42
#define SMART_COLOR_RULER_LINES			43

#define MAX_SMART_COLOR				44
//#define MAX_SMART_COLOR				42
#define MAX_SMART_COLOR_V9			30
#define MAX_SMART_COLOR_FIND		(MAX_SMART_COLOR + (MAX_FIND_HILITE + 1))

#define SMART_COLOR_FONT_NORMAL     0
#define SMART_COLOR_FONT_UNDERLINE  1
#define SMART_COLOR_FONT_BOLD       2
#define SMART_COLOR_FONT_ITALIC     3
#define SMART_COLOR_FONT_WIGGLY		4
#define SMART_COLOR_FONT_DOTTED		5

#define QUOTE_NONE              0
#define QUOTE_SINGLE            1
#define QUOTE_DOUBLE            2
#define QUOTE_BOTH              3
#define QUOTE_CONTINUE          4

// v6
#define CUSTOM_BAR_LEFT		0
#define CUSTOM_BAR_TOP		1
#define CUSTOM_BAR_RIGHT	2
#define CUSTOM_BAR_BOTTOM	3
#define MAX_CUSTOM_BAR		4

// v7
#define EEREG_COMMON				(0x7fffff00)  // HKEY_CURRENT_USER\Software\EmSoft\EmEditor v3\Common             or eeCommon.ini\[Common]
#define EEREG_REGIST				(0x7fffff01)  // HKEY_CURRENT_USER\Software\EmSoft\Regist                         or eeCommon.ini\[Regist]
#define EEREG_MACROS				(0x7fffff02)  // HKEY_CURRENT_USER\Software\EmSoft\EmEditor v3\Macros             or eeCommon.ini\[Macros]
#define EEREG_PLUGINS				(0x7fffff03)  // HKEY_CURRENT_USER\Software\EmSoft\EmEditor v3\PlugIns            or eeCommon.ini\[PlugIns]
#define EEREG_RECENT_FILE_LIST		(0x7fffff04)  // HKEY_CURRENT_USER\Software\EmSoft\EmEditor v3\Recent File List   or eeCommon.ini\[Recent File List]
#define EEREG_RECENT_FOLDER_LIST	(0x7fffff05)  // HKEY_CURRENT_USER\Software\EmSoft\EmEditor v3\Recent Folder List or eeCommon.ini\[Recent Folder List]
#define EEREG_RECENT_FONT_LIST		(0x7fffff06)  // HKEY_CURRENT_USER\Software\EmSoft\EmEditor v3\Recent Font List   or eeCommon.ini\[Recent Font List]
#define EEREG_RECENT_INSERT_LIST	(0x7fffff07)  // HKEY_CURRENT_USER\Software\EmSoft\EmEditor v3\Recent Insert List or eeCommon.ini\[Recent Insert List]
#define EEREG_AUTOSAVE				(0x7fffff08)  // HKEY_CURRENT_USER\Software\EmSoft\EmEditor v3\AutoSave           or eeCommon.ini\[AutoSave]
#define EEREG_LM_COMMON				(0x7fffff11)  // HKEY_LOCAL_MACHINE\SOFTWARE\EmSoft\EmEditor v3\Common            or eeLM.ini\[Common]
#define EEREG_LM_REGIST				(0x7fffff12)  // HKEY_LOCAL_MACHINE\SOFTWARE\EmSoft\Regist                        or eeLM.ini\[Regist]
#define EEREG_CONFIG				(0x7fffff20)  // HKEY_CURRENT_USER\Software\EmSoft\EmEditor v3\Config\(pszConfig) or eeConfig.ini\[(pszConfig)]
#define EEREG_EMEDITORPLUGIN		(0x7fffff30)  // HKEY_CURRENT_USER\Software\EmSoft\EmEditorPlugIns                or eePlugins.ini\[(pszConfig)]
#define EEREG_EMEDITORUSERS			(0x7fffff31)  // HKEY_CURRENT_USER\Software\EmSoft\EmEditorUsers				  or eeUsers.ini\[(pszConfig)]
#define IS_EEREG_COMMON(x)			((DWORD)x >= EEREG_COMMON && (DWORD)x < EEREG_LM_COMMON)
#define IS_EEREG_LM(x)				((DWORD)x >= EEREG_LM_COMMON && (DWORD)x < EEREG_CONFIG)
#define	EE_REG_VARIABLE_SIZE		1

// events
#define EVENT_SEL_CHANGED       0x00000010
#define EVENT_CARET_MOVED       0x00000020
#define EVENT_MODIFIED          0x00000040
#define EVENT_SCROLL            0x00000080
#define EVENT_CONFIG_CHANGED    0x00000100
#define EVENT_CHANGE            0x00000200
#define EVENT_CREATE            0x00000400
#define EVENT_CLOSE             0x00000800
#define EVENT_KILL_FOCUS        0x00001000
#define EVENT_SET_FOCUS         0x00002000
#define EVENT_CHAR              0x00004000
#define EVENT_FILE_OPENED       0x00008000

// new events for v5
#define EVENT_CREATE_FRAME      0x00010000
#define EVENT_CLOSE_FRAME       0x00020000
#define EVENT_DOC_SEL_CHANGED   0x00040000
#define EVENT_TAB_MOVED         0x00080000
#define EVENT_DOC_CLOSE			0x00100000

// new events for v6
#define EVENT_IDLE				0x00200000
#define EVENT_CUSTOM_BAR_CLOSED	0x00400000
#define EVENT_CUSTOM_BAR_CLOSING 0x00800000

// new events for v7
#define EVENT_TOOLBAR_CLOSED	0x01000000
#define EVENT_TOOLBAR_SHOW		0x02000000

// new events for v8
#define EVENT_SAVING			0x04000000
#define EVENT_DROPPED			0x08000000
#define EVENT_LANGUAGE			0x10000000

// new events for v9
#define EVENT_HISTORY			0x20000000
#define EVENT_TEMP_SAVING		0x40000000

typedef void *HEEDOC;

// EE_LOAD_FILE
typedef struct _LOAD_FILE_INFO {
    size_t cbSize;          // sizeof( LOAD_FILE_INFO )
    UINT nCP;
    BOOL bDetectUnicode;
    BOOL bDetectAll;
    BOOL bDetectCharset;
    BOOL bDetectUTF8;
} LOAD_FILE_INFO;

// EE_LOAD_FILE_EX
typedef struct _LOAD_FILE_INFO_EX {
    size_t cbSize;          // sizeof( LOAD_FILE_INFO_EX )
    UINT nCP;
    BOOL bDetectUnicode;
    BOOL bDetectAll;
    BOOL bDetectCharset;
    BOOL bDetectUTF8;
    UINT nFlags;
} LOAD_FILE_INFO_EX;

#define LFI_ALLOW_NEW_WINDOW    1
#define LFI_ALLOW_ASYNC_OPEN	2

#define FLAG_CR_ONLY	1
#define FLAG_LF_ONLY	2

typedef struct _GET_LINE_INFO {
    UINT_PTR	cch;		// in
    UINT		flags;		// in
    UINT_PTR	yLine;		// in
	BYTE		byteCrLf;	// out (valid only when flags contains FLAG_GET_CRLF_BYTE)
} GET_LINE_INFO;

typedef struct _GREP_INFOW {
    size_t  cbSize;         // sizeof( GREP_INFOW )
    UINT    nCP;
    UINT    nFlags;
    LPCWSTR pszFind;
    LPCWSTR pszReplace;
    LPCWSTR pszPath;
    LPCWSTR pszBackupPath;
    LPCWSTR pszFilesToIgnore;
} GREP_INFOW;

typedef struct _GREP_INFOA {
    size_t  cbSize;         // sizeof( GREP_INFOA )
    UINT    nCP;
    UINT    nFlags;
    LPCSTR  pszFind;
    LPCSTR  pszReplace;
    LPCSTR  pszPath;
    LPCSTR  pszBackupPath;
    LPCSTR  pszFilesToIgnore;
} GREP_INFOA;

typedef struct _MATCH_REGEX_INFO {
	size_t  cbSize;         // sizeof( MATCH_REGEX_INFO )
	UINT	nFlags;
	LPCWSTR pszRegex;
	LPCWSTR pszText;
	LPCWSTR pszReplace;   // new v9
	LPWSTR  pszResult;  // new v9
	UINT	cchResult;    // new v9
} MATCH_REGEX_INFO;

typedef struct _FIND_REGEX_INFO {
	size_t  cbSize;         // sizeof( FIND_REGEX_INFO )
	UINT	nFlags;
	LPCWSTR pszRegex;
	LPCWSTR pszText;
	LPCWSTR* ppszStart;
	LPCWSTR* ppszEnd;
	LPCWSTR* ppszNext;
	LPCWSTR pszReplace;   // new v9
	LPWSTR  pszResult;  // new v9
	UINT	cchResult;    // new v9
} FIND_REGEX_INFO;

typedef struct _CUSTOM_BAR_INFO {
	size_t  cbSize;
	HWND	hwndCustomBar;
	HWND	hwndClient;
	LPCTSTR pszTitle;
	int		iPos;
} CUSTOM_BAR_INFO;

#define CLOSED_FRAME_WINDOW			1
#define CLOSED_ANOTHER_CUSTOM_BAR	2

typedef struct _CUSTOM_BAR_CLOSE_INFO {
	UINT	nID;
	int		iPos;
	DWORD	dwFlags;
} CUSTOM_BAR_CLOSE_INFO;

#if (defined(_WIN64) || defined(_W64))
typedef struct tagPOINT_PTR
{
    LONG_PTR  x;
    LONG_PTR  y;
} POINT_PTR, *PPOINT_PTR;

typedef struct tagSIZE_PTR
{
    LONG_PTR  cx;
    LONG_PTR  cy;
} SIZE_PTR, *PSIZE_PTR;
#else
typedef struct tagPOINT_PTR
{
    LONG  x;
    LONG  y;
} POINT_PTR, *PPOINT_PTR;

typedef struct tagSIZE_PTR
{
    LONG  cx;
    LONG  cy;
} SIZE_PTR, *PSIZE_PTR;
#endif

#define HISTORY_INSERT_CHAR	  		0
#define HISTORY_BACK_SPACE	  		1
#define HISTORY_DELETE_CHAR	  		2
#define HISTORY_INSERT_STRING		3
#define HISTORY_DELETE_STRING		5
#define HISTORY_INSERT_TAB_SEL		6
#define HISTORY_TYPE_MASK			0x0000000fL

#define HISTORY_MODIFIED            0x00010000L
#define HISTORY_COMBINED			0x00020000L
#define HISTORY_CR_ONLY				0x00040000L
#define HISTORY_LF_ONLY				0x00080000L
#define HISTORY_SEL_BOX				0x00100000L
#define HISTORY_INSIDE_UNDO			0x00200000L
#define HISTORY_INSIDE_REDO			0x00400000L

typedef struct _HISTORY_INFO {
	size_t  cbSize;
	UINT	nFlags;
	POINT_PTR ptTop;
	POINT_PTR ptBottom;
	UINT	nChar;
	LPCWSTR pszString;
} HISTORY_INFO;

#define TIM_REBAR			0x0001
#define TIM_CLIENT			0x0002
#define TIM_TITLE			0x0004
#define TIM_ID				0x0008
#define TIM_FLAGS			0x0010
#define TIM_STYLE			0x0020
#define TIM_MINCHILD		0x0040
#define TIM_CX				0x0080
#define TIM_CXIDEAL			0x0100
#define TIM_BAND			0x0200
#define TIM_PLUG_IN_CMD_ID	0x0400

typedef struct _TOOLBAR_INFO {
	size_t  cbSize;
	HWND    hwndRebar;
	HWND	hwndClient;
	LPCTSTR pszTitle;
	UINT	nMask;
	UINT	nID;
	UINT    nFlags;
	UINT	fStyle;
	UINT	cxMinChild;
	UINT	cyMinChild;
	UINT	cx;
	UINT	cxIdeal;
	UINT	nBand;
	WORD	wPlugInCmdID;
//	UINT	cyChild;
//	UINT	cyMaxChild;
//	UINT	cyIntegral;
} TOOLBAR_INFO;

typedef struct _REG_SET_VALUE_INFO {
	size_t	cbSize;
	DWORD	dwKey;
	LPCWSTR pszConfig;
	LPCWSTR pszValue;
	DWORD	dwType;
	const	BYTE* lpData;
	DWORD	cbData;
	DWORD	dwFlags;
} REG_SET_VALUE_INFO;

typedef struct _REG_QUERY_VALUE_INFO {
	size_t	cbSize;
	DWORD	dwKey;
	LPCWSTR pszConfig;
	LPCWSTR pszValue;
	DWORD	dwType;
	BYTE*   lpData;
	DWORD*	lpcbData;
	DWORD	dwFlags;
} REG_QUERY_VALUE_INFO;


typedef struct _PROCESS_INFO {
	size_t  cbSize;
	LPCWSTR pszAppName;
	LPCWSTR pszCmdLine;
	LPCWSTR pszDir;
	UINT	nFlags;
	UINT	nCP;
} PROCESS_INFO;

#define EE_FIRST                (WM_USER+0x400)
#define EE_GET_CMD_ID           (EE_FIRST+0)
  // (HINSTANCE)lParam = hInstance
  // returns (UINT)nCmdID

#ifdef EE_STRICT
inline UINT Editor_GetCmdID( HWND hwnd, HINSTANCE hInstance )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (UINT)SNDMSG( hwnd, EE_GET_CMD_ID, 0, (LPARAM)hInstance );
}
#else
#define Editor_GetCmdID( hwnd, hInstance ) \
    (UINT)SNDMSG( (hwnd), EE_GET_CMD_ID, 0, (LPARAM)(HINSTANCE)(hInstance) )
#endif

#define EE_QUERY_STATUS         (EE_FIRST+1)
  // (UINT)wParam = nCmdID, (BOOL*)lParam = &bChecked
  // returns (BOOL)bEnabled

#ifdef EE_STRICT
inline BOOL Editor_QueryStatus( HWND hwnd, UINT nCmdID, BOOL* pbChecked )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (BOOL)SNDMSG( hwnd, EE_QUERY_STATUS, (WPARAM)nCmdID, (LPARAM)pbChecked );
}
#else
#define Editor_QueryStatus( hwnd, nCmdID, pbChecked ) \
    (BOOL)SNDMSG( (hwnd), EE_QUERY_STATUS, (WPARAM)(UINT)(nCmdID), (LPARAM)(BOOL*)pbChecked )
#endif

#define EE_UPDATE_TOOLBAR       (EE_FIRST+2)
  // (UINT)wParam = nCmdID

#ifdef EE_STRICT
inline void Editor_UpdateToolbar( HWND hwnd, UINT nCmdID )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( hwnd, EE_UPDATE_TOOLBAR, (WPARAM)nCmdID, 0 );
}
#else
#define Editor_UpdateToolbar( hwnd, nCmdID ) \
    (void)SNDMSG( (hwnd), EE_UPDATE_TOOLBAR, (WPARAM)(UINT)(nCmdID), (LPARAM)0 )
#endif

#define EE_GET_SEL_TEXTA        (EE_FIRST+3)
  // (UINT_PTR)wParam = nBufferSize, (LPSTR)lParam = szBuffer
  // returns (UINT_PTR)nRequiredBufferSize

#ifdef EE_STRICT
inline UINT_PTR Editor_GetSelTextA( HWND hwnd, UINT_PTR nBufferSize, LPSTR szBuffer )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (UINT_PTR)SNDMSG( hwnd, EE_GET_SEL_TEXTA, (WPARAM)nBufferSize, (LPARAM)szBuffer );
}
#else
#define Editor_GetSelTextA( hwnd, nBufferSize, szBuffer ) \
    (UINT_PTR)SNDMSG( (hwnd), EE_GET_SEL_TEXTA, (WPARAM)(UINT_PTR)(nBufferSize), (LPARAM)(LPSTR)(szBuffer) )
#endif

#define EE_GET_SEL_TEXTW        (EE_FIRST+46)
  // (UINT_PTR)wParam = nBufferSize, (LPWSTR)lParam = szBuffer
  // returns (UINT_PTR)nRequiredBufferSize
#ifdef EE_STRICT
inline UINT_PTR Editor_GetSelTextW( HWND hwnd, UINT_PTR nBufferSize, LPWSTR szBuffer )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (UINT_PTR)SNDMSG( hwnd, EE_GET_SEL_TEXTW, (WPARAM)nBufferSize, (LPARAM)szBuffer );
}
#else
#define Editor_GetSelTextW( hwnd, nBufferSize, szBuffer ) \
    (UINT_PTR)SNDMSG( (hwnd), EE_GET_SEL_TEXTW, (WPARAM)(UINT_PTR)(nBufferSize), (LPARAM)(LPWSTR)(szBuffer) )
#endif

#define EE_GET_LINES            (EE_FIRST+4)
  // wParam = MAKEWPARAM( nLogical, iDoc+1 )
  // returns (UINT_PTR)nTotalLines

inline UINT_PTR Editor_DocGetLines( HWND hwnd, int iDoc, int nLogical )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (UINT_PTR)SNDMSG( hwnd, EE_GET_LINES, (WPARAM)MAKEWPARAM( nLogical, iDoc+1 ), (LPARAM)0 );
}

#ifdef EE_STRICT
inline UINT_PTR Editor_GetLines( HWND hwnd, int nLogical )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (UINT_PTR)SNDMSG( hwnd, EE_GET_LINES, (WPARAM)(int)(nLogical), (LPARAM)0 );
}
#else
#define Editor_GetLines( hwnd, nLogical ) \
    (UINT_PTR)SNDMSG( (hwnd), EE_GET_LINES, (WPARAM)(int)(nLogical), (LPARAM)0 )
#endif

#define EE_GET_LINEA            (EE_FIRST+5)
  // (GET_LINE_INFO*)wParam = pGetLineInfo, (LPSTR)lParam = szString
  // returns (UINT_PTR)nRequiredBufferSize

#ifdef EE_STRICT
inline UINT_PTR Editor_GetLineA( HWND hwnd, GET_LINE_INFO* pGetLineInfo, LPSTR szString )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (UINT_PTR)SNDMSG( (hwnd), EE_GET_LINEA, (WPARAM)(GET_LINE_INFO*)(pGetLineInfo), (LPARAM)(LPSTR)(szString) );
}
#else
#define Editor_GetLineA( hwnd, pGetLineInfo, szString ) \
    (UINT_PTR)SNDMSG( (hwnd), EE_GET_LINEA, (WPARAM)(GET_LINE_INFO*)(pGetLineInfo), (LPARAM)(LPSTR)(szString) )
#endif

#define EE_GET_LINEW            (EE_FIRST+47)
  // (GET_LINE_INFO*)wParam = pGetLineInfo, (LPWSTR)lParam = szString
  // returns (UINT_PTR)nRequiredBufferSize

#ifdef EE_STRICT
inline UINT_PTR Editor_GetLineW( HWND hwnd, GET_LINE_INFO* pGetLineInfo, LPWSTR szString )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (UINT_PTR)SNDMSG( (hwnd), EE_GET_LINEW, (WPARAM)(GET_LINE_INFO*)(pGetLineInfo), (LPARAM)(LPWSTR)(szString) );
}
#else
#define Editor_GetLineW( hwnd, pGetLineInfo, szString ) \
    (UINT_PTR)SNDMSG( (hwnd), EE_GET_LINEW, (WPARAM)(GET_LINE_INFO*)(pGetLineInfo), (LPARAM)(LPWSTR)(szString) )
#endif

#define EE_GET_CARET_POS        (EE_FIRST+6)
  // (int)wParam = nLogical, (POINT_PTR*)lParam = pptPos

#ifdef EE_STRICT
inline void Editor_GetCaretPos( HWND hwnd, int nLogical, POINT_PTR* pptPos )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( hwnd, EE_GET_CARET_POS, (WPARAM)nLogical, (LPARAM)pptPos );
}
#else
#define Editor_GetCaretPos( hwnd, nLogical, pptPos ) \
    (void)SNDMSG( (hwnd), EE_GET_CARET_POS, (WPARAM)(int)(nLogical), (LPARAM)(POINT_PTR*)(pptPos) )
#endif

#define EE_DEV_TO_VIEW          (EE_FIRST+7)
  // (POINT_PTR*)wParam = pptDev, (POINT_PTR*)lParam = pptView

#ifdef EE_STRICT
inline void Editor_DevToView( HWND hwnd, POINT_PTR* pptDev, POINT_PTR* pptView )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_DEV_TO_VIEW, (WPARAM)(POINT_PTR*)(pptDev), (LPARAM)(POINT_PTR*)(pptView) );
}
#else
#define Editor_DevToView( hwnd, pptDev, pptView ) \
    (void)SNDMSG( (hwnd), EE_DEV_TO_VIEW, (WPARAM)(POINT_PTR*)(pptDev), (LPARAM)(POINT_PTR*)(pptView) )
#endif

#define EE_GET_PAGE_SIZE        (EE_FIRST+8)
  // (SIZE_PTR*)lParam = psizePage

#ifdef EE_STRICT
inline void Editor_GetPageSize( HWND hwnd, SIZE_PTR* psizePage )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_GET_PAGE_SIZE, (WPARAM)0, (LPARAM)(SIZE_PTR*)(psizePage) );
}
#else
#define Editor_GetPageSize( hwnd, psizePage ) \
    (void)SNDMSG( (hwnd), EE_GET_PAGE_SIZE, (WPARAM)0, (LPARAM)(SIZE_PTR*)(psizePage) )
#endif

#define EE_GET_SCROLL_POS       (EE_FIRST+9)
  // (POINT_PTR*)lParam = pptPos

#ifdef EE_STRICT
inline void Editor_GetScrollPos( HWND hwnd, POINT_PTR* pptPos )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_GET_SCROLL_POS, (WPARAM)0, (LPARAM)(POINT_PTR*)(pptPos) );
}
#else
#define Editor_GetScrollPos( hwnd, pptPos ) \
    (void)SNDMSG( (hwnd), EE_GET_SCROLL_POS, (WPARAM)0, (LPARAM)(POINT_PTR*)(pptPos) )
#endif

#define EE_LINE_FROM_CHAR       (EE_FIRST+10)
  // (int)wParam = nLogical, (UINT_PTR)lParam = nSerialIndex
  // returns (UINT_PTR)yLine

#ifdef EE_STRICT
inline UINT_PTR Editor_LineFromChar( HWND hwnd, int nLogical, UINT_PTR nSerialIndex )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (UINT_PTR)SNDMSG( (hwnd), EE_LINE_FROM_CHAR, (WPARAM)(int)(nLogical), (LPARAM)(UINT_PTR)(nSerialIndex) );
}
#else
#define Editor_LineFromChar( hwnd, nLogical, nSerialIndex ) \
    (UINT_PTR)SNDMSG( (hwnd), EE_LINE_FROM_CHAR, (WPARAM)(int)(nLogical), (LPARAM)(UINT_PTR)(nSerialIndex) )
#endif

#define EE_LINE_INDEX           (EE_FIRST+11)
  // (BOOL)wParam = bLogical, (UINT_PTR)lParam = yLine
  // returns (UINT_PTR)nSerialIndex

#ifdef EE_STRICT
inline UINT_PTR Editor_LineIndex( HWND hwnd, BOOL bLogical, UINT_PTR yLine )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (UINT_PTR)SNDMSG( (hwnd), EE_LINE_INDEX, (WPARAM)(BOOL)(bLogical), (LPARAM)(UINT_PTR)(yLine) );
}
#else
#define Editor_LineIndex( hwnd, bLogical, yLine ) \
    (UINT_PTR)SNDMSG( (hwnd), EE_LINE_INDEX, (WPARAM)(BOOL)(bLogical), (LPARAM)(UINT_PTR)(yLine) )
#endif

#define EE_LOAD_FILEA           (EE_FIRST+12)
  // (LOAD_FILE_INFO_EX*)wParam = plfi
  // (LPCSTR)lParam = szFileName
  // returns non-zero if success, 0 if failed

#ifdef EE_STRICT
inline BOOL Editor_LoadFileA( HWND hwnd, LOAD_FILE_INFO_EX* plfi, LPCSTR szFileName )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (BOOL)SNDMSG( (hwnd), EE_LOAD_FILEA, (WPARAM)plfi, (LPARAM)(LPCSTR)(szFileName) );
}
#else
#define Editor_LoadFileA( hwnd, plfi, szFileName ) \
    (BOOL)SNDMSG( (hwnd), EE_LOAD_FILEA, (WPARAM)(LOAD_FILE_INFO_EX*)plfi, (LPARAM)(LPCSTR)(szFileName) )
#endif

#define EE_LOAD_FILEW           (EE_FIRST+48)
  // (LOAD_FILE_INFO_EX*)wParam = plfi
  // (LPCWSTR)lParam = szFileName
  // returns non-zero if success, 0 if failed

#ifdef EE_STRICT
inline BOOL Editor_LoadFileW( HWND hwnd, LOAD_FILE_INFO_EX* plfi, LPCWSTR szFileName )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (BOOL)SNDMSG( (hwnd), EE_LOAD_FILEW, (WPARAM)plfi, (LPARAM)(LPCWSTR)(szFileName) );
}
#else
#define Editor_LoadFileW( hwnd, plfi, szFileName ) \
    (BOOL)SNDMSG( (hwnd), EE_LOAD_FILEW, (WPARAM)(LOAD_FILE_INFO_EX*)plfi, (LPARAM)(LPCWSTR)(szFileName) )
#endif

#define EE_LOGICAL_TO_SERIAL    (EE_FIRST+13)
  // (POINT_PTR*)lParam = pptLogical
  // returns (UINT_PTR)nSerialIndex

#ifdef EE_STRICT
inline UINT_PTR Editor_LogicalToSerial( HWND hwnd, POINT_PTR* pptLogical )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (UINT_PTR)SNDMSG( (hwnd), EE_LOGICAL_TO_SERIAL, (WPARAM)0, (LPARAM)(POINT_PTR*)(pptLogical) );
}
#else
#define Editor_LogicalToSerial( hwnd, pptLogical ) \
    (UINT_PTR)SNDMSG( (hwnd), EE_LOGICAL_TO_SERIAL, (WPARAM)0, (LPARAM)(POINT_PTR*)(pptLogical) )
#endif

#define EE_LOGICAL_TO_VIEW      (EE_FIRST+14)
  // (POINT_PTR*)wParam = pptLogical, (POINT_PTR*)lParam = pptView

#ifdef EE_STRICT
inline void Editor_LogicalToView( HWND hwnd, POINT_PTR* pptLogical, POINT_PTR* pptView )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_LOGICAL_TO_VIEW, (WPARAM)(POINT_PTR*)(pptLogical), (LPARAM)(POINT_PTR*)(pptView) );
}
#else
#define Editor_LogicalToView( hwnd, pptLogical, pptView ) \
    (void)SNDMSG( (hwnd), EE_LOGICAL_TO_VIEW, (WPARAM)(POINT_PTR*)(pptLogical), (LPARAM)(POINT_PTR*)(pptView) )
#endif

#define EE_SAVE_FILEA           (EE_FIRST+16)
  // (BOOL)wParam = bReplace, (LPSTR)lParam = szFileName
  // returns non-zero if success, 0 if failed

#ifdef EE_STRICT
inline BOOL Editor_SaveFileA( HWND hwnd, BOOL bReplace, LPSTR szFileName )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (BOOL)SNDMSG( (hwnd), EE_SAVE_FILEA, (WPARAM)(BOOL)(bReplace), (LPARAM)(LPSTR)(szFileName) );
}
#else
#define Editor_SaveFileA( hwnd, bReplace, szFileName ) \
    (BOOL)SNDMSG( (hwnd), EE_SAVE_FILEA, (WPARAM)(BOOL)(bReplace), (LPARAM)(LPSTR)(szFileName) )
#endif

#ifdef EE_STRICT
inline BOOL Editor_DocSaveFileA( HWND hwnd, int iDoc, BOOL bReplace, LPSTR szFileName )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (BOOL)SNDMSG( (hwnd), EE_SAVE_FILEA, MAKEWPARAM((bReplace), (iDoc)+1), (LPARAM)(LPSTR)(szFileName) );
}
#else
#define Editor_DocSaveFileA( hwnd, iDoc, bReplace, szFileName ) \
    (BOOL)SNDMSG( (hwnd), EE_SAVE_FILEA, MAKEWPARAM((bReplace), (iDoc)+1), (LPARAM)(LPSTR)(szFileName) )
#endif

#define EE_SAVE_FILEW           (EE_FIRST+49)
  // (BOOL)wParam = bReplace, (LPWSTR)lParam = szFileName
  // returns non-zero if success, 0 if failed

#ifdef EE_STRICT
inline BOOL Editor_SaveFileW( HWND hwnd, BOOL bReplace, LPWSTR szFileName )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (BOOL)SNDMSG( (hwnd), EE_SAVE_FILEW, (WPARAM)(BOOL)(bReplace), (LPARAM)(LPWSTR)(szFileName) );
}
#else
#define Editor_SaveFileW( hwnd, bReplace, szFileName ) \
    (BOOL)SNDMSG( (hwnd), EE_SAVE_FILEW, (WPARAM)(BOOL)(bReplace), (LPARAM)(LPWSTR)(szFileName) )
#endif

#ifdef EE_STRICT
inline BOOL Editor_DocSaveFileW( HWND hwnd, int iDoc, BOOL bReplace, LPWSTR szFileName )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (BOOL)SNDMSG( (hwnd), EE_SAVE_FILEW, MAKEWPARAM((bReplace), (iDoc)+1), (LPARAM)(LPWSTR)(szFileName) );
}
#else
#define Editor_DocSaveFileW( hwnd, iDoc, bReplace, szFileName ) \
    (BOOL)SNDMSG( (hwnd), EE_SAVE_FILEW, MAKEWPARAM((bReplace), (iDoc)+1), (LPARAM)(LPWSTR)(szFileName) )
#endif

#define EE_SERIAL_TO_LOGICAL    (EE_FIRST+17)
  // (UINT_PTR)wParam = nSerial, (POINT_PTR*)lParam = pptLogical

#ifdef EE_STRICT
inline void Editor_SerialToLogical( HWND hwnd, UINT_PTR nSerial, POINT_PTR* pptLogical )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_SERIAL_TO_LOGICAL, (WPARAM)(UINT_PTR)(nSerial), (LPARAM)(POINT_PTR*)(pptLogical) );
}
#else
#define Editor_SerialToLogical( hwnd, nSerial, pptLogical ) \
    (void)SNDMSG( (hwnd), EE_SERIAL_TO_LOGICAL, (WPARAM)(UINT_PTR)(nSerial), (LPARAM)(POINT_PTR*)(pptLogical) )
#endif

#define EE_SET_CARET_POS        (EE_FIRST+18)
  // wParam = MAKEWPARAM( nLogical, bExtend )
  // (POINT_PTR*)lParam = pptPos

#ifdef EE_STRICT
inline void Editor_SetCaretPos( HWND hwnd, int nLogical, POINT_PTR* pptPos )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_SET_CARET_POS, (WPARAM)(int)(nLogical), (LPARAM)(POINT_PTR*)(pptPos) );
}
#else
#define Editor_SetCaretPos( hwnd, nLogical, pptPos ) \
    (void)SNDMSG( (hwnd), EE_SET_CARET_POS, (WPARAM)(int)(nLogical), (LPARAM)(POINT_PTR*)(pptPos) )
#endif

#ifdef EE_STRICT
inline void Editor_SetCaretPosEx( HWND hwnd, int nLogical, POINT_PTR* pptPos, BOOL bExtend )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_SET_CARET_POS, MAKEWPARAM(nLogical, bExtend), (LPARAM)(POINT_PTR*)(pptPos) );
}
#else
#define Editor_SetCaretPosEx( hwnd, nLogical, pptPos, bExtend ) \
    (void)SNDMSG( (hwnd), EE_SET_CARET_POS, MAKEWPARAM(nLogical, bExtend), (LPARAM)(POINT_PTR*)(pptPos) )
#endif

#define EE_SET_SCROLL_POS       (EE_FIRST+19)
  // (BOOL)wParam = bCanMoveCursor
  // (POINT_PTR*)lParam = pptPos

#ifdef EE_STRICT
inline void Editor_SetScrollPos( HWND hwnd, POINT_PTR* pptPos )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_SET_SCROLL_POS, (WPARAM)0, (LPARAM)(POINT_PTR*)(pptPos) );
}
#else
#define Editor_SetScrollPos( hwnd, pptPos ) \
    (void)SNDMSG( (hwnd), EE_SET_SCROLL_POS, (WPARAM)0, (LPARAM)(POINT_PTR*)(pptPos) )
#endif

#ifdef EE_STRICT
inline void Editor_SetScrollPosEx( HWND hwnd, POINT_PTR* pptPos, BOOL bCanMoveCursor )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_SET_SCROLL_POS, (WPARAM)(BOOL)bCanMoveCursor, (LPARAM)(POINT_PTR*)(pptPos) );
}
#else
#define Editor_SetScrollPosEx( hwnd, pptPos, bCanMoveCursor ) \
    (void)SNDMSG( (hwnd), EE_SET_SCROLL_POS, (WPARAM)(BOOL)bCanMoveCursor, (LPARAM)(POINT_PTR*)(pptPos) )
#endif

#define EE_VIEW_TO_DEV          (EE_FIRST+20)
  // (POINT_PTR*)wParam = pptView, (POINT_PTR*)lParam = pptDev

#ifdef EE_STRICT
inline void Editor_ViewToDev( HWND hwnd, POINT_PTR* pptView, POINT_PTR* pptDev )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_VIEW_TO_DEV, (WPARAM)(POINT_PTR*)(pptView), (LPARAM)(POINT_PTR*)(pptDev) );
}
#else
#define Editor_ViewToDev( hwnd, pptView, pptDev ) \
    (void)SNDMSG( (hwnd), EE_VIEW_TO_DEV, (WPARAM)(POINT_PTR*)(pptView), (LPARAM)(POINT_PTR*)(pptDev) )
#endif

#define EE_VIEW_TO_LOGICAL      (EE_FIRST+21)
  // (POINT*)wParam = pptView, (POINT*)lParam = pptLogical

#ifdef EE_STRICT
inline void Editor_ViewToLogical( HWND hwnd, POINT_PTR* pptView, POINT_PTR* pptLogical )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_VIEW_TO_LOGICAL, (WPARAM)(POINT_PTR*)(pptView), (LPARAM)(POINT_PTR*)(pptLogical ) );
}
#else
#define Editor_ViewToLogical( hwnd, pptView, pptLogical ) \
    (void)SNDMSG( (hwnd), EE_VIEW_TO_LOGICAL, (WPARAM)(POINT_PTR*)(pptView), (LPARAM)(POINT_PTR*)(pptLogical ) )
#endif

#define EE_EXEC_COMMAND         (EE_FIRST+22)
  // (UINT)wParam = nCmdID

#ifdef EE_STRICT
inline BOOL Editor_ExecCommand( HWND hwnd, UINT nCmdID )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (BOOL)SNDMSG( (hwnd), EE_EXEC_COMMAND, (WPARAM)(UINT)(nCmdID), (LPARAM)0 );
}
#else
#define Editor_ExecCommand( hwnd, nCmdID ) \
    (BOOL)SNDMSG( (hwnd), EE_EXEC_COMMAND, (WPARAM)(UINT)(nCmdID), (LPARAM)0 )
#endif

#define EE_GET_MODIFIED         (EE_FIRST+23)
  // returns (BOOL)bModified

#ifdef EE_STRICT
inline BOOL Editor_GetModified( HWND hwnd )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (BOOL)SNDMSG( (hwnd), EE_GET_MODIFIED, (WPARAM)0, (LPARAM)0 );
}
#else
#define Editor_GetModified( hwnd ) \
    (BOOL)SNDMSG( (hwnd), EE_GET_MODIFIED, (WPARAM)0, (LPARAM)0 )
#endif

#ifdef EE_STRICT
inline BOOL Editor_DocGetModified( HWND hwnd, int iDoc )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (BOOL)SNDMSG( (hwnd), EE_GET_MODIFIED, MAKEWPARAM(0, (iDoc)+1), (LPARAM)0 );
}
#else
#define Editor_DocGetModified( hwnd, iDoc ) \
    (BOOL)SNDMSG( (hwnd), EE_GET_MODIFIED, MAKEWPARAM(0, (iDoc)+1), (LPARAM)0 )
#endif

#define EE_SET_MODIFIED         (EE_FIRST+24)
  // (BOOL)wParam = bModified

#ifdef EE_STRICT
inline void Editor_SetModified( HWND hwnd, BOOL bModified )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    (void)SNDMSG( (hwnd), EE_SET_MODIFIED, (WPARAM)(BOOL)(bModified), (LPARAM)0 );
}
#else
#define Editor_SetModified( hwnd, bModified ) \
    (void)SNDMSG( (hwnd), EE_SET_MODIFIED, (WPARAM)(BOOL)(bModified), (LPARAM)0 )
#endif

#define EE_GET_SEL_START        (EE_FIRST+26)
  // (int)wParam = nLogical
  // (POINT_PTR*)lParam = pptPos

#ifdef EE_STRICT
inline void Editor_GetSelStart( HWND hwnd, int nLogical, POINT_PTR* pptPos )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_GET_SEL_START, (WPARAM)(int)(nLogical), (LPARAM)(POINT_PTR*)(pptPos) );
}
#else
#define Editor_GetSelStart( hwnd, nLogical, pptPos ) \
    (void)SNDMSG( (hwnd), EE_GET_SEL_START, (WPARAM)(int)(nLogical), (LPARAM)(POINT_PTR*)(pptPos) )
#endif

#define EE_GET_SEL_END          (EE_FIRST+27)
  // (int)wParam = nLogical
  // (POINT_PTR*)lParam = pptPos

#ifdef EE_STRICT
inline void Editor_GetSelEnd( HWND hwnd, int nLogical, POINT_PTR* pptPos )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_GET_SEL_END, (WPARAM)(int)(nLogical), (LPARAM)(POINT_PTR*)(pptPos) );
}
#else
#define Editor_GetSelEnd( hwnd, nLogical, pptPos ) \
    (void)SNDMSG( (hwnd), EE_GET_SEL_END, (WPARAM)(int)(nLogical), (LPARAM)(POINT_PTR*)(pptPos) )
#endif

#define EE_SET_SEL_LENGTH       (EE_FIRST+28)
  // (UINT_PTR)wParam = nLen

#ifdef EE_STRICT
inline void Editor_SetSelLength( HWND hwnd, UINT_PTR nLen )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    (void)SNDMSG( (hwnd), EE_SET_SEL_LENGTH, (WPARAM)(UINT_PTR)(nLen), (LPARAM)0 );
}
#else
#define Editor_SetSelLength( hwnd, nLen ) \
    (void)SNDMSG( (hwnd), EE_SET_SEL_LENGTH, (WPARAM)(UINT_PTR)(nLen), (LPARAM)0 )
#endif

#define EE_GET_CONFIGA          (EE_FIRST+29)
  // (LPSTR)lParam = szConfigName

#ifdef EE_STRICT
inline void Editor_GetConfigA( HWND hwnd, LPSTR szConfigName )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_GET_CONFIGA, (WPARAM)0, (LPARAM)(LPSTR)(szConfigName) );
}
#else
#define Editor_GetConfigA( hwnd, szConfigName ) \
    (void)SNDMSG( (hwnd), EE_GET_CONFIGA, (WPARAM)0, (LPARAM)(LPSTR)(szConfigName) )
#endif

#ifdef EE_STRICT
inline void Editor_DocGetConfigA( HWND hwnd, int iDoc, LPSTR szConfigName )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_GET_CONFIGA, (WPARAM)MAKEWPARAM(0, (iDoc)+1), (LPARAM)(LPSTR)(szConfigName) );
}
#else
#define Editor_DocGetConfigA( hwnd, iDoc, szConfigName ) \
    (void)SNDMSG( (hwnd), EE_GET_CONFIGA, (WPARAM)MAKEWPARAM(0, (iDoc)+1), (LPARAM)(LPSTR)(szConfigName) )
#endif

#define EE_GET_CONFIGW          (EE_FIRST+50)
  // (LPWSTR)lParam = szConfigName

#ifdef EE_STRICT
inline void Editor_GetConfigW( HWND hwnd, LPWSTR szConfigName )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_GET_CONFIGW, (WPARAM)0, (LPARAM)(LPWSTR)(szConfigName) );
}
#else
#define Editor_GetConfigW( hwnd, szConfigName ) \
    (void)SNDMSG( (hwnd), EE_GET_CONFIGW, (WPARAM)0, (LPARAM)(LPWSTR)(szConfigName) )
#endif

#ifdef EE_STRICT
inline void Editor_DocGetConfigW( HWND hwnd, int iDoc, LPWSTR szConfigName )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_GET_CONFIGW, (WPARAM)MAKEWPARAM(0, (iDoc)+1), (LPARAM)(LPWSTR)(szConfigName) );
}
#else
#define Editor_DocGetConfigW( hwnd, iDoc, szConfigName ) \
    (void)SNDMSG( (hwnd), EE_GET_CONFIGW, (WPARAM)MAKEWPARAM(0, (iDoc)+1), (LPARAM)(LPWSTR)(szConfigName) )
#endif

#define EE_SET_CONFIGA          (EE_FIRST+30)
  // (LPCSTR)lParam = szConfigName

#ifdef EE_STRICT
inline BOOL Editor_SetConfigA( HWND hwnd, LPSTR szConfigName )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (BOOL)SNDMSG( (hwnd), EE_SET_CONFIGA, (WPARAM)0, (LPARAM)(LPSTR)(szConfigName) );
}
#else
#define Editor_SetConfigA( hwnd, szConfigName ) \
    (BOOL)SNDMSG( (hwnd), EE_SET_CONFIGA, (WPARAM)0, (LPARAM)(LPSTR)(szConfigName) )
#endif

#ifdef EE_STRICT
inline BOOL Editor_DocSetConfigA( HWND hwnd, int iDoc, LPSTR szConfigName )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (BOOL)SNDMSG( (hwnd), EE_SET_CONFIGA, (WPARAM)MAKEWPARAM(0, (iDoc)+1), (LPARAM)(LPSTR)(szConfigName) );
}
#else
#define Editor_DocSetConfigA( hwnd, iDoc, szConfigName ) \
    (BOOL)SNDMSG( (hwnd), EE_SET_CONFIGA, (WPARAM)MAKEWPARAM(0, (iDoc)+1), (LPARAM)(LPSTR)(szConfigName) )
#endif

#define EE_SET_CONFIGW          (EE_FIRST+51)
  // (LPCWSTR)lParam = szConfigName

#ifdef EE_STRICT
inline BOOL Editor_SetConfigW( HWND hwnd, LPWSTR szConfigName )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (BOOL)SNDMSG( (hwnd), EE_SET_CONFIGW, (WPARAM)0, (LPARAM)(LPWSTR)(szConfigName) );
}
#else
#define Editor_SetConfigW( hwnd, szConfigName ) \
    (BOOL)SNDMSG( (hwnd), EE_SET_CONFIGW, (WPARAM)0, (LPARAM)(LPWSTR)(szConfigName) )
#endif

#ifdef EE_STRICT
inline BOOL Editor_DocSetConfigW( HWND hwnd, int iDoc, LPWSTR szConfigName )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (BOOL)SNDMSG( (hwnd), EE_SET_CONFIGW, (WPARAM)MAKEWPARAM(0, (iDoc)+1), (LPARAM)(LPWSTR)(szConfigName) );
}
#else
#define Editor_DocSetConfigW( hwnd, iDoc, szConfigName ) \
    (BOOL)SNDMSG( (hwnd), EE_SET_CONFIGW, (WPARAM)MAKEWPARAM(0, (iDoc)+1), (LPARAM)(LPWSTR)(szConfigName) )
#endif

#define EE_EMPTY_UNDO_BUFFER    (EE_FIRST+31)

#ifdef EE_STRICT
inline void Editor_EmptyUndoBuffer( HWND hwnd )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_EMPTY_UNDO_BUFFER, (WPARAM)0, (LPARAM)0 );
}
#else
#define Editor_EmptyUndoBuffer( hwnd ) \
    (void)SNDMSG( (hwnd), EE_EMPTY_UNDO_BUFFER, (WPARAM)0, (LPARAM)0 )
#endif

#define OVERWRITE_PER_PROP		0
#define OVERWRITE_INSERT		1
#define OVERWRITE_OVERWRITE		2
#define OVERWRITE_MASK			3
#define KEEP_SOURCE_RETURN_TYPE	0x00000000
#define KEEP_DEST_RETURN_TYPE	0x00000010

#define EE_INSERT_STRINGA       (EE_FIRST+32)
  // (int)wParam = nInsertType
  // (LPCSTR)lParam = szString

inline void Editor_InsertStringA( HWND hwnd, LPCSTR szString, bool bKeepDestReturnType = false )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_INSERT_STRINGA, (WPARAM)OVERWRITE_PER_PROP | (bKeepDestReturnType ? KEEP_DEST_RETURN_TYPE : KEEP_SOURCE_RETURN_TYPE), (LPARAM)(LPCSTR)(szString) );
}

inline void Editor_InsertA( HWND hwnd, LPCSTR szString, bool bKeepDestReturnType = false )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_INSERT_STRINGA, (WPARAM)OVERWRITE_INSERT | (bKeepDestReturnType ? KEEP_DEST_RETURN_TYPE : KEEP_SOURCE_RETURN_TYPE), (LPARAM)(LPCSTR)(szString) );
}

inline void Editor_OverwriteA( HWND hwnd, LPCSTR szString, bool bKeepDestReturnType = false )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_INSERT_STRINGA, (WPARAM)OVERWRITE_OVERWRITE | (bKeepDestReturnType ? KEEP_DEST_RETURN_TYPE : KEEP_SOURCE_RETURN_TYPE), (LPARAM)(LPCSTR)(szString) );
}

#define EE_INSERT_STRINGW       (EE_FIRST+52)
  // (int)wParam = nInsertType | bKeepDestReturnType
  // (LPCWSTR)lParam = szString

inline void Editor_InsertStringW( HWND hwnd, LPCWSTR szString, bool bKeepDestReturnType = false )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_INSERT_STRINGW, (WPARAM)OVERWRITE_PER_PROP | (bKeepDestReturnType ? KEEP_DEST_RETURN_TYPE : KEEP_SOURCE_RETURN_TYPE), (LPARAM)(LPCWSTR)(szString) );
}

inline void Editor_InsertW( HWND hwnd, LPCWSTR szString, bool bKeepDestReturnType = false )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
	SNDMSG( (hwnd), EE_INSERT_STRINGW, (WPARAM)OVERWRITE_INSERT | (bKeepDestReturnType ? KEEP_DEST_RETURN_TYPE : KEEP_SOURCE_RETURN_TYPE), (LPARAM)(LPCWSTR)(szString) );
}

inline void Editor_OverwriteW( HWND hwnd, LPCWSTR szString, bool bKeepDestReturnType = false )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_INSERT_STRINGW, (WPARAM)OVERWRITE_OVERWRITE | (bKeepDestReturnType ? KEEP_DEST_RETURN_TYPE : KEEP_SOURCE_RETURN_TYPE), (LPARAM)(LPCWSTR)(szString) );
}

#define EE_SET_SEL_VIEW         (EE_FIRST+33)
  // (POINT_PTR*)wParam = pptSelStart, (POINT_PTR*)lParam = pptSelEnd

#ifdef EE_STRICT
inline void Editor_SetSelView( HWND hwnd, POINT_PTR* pptSelStart, POINT_PTR* pptSelEnd )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_SET_SEL_VIEW, (WPARAM)(POINT_PTR*)(pptSelStart), (LPARAM)(POINT_PTR*)(pptSelEnd) );
}
#else
#define Editor_SetSelView( hwnd, pptSelStart, pptSelEnd ) \
    (void)SNDMSG( (hwnd), EE_SET_SEL_VIEW, (WPARAM)(POINT_PTR*)(pptSelStart), (LPARAM)(POINT_PTR*)(pptSelEnd) )
#endif

#define EE_FINDA                (EE_FIRST+34)
  // (UINT)wParam = nFlags, (LPCSTR)lParam = szFind
  // returns (BOOL)bSuccess

#ifdef EE_STRICT
inline BOOL Editor_FindA( HWND hwnd, UINT nFlags, LPCSTR szFind )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (BOOL)SNDMSG( (hwnd), EE_FINDA, (WPARAM)(UINT)(nFlags), (LPARAM)(LPCSTR)(szFind) );
}
#else
#define Editor_FindA( hwnd, nFlags, szFind ) \
    (BOOL)SNDMSG( (hwnd), EE_FINDA, (WPARAM)(UINT)(nFlags), (LPARAM)(LPCSTR)(szFind) )
#endif

#define EE_FINDW                (EE_FIRST+53)
  // (UINT)wParam = nFlags, (LPCWSTR)lParam = szFind
  // returns (int)nCount

#ifdef EE_STRICT
inline int Editor_FindW( HWND hwnd, UINT nFlags, LPCWSTR szFind )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (int)SNDMSG( (hwnd), EE_FINDW, (WPARAM)(UINT)(nFlags), (LPARAM)(LPCWSTR)(szFind) );
}
#else
#define Editor_FindW( hwnd, nFlags, szFind ) \
    (int)SNDMSG( (hwnd), EE_FINDW, (WPARAM)(UINT)(nFlags), (LPARAM)(LPCWSTR)(szFind) )
#endif

#define EE_REPLACEA             (EE_FIRST+35)
  // (UINT)wParam = nFlags, (LPCWSTR)lParam = szFindReplace
  // returns (int)nCount

#ifdef EE_STRICT
inline int Editor_ReplaceA( HWND hwnd, UINT nFlags, LPCSTR szFindReplace )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (int)SNDMSG( (hwnd), EE_REPLACEA, (WPARAM)(UINT)(nFlags), (LPARAM)(LPCSTR)(szFindReplace) );
}
#else
#define Editor_ReplaceA( hwnd, nFlags, szFindReplace ) \
    (int)SNDMSG( (hwnd), EE_REPLACEA, (WPARAM)(UINT)(nFlags), (LPARAM)(LPCSTR)(szFindReplace) )
#endif

#define EE_REPLACEW             (EE_FIRST+54)
  // (UINT)wParam = nFlags, (LPCWSTR)lParam = szFindReplace
  // returns (int)nCount

#ifdef EE_STRICT
inline int Editor_ReplaceW( HWND hwnd, UINT nFlags, LPCWSTR szFindReplace )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (int)SNDMSG( (hwnd), EE_REPLACEW, (WPARAM)(UINT)(nFlags), (LPARAM)(LPCWSTR)(szFindReplace) );
}
#else
#define Editor_ReplaceW( hwnd, nFlags, szFindReplace ) \
    (int)SNDMSG( (hwnd), EE_REPLACEW, (WPARAM)(UINT)(nFlags), (LPARAM)(LPCWSTR)(szFindReplace) )
#endif

#define EE_LOAD_CONFIGA         (EE_FIRST+36)
  // (LPCSTR)lParam = szConfigName

#ifdef EE_STRICT
inline BOOL Editor_LoadConfigA( HWND hwnd, LPCSTR szConfigName )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (BOOL)SNDMSG( (hwnd), EE_LOAD_CONFIGA, (WPARAM)0, (LPARAM)(LPCSTR)(szConfigName) );
}
#else
#define Editor_LoadConfigA( hwnd, szConfigName ) \
    (BOOL)SNDMSG( (hwnd), EE_LOAD_CONFIGA, (WPARAM)0, (LPARAM)(LPCSTR)(szConfigName) )
#endif

#define EE_LOAD_CONFIGW         (EE_FIRST+55)
  // (LPCWSTR)lParam = szConfigName

#ifdef EE_STRICT
inline BOOL Editor_LoadConfigW( HWND hwnd, LPCWSTR szConfigName )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (BOOL)SNDMSG( (hwnd), EE_LOAD_CONFIGW, (WPARAM)0, (LPARAM)(LPCWSTR)(szConfigName) );
}
#else
#define Editor_LoadConfigW( hwnd, szConfigName ) \
    (BOOL)SNDMSG( (hwnd), EE_LOAD_CONFIGW, (WPARAM)0, (LPARAM)(LPCWSTR)(szConfigName) )
#endif

#define EE_SET_STATUSA          (EE_FIRST+37)
  // (LPCSTR)lParam = szStatus

#ifdef EE_STRICT
inline void Editor_SetStatusA( HWND hwnd, LPCSTR szStatus )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_SET_STATUSA, (WPARAM)0, (LPARAM)(LPCSTR)(szStatus) );
}
#else
#define Editor_SetStatusA( hwnd, szStatus ) \
    (void)SNDMSG( (hwnd), EE_SET_STATUSA, (WPARAM)0, (LPARAM)(LPCSTR)(szStatus) )
#endif

#define EE_SET_STATUSW          (EE_FIRST+56)
  // (LPCWSTR)lParam = szStatus

#ifdef EE_STRICT
inline void Editor_SetStatusW( HWND hwnd, LPCWSTR szStatus )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_SET_STATUSW, (WPARAM)0, (LPARAM)(LPCWSTR)(szStatus) );
}
#else
#define Editor_SetStatusW( hwnd, szStatus ) \
    (void)SNDMSG( (hwnd), EE_SET_STATUSW, (WPARAM)0, (LPARAM)(LPCWSTR)(szStatus) )
#endif

#define EE_CONVERT              (EE_FIRST+38)
  // (UINT)wParam = nFlags

#ifdef EE_STRICT
inline BOOL Editor_Convert( HWND hwnd, UINT nFlags )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (BOOL)SNDMSG( (hwnd), EE_CONVERT, (WPARAM)(UINT)(nFlags), (LPARAM)0 );
}
#else
#define Editor_Convert( hwnd, nFlags ) \
    (BOOL)SNDMSG( (hwnd), EE_CONVERT, (WPARAM)(UINT)(nFlags), (LPARAM)0 )
#endif

#define EE_GET_MARGIN           (EE_FIRST+39)
  // returns (UINT_PTR)nMaxMargin

#ifdef EE_STRICT
inline UINT_PTR Editor_GetMargin( HWND hwnd )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (UINT_PTR)SNDMSG( (hwnd), EE_GET_MARGIN, (WPARAM)0, (LPARAM)0 );
}
#else
#define Editor_GetMargin( hwnd ) \
    (UINT_PTR)SNDMSG( (hwnd), EE_GET_MARGIN, (WPARAM)0, (LPARAM)0 )
#endif

#define EE_GET_VERSION          (EE_FIRST+40)
  // (UINT*)wParam = pnProductType
  // returns (UINT)nVersion

#ifdef EE_STRICT
inline UINT Editor_GetVersion( HWND hwnd )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (UINT)SNDMSG( (hwnd), EE_GET_VERSION, (WPARAM)0, (LPARAM)0 );
}
#else
#define Editor_GetVersion( hwnd ) \
    (UINT)SNDMSG( (hwnd), EE_GET_VERSION, (WPARAM)0, (LPARAM)0 )
#endif

#ifdef EE_STRICT
inline UINT Editor_GetVersionEx( HWND hwnd, UINT* pnProductType )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (UINT)SNDMSG( (hwnd), EE_GET_VERSION, (WPARAM)pnProductType, (LPARAM)0 );
}
#else
#define Editor_GetVersionEx( hwnd, pnProductType ) \
    (UINT)SNDMSG( (hwnd), EE_GET_VERSION, (WPARAM)(UINT*)pnProductType, (LPARAM)0 )
#endif

#define VERSION_FREE			4
#define VERSION_LITE            3
#define VERSION_PRO             2
#define VERSION_STD             1

#define EE_GET_REF              (EE_FIRST+41)
  // (ATOM)lParam = atom
  // return (int)nRef

#ifdef EE_STRICT
inline int Editor_GetRef( HWND hwnd, ATOM atom )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (int)SNDMSG( (hwnd), EE_GET_REF, (WPARAM)0, (LPARAM)(ATOM)atom );
}
#else
#define Editor_GetRef( hwnd, atom ) \
    (int)SNDMSG( (hwnd), EE_GET_REF, (WPARAM)0, (LPARAM)(ATOM)atom )
#endif

#define EE_ADD_REF              (EE_FIRST+42)
  // (HINSTANCE)lParam = hInstance
  // return (int)nRef

#ifdef EE_STRICT
inline int Editor_AddRef( HWND hwnd, HINSTANCE hInstance )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (int)SNDMSG( (hwnd), EE_ADD_REF, (WPARAM)0, (LPARAM)(HINSTANCE)hInstance );
}
#else
#define Editor_AddRef( hwnd, hInstance ) \
    (int)SNDMSG( (hwnd), EE_ADD_REF, (WPARAM)0, (LPARAM)(HINSTANCE)hInstance )
#endif
 
#define EE_RELEASE              (EE_FIRST+43)
  // (HINSTANCE)lParam = hInstance
  // return (int)nRef
 
#ifdef EE_STRICT
inline int Editor_Release( HWND hwnd, HINSTANCE hInstance )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (int)SNDMSG( (hwnd), EE_RELEASE, (WPARAM)0, (LPARAM)(HINSTANCE)hInstance );
}
#else
#define Editor_Release( hwnd, hInstance ) \
    (int)SNDMSG( (hwnd), EE_RELEASE, (WPARAM)0, (LPARAM)(HINSTANCE)hInstance )
#endif

#define EE_REDRAW               (EE_FIRST+44)
  // (BOOL)wParam = bRedraw

#ifdef EE_STRICT
inline void Editor_Redraw( HWND hwnd, BOOL bRedraw )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_REDRAW, (WPARAM)bRedraw, (LPARAM)0 );
}
#else
#define Editor_Redraw( hwnd, bRedraw ) \
    (void)SNDMSG( (hwnd), EE_REDRAW, (WPARAM)(BOOL)bRedraw, (LPARAM)0 )
#endif

#define EE_GET_SEL_TYPE         (EE_FIRST+45)
  // (BOOL)wParam = bNeedAlways
  // return (int)nSelType

#ifdef EE_STRICT
inline int Editor_GetSelType( HWND hwnd )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (int)SNDMSG( (hwnd), EE_GET_SEL_TYPE, (WPARAM)0, (LPARAM)0 );
}

inline int Editor_GetSelTypeEx( HWND hwnd, BOOL bNeedAlways )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (int)SNDMSG( (hwnd), EE_GET_SEL_TYPE, (WPARAM)(BOOL)bNeedAlways, (LPARAM)0 );
}
#else
#define Editor_GetSelType( hwnd ) \
    (int)SNDMSG( (hwnd), EE_GET_SEL_TYPE, (WPARAM)0, (LPARAM)0 )

#define Editor_GetSelTypeEx( hwnd, bNeedAlways ) \
    (int)SNDMSG( (hwnd), EE_GET_SEL_TYPE, (WPARAM)(BOOL)bNeedAlways, (LPARAM)0 )
#endif

#define EE_IS_CHAR_HALF_OR_FULL (EE_FIRST+57)
  // (WCHAR)wParam = ch
  // return (int)nWidth

#ifdef EE_STRICT
inline int Editor_IsCharHalfOrFull( HWND hwnd, WCHAR ch )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (int)SNDMSG( (hwnd), EE_IS_CHAR_HALF_OR_FULL, (WPARAM)ch, (LPARAM)0 );
}
#else
#define Editor_IsCharHalfOrFull( hwnd, ch ) \
    (int)SNDMSG( (hwnd), EE_IS_CHAR_HALF_OR_FULL, (WPARAM)ch, (LPARAM)0 )
#endif

#define EE_INFO                 (EE_FIRST+58)
  // (int)wParam = nCmd
  // lParam = lParam
  // return lResult

#ifdef EE_STRICT
inline LRESULT Editor_Info( HWND hwnd, WPARAM nCmd, LPARAM lParam )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (LRESULT)SNDMSG( (hwnd), EE_INFO, (WPARAM)nCmd, (LPARAM)lParam );
}
#else
#define Editor_Info( hwnd, nCmd, lParam ) \
    (LRESULT)SNDMSG( (hwnd), EE_INFO, (WPARAM)nCmd, (LPARAM)lParam )
#endif

#ifdef EE_STRICT
inline LRESULT Editor_DocInfo( HWND hwnd, int iDoc, WPARAM nCmd, LPARAM lParam )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (LRESULT)SNDMSG( (hwnd), EE_INFO, (WPARAM)MAKEWPARAM((nCmd),(iDoc+1)), (LPARAM)(lParam) );
}
#else
#define Editor_DocInfo( hwnd, iDoc, nCmd, lParam ) \
    (LRESULT)SNDMSG( (hwnd), EE_INFO, (WPARAM)MAKEWPARAM((nCmd),(iDoc+1)), (LPARAM)(lParam) )
#endif

#define EE_FREE                 (EE_FIRST+59)
  // (ATOM)lParam = atom
  // return (BOOL)bSuccess

#ifdef EE_STRICT
inline BOOL Editor_Free( HWND hwnd, ATOM atom )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (BOOL)SNDMSG( (hwnd), EE_FREE, (WPARAM)0, (LPARAM)(ATOM)atom );
}
#else
#define Editor_Free( hwnd, atom ) \
    (BOOL)SNDMSG( (hwnd), EE_FREE, (WPARAM)0, (LPARAM)(ATOM)atom )
#endif

#define EE_SET_SEL_TYPE         (EE_FIRST+60)
  // (BOOL)wParam = bNeedAlways
  // (UINT)lParam = nSelType

#ifdef EE_STRICT
inline void Editor_SetSelType( HWND hwnd, UINT nSelType )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_SET_SEL_TYPE, (WPARAM)0, (LPARAM)nSelType );
}

inline void Editor_SetSelTypeEx( HWND hwnd, BOOL bNeedAlways, UINT nSelType )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_SET_SEL_TYPE, (WPARAM)(BOOL)bNeedAlways, (LPARAM)nSelType );
}
#else
#define Editor_SetSelType( hwnd, nSelType ) \
    (void)SNDMSG( (hwnd), EE_SET_SEL_TYPE, (WPARAM)0, (LPARAM)nSelType )
#define Editor_SetSelTypeEx( hwnd, nSelType ) \
    (void)SNDMSG( (hwnd), EE_SET_SEL_TYPE_EX, (WPARAM)(BOOL)bNeedAlways, (LPARAM)nSelType )
#endif

#define EE_GET_STATUSA          (EE_FIRST+61)
  // (UINT_PTR)wParam = nBufSize
  // (LPSTR)lParam = szStatus
  // return (UINT_PTR)cchRequiredSize

#ifdef EE_STRICT
inline UINT_PTR Editor_GetStatusA( HWND hwnd, LPCSTR szStatus, UINT_PTR nBufSize )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (UINT_PTR)SNDMSG( (hwnd), EE_GET_STATUSA, (WPARAM)nBufSize, (LPARAM)(LPCSTR)(szStatus) );
}
#else
#define Editor_GetStatusA( hwnd, szStatus, nBufSize ) \
    (UINT_PTR)SNDMSG( (hwnd), EE_GET_STATUSA, (WPARAM)nBufSize, (LPARAM)(LPCSTR)(szStatus) )
#endif

#define EE_GET_STATUSW          (EE_FIRST+62)
  // (UINT_PTR)wParam = nBufSize
  // (LPWSTR)lParam = szStatus
  // return (UINT_PTR)cchRequiredSize

#ifdef EE_STRICT
inline UINT_PTR Editor_GetStatusW( HWND hwnd, LPCWSTR szStatus, UINT_PTR nBufSize )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (UINT_PTR)SNDMSG( (hwnd), EE_GET_STATUSW, (WPARAM)nBufSize, (LPARAM)(LPCWSTR)(szStatus) );
}
#else
#define Editor_GetStatusW( hwnd, szStatus, nBufSize ) \
    (UINT_PTR)SNDMSG( (hwnd), EE_GET_STATUSW, (WPARAM)nBufSize, (LPARAM)(LPCWSTR)(szStatus) )
#endif

#define EE_INSERT_FILEA         (EE_FIRST+63)
  // (LOAD_FILE_INFO_EX*)wParam = plfi
  // (LPCSTR)lParam = szFileName
  // returns non-zero if success, 0 if failed

#ifdef EE_STRICT
inline BOOL Editor_InsertFileA( HWND hwnd, LOAD_FILE_INFO_EX* plfi, LPCSTR szFileName )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (BOOL)SNDMSG( (hwnd), EE_INSERT_FILEA, (WPARAM)plfi, (LPARAM)(LPCSTR)(szFileName) );
}
#else
#define Editor_InsertFileA( hwnd, plfi, szFileName ) \
    (BOOL)SNDMSG( (hwnd), EE_INSERT_FILEA, (WPARAM)(LOAD_FILE_INFO_EX*)plfi, (LPARAM)(LPCSTR)(szFileName) )
#endif

#define EE_INSERT_FILEW         (EE_FIRST+64)
  // (LOAD_FILE_INFO_EX*)wParam = plfi
  // (LPCWSTR)lParam = szFileName
  // returns non-zero if success, 0 if failed

#ifdef EE_STRICT
inline BOOL Editor_InsertFileW( HWND hwnd, LOAD_FILE_INFO_EX* plfi, LPCWSTR szFileName )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (BOOL)SNDMSG( (hwnd), EE_INSERT_FILEW, (WPARAM)(LOAD_FILE_INFO_EX*)plfi, (LPARAM)(LPCWSTR)(szFileName) );
}
#else
#define Editor_InsertFileW( hwnd, plfi, szFileName ) \
    (BOOL)SNDMSG( (hwnd), EE_INSERT_FILEW, (WPARAM)plfi, (LPARAM)(LPCWSTR)(szFileName) )
#endif

#define EE_FIND_IN_FILESA       (EE_FIRST+65)
  // wParam = 0
  // (GREP_INFOA*)lParam = pGrepInfo

#ifdef EE_STRICT
inline BOOL Editor_FindInFilesA( HWND hwnd, GREP_INFOA* pGrepInfo )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (BOOL)SNDMSG( (hwnd), EE_FIND_IN_FILESA, (WPARAM)0, (LPARAM)(GREP_INFOA*)pGrepInfo );
}
#else
#define Editor_FindInFilesA( hwnd, pGrepInfo ) \
    (BOOL)SNDMSG( (hwnd), EE_FIND_IN_FILESA, (WPARAM)0, (LPARAM)pGrepInfo )
#endif

#define EE_FIND_IN_FILESW       (EE_FIRST+66)
  // wParam = 0
  // (GREP_INFOW*)lParam = pGrepInfo

#ifdef EE_STRICT
inline BOOL Editor_FindInFilesW( HWND hwnd, GREP_INFOW* pGrepInfo )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (BOOL)SNDMSG( (hwnd), EE_FIND_IN_FILESW, (WPARAM)0, (LPARAM)pGrepInfo );
}
#else
#define Editor_FindInFilesW( hwnd, pGrepInfo ) \
    (BOOL)SNDMSG( (hwnd), EE_FIND_IN_FILESW, (WPARAM)0, (LPARAM)(GREP_INFOW*)pGrepInfo )
#endif

#define EE_REPLACE_IN_FILESA        (EE_FIRST+67)
  // wParam = 0
  // (GREP_INFOA*)lParam = pGrepInfo

#ifdef EE_STRICT
inline BOOL Editor_ReplaceInFilesA( HWND hwnd, GREP_INFOA* pGrepInfo )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (BOOL)SNDMSG( (hwnd), EE_REPLACE_IN_FILESA, (WPARAM)0, (LPARAM)pGrepInfo );
}
#else
#define Editor_ReplaceInFilesA( hwnd, pGrepInfo ) \
    (BOOL)SNDMSG( (hwnd), EE_REPLACE_IN_FILESA, (WPARAM)0, (LPARAM)(GREP_INFOA*)pGrepInfo )
#endif

#define EE_REPLACE_IN_FILESW        (EE_FIRST+68)
  // wParam = 0
  // (GREP_INFOW*)lParam = pGrepInfo

#ifdef EE_STRICT
inline BOOL Editor_ReplaceInFilesW( HWND hwnd, GREP_INFOW* pGrepInfo )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (BOOL)SNDMSG( hwnd, EE_REPLACE_IN_FILESW, (WPARAM)0, (LPARAM)pGrepInfo );
}
#else
#define Editor_ReplaceInFilesW( hwnd, pGrepInfo ) \
    (BOOL)SNDMSG( (hwnd), EE_REPLACE_IN_FILESW, (WPARAM)0, (LPARAM)(GREP_INFOW*)pGrepInfo )
#endif

#define EE_GET_ANCHOR_POS           (EE_FIRST+69)
  // (int)wParam = nLogical
  // (POINT_PTR*)lParam = pptPos

#ifdef EE_STRICT
inline void Editor_GetAnchorPos( HWND hwnd, int nLogical, POINT_PTR* pptPos )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_GET_ANCHOR_POS, (WPARAM)(int)(nLogical), (LPARAM)(POINT_PTR*)(pptPos) );
}
#else
#define Editor_GetAnchorPos( hwnd, nLogical, pptPos ) \
    (void)SNDMSG( (hwnd), EE_GET_ANCHOR_POS, (WPARAM)(int)(nLogical), (LPARAM)(POINT_PTR*)(pptPos) )
#endif

#define EE_SET_ANCHOR_POS           (EE_FIRST+70)
  // (int)wParam = nLogical
  // (POINT_PTR*)lParam = pptPos

#ifdef EE_STRICT
inline void Editor_SetAnchorPos( HWND hwnd, int nLogical, POINT_PTR* pptPos )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_SET_ANCHOR_POS, (WPARAM)(int)(nLogical), (LPARAM)(POINT_PTR*)(pptPos) );
}
#else
#define Editor_SetAnchorPos( hwnd, nLogical, pptPos ) \
    (void)SNDMSG( (hwnd), EE_SET_ANCHOR_POS, (WPARAM)(int)(nLogical), (LPARAM)(POINT_PTR*)(pptPos) )
#endif

#define EE_GET_REDRAW               (EE_FIRST+71)

#ifdef EE_STRICT
inline BOOL Editor_GetRedraw( HWND hwnd )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (BOOL)SNDMSG( (hwnd), EE_GET_REDRAW, (WPARAM)0, (LPARAM)0 );
}
#else
#define Editor_GetRedraw( hwnd ) \
    (BOOL)SNDMSG( (hwnd), EE_GET_REDRAW, (WPARAM)0, (LPARAM)0 )
#endif

#define EE_DO_IDLE                  (EE_FIRST+72)

#ifdef EE_STRICT
inline void Editor_DoIdle( HWND hwnd, BOOL bResetTab )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_DO_IDLE, (WPARAM)(bResetTab), (LPARAM)0 );
}
#else
#define Editor_DoIdle( hwnd, bResetTab ) \
    (void)SNDMSG( (hwnd), EE_DO_IDLE, (WPARAM)(bResetTab), (LPARAM)0 )
#endif

#define	EE_CUSTOM_BAR_OPEN			(EE_FIRST+73)
  // (CUSTOM_BAR_INFO*)lParam = pCustomBarInfo

#ifdef EE_STRICT
inline UINT Editor_CustomBarOpen( HWND hwnd, CUSTOM_BAR_INFO* pCustomBarInfo )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (UINT)SNDMSG( (hwnd), EE_CUSTOM_BAR_OPEN, 0, (LPARAM)pCustomBarInfo );
}
#else
#endif

#define	EE_CUSTOM_BAR_CLOSE			(EE_FIRST+74)
  // (int)wParam = nCustomBarID

#ifdef EE_STRICT
inline BOOL Editor_CustomBarClose( HWND hwnd, UINT nCustomBarID )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (BOOL)SNDMSG( (hwnd), EE_CUSTOM_BAR_CLOSE, (WPARAM)nCustomBarID, 0 );
}
#else
#endif

#define EE_MATCH_REGEX				(EE_FIRST+75)

#ifdef EE_STRICT
inline BOOL Editor_MatchRegex( HWND hwnd, MATCH_REGEX_INFO* pMatchRegexInfo )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
	return (BOOL)SNDMSG( (hwnd), EE_MATCH_REGEX, (WPARAM)0, (LPARAM)pMatchRegexInfo );
}
#else
#define Editor_MatchRegex( hwnd, pMatchRegexInfo ) \
	(BOOL)SNDMSG( (hwnd), EE_MATCH_REGEX, (WPARAM)0, (LPARAM)pMatchRegexInfo )
#endif

#define EE_FIND_REGEX				(EE_FIRST+76)

#ifdef EE_STRICT
inline BOOL Editor_FindRegex( HWND hwnd, FIND_REGEX_INFO* pFindRegexInfo )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
	return (BOOL)SNDMSG( (hwnd), EE_FIND_REGEX, (WPARAM)0, (LPARAM)pFindRegexInfo );
}
#else
#define Editor_FindRegex( hwnd, pFindRegexInfo ) \
	(BOOL)SNDMSG( (hwnd), EE_FIND_REGEX, (WPARAM)0, (LPARAM)pFindRegexInfo )
#endif

#define EE_GET_OUTLINE_LEVEL		(EE_FIRST+77)
// (INT_PTR)wParam = nLogicalLine
// return nLevel

inline int Editor_GetOutlineLevel( HWND hwnd, INT_PTR nLogicalLine )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
	return (int)SNDMSG( (hwnd), EE_GET_OUTLINE_LEVEL, (WPARAM)nLogicalLine, (LPARAM)0 );
}

#define EE_SET_OUTLINE_LEVEL		(EE_FIRST+78)
// (INT_PTR)wParam = nLogicalLine
// (int)lParam = nLevel

inline void Editor_SetOutlineLevel( HWND hwnd, INT_PTR nLogicalLine, int nLevel )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
	SNDMSG( (hwnd), EE_SET_OUTLINE_LEVEL, (WPARAM)nLogicalLine, (LPARAM)nLevel );
}

#define EE_SHOW_OUTLINE		(EE_FIRST+79)
// (UINT)wParam = nFlags
// return lResult

inline void Editor_ShowOutline( HWND hwnd, WPARAM nFlags )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
	SNDMSG( (hwnd), EE_SHOW_OUTLINE, (WPARAM)nFlags, (LPARAM)0 );
}

#define SHOW_OUTLINE_SHOW	1
#define SHOW_OUTLINE_HIDE	0


#define EE_ENUM_CONFIG		(EE_FIRST+80)
// (size_t)wParam = cchBuf
// (LPWSTR)lParam = pBuf
// return nSize

inline size_t Editor_EnumConfig( HWND hwnd, LPWSTR pBuf, size_t cchBuf )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
	return (size_t)SNDMSG( (hwnd), EE_ENUM_CONFIG, (WPARAM)cchBuf, (LPARAM)pBuf );
}

#define	EE_TOOLBAR_OPEN			(EE_FIRST+81)
  // (TOOLBAR_INFO*)lParam = pToolbarInfo

inline UINT Editor_ToolbarOpen( HWND hwnd, TOOLBAR_INFO* pToolbarInfo )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (UINT)SNDMSG( (hwnd), EE_TOOLBAR_OPEN, 0, (LPARAM)pToolbarInfo );
}

#define	EE_TOOLBAR_CLOSE			(EE_FIRST+82)
  // (UINT)wParam = nToolbarID

inline BOOL Editor_ToolbarClose( HWND hwnd, UINT nCustomRebarID )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (BOOL)SNDMSG( (hwnd), EE_TOOLBAR_CLOSE, (WPARAM)nCustomRebarID, 0 );
}

#define	EE_TOOLBAR_SHOW			(EE_FIRST+83)
  // (UINT)wParam = nToolbarID
  // (BOOL)lParam = bVisible

inline BOOL Editor_ToolbarShow( HWND hwnd, UINT nCustomRebarID, BOOL bVisible )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (BOOL)SNDMSG( (hwnd), EE_TOOLBAR_SHOW, (WPARAM)nCustomRebarID, (LPARAM)bVisible );
}

#define EE_HELP							(EE_FIRST+84)
  // (UINT)wParam = nFlag (must be 0)
  // (LPCTSTR)lParam = szPageURL

inline void Editor_Help( HWND hwnd, LPCTSTR szPageURL )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    SNDMSG( (hwnd), EE_HELP, 0, (LPARAM)szPageURL );
}

#define EE_REG_SET_VALUE				(EE_FIRST+85)
  // (REG_SET_VALUE_INFO*)lParam = pRegSetValueInfo;

inline LONG Editor_RegSetValue( HWND hwnd, DWORD dwKey, LPCWSTR pszConfig, LPCWSTR pszValue, DWORD dwType, const BYTE* lpData, DWORD cbData, DWORD dwFlags )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
	REG_SET_VALUE_INFO info = { 0 };
	info.cbSize = sizeof( info );
	info.dwKey = dwKey;
	info.pszConfig = pszConfig;
	info.pszValue = pszValue;
	info.dwType = dwType;
	info.lpData = lpData;
	info.cbData = cbData;
	info.dwFlags = dwFlags;
    return (LONG)SNDMSG( (hwnd), EE_REG_SET_VALUE, 0, (LPARAM)&info );
}

#define EE_REG_QUERY_VALUE				(EE_FIRST+86)
  // (REG_QUERY_VALUE_INFO*)lParam = pRegQueryValueInfo;

inline LONG Editor_RegQueryValue( HWND hwnd, DWORD dwKey, LPCWSTR pszConfig, LPCWSTR pszValue, DWORD dwType, BYTE* lpData, DWORD* lpcbData, DWORD dwFlags )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
	REG_QUERY_VALUE_INFO info = { 0 };
	info.cbSize = sizeof( info );
	info.dwKey = dwKey;
	info.pszConfig = pszConfig;
	info.pszValue = pszValue;
	info.dwType = dwType;
	info.lpData = lpData;
	info.lpcbData = lpcbData;
	info.dwFlags = dwFlags;
    return (LONG)SNDMSG( (hwnd), EE_REG_QUERY_VALUE, 0, (LPARAM)&info );
}

#define EE_QUERY_STRING					(EE_FIRST+87)
  // (UINT)wParam = nCmdID, (LPWSTR)lParam = psz  (buffer must be MAX_PATH)
  // returns (BOOL)bValidCmd

inline BOOL Editor_QueryString( HWND hwnd, UINT nCmdID, LPWSTR psz, BOOL bShortTitle = FALSE )
{
    _ASSERT( hwnd && IsWindow( hwnd ) );
	return (BOOL)SNDMSG( hwnd, EE_QUERY_STRING, (WPARAM)MAKEWPARAM( nCmdID, bShortTitle ), (LPARAM)psz );
}

#define EE_KEYBOARD_PROP				(EE_FIRST+88)
  // (UINT)wParam = nCmdID, (LPCWSTR)lParam = pszConfigName
  // returns (BOOL)bResult

inline BOOL Editor_KeyboardProp( HWND hwnd, UINT nCmdID, LPCWSTR pszConfigName )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
	return (BOOL)SNDMSG( hwnd, EE_KEYBOARD_PROP, (WPARAM)nCmdID, (LPARAM)pszConfigName );
}

#define EE_GET_ACCEL_ARRAY				(EE_FIRST+89)
  // (UINT)wParam = nBufSize (size of buffer in ACCEL)
  // (ACCEL*)lParam = pAccel

inline UINT Editor_GetAccelArray( HWND hwnd, ACCEL* pAccel, UINT nBufSize )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
	return (UINT)SNDMSG( hwnd, EE_GET_ACCEL_ARRAY, (WPARAM)nBufSize, (LPARAM)pAccel );
}

#define EE_OUTPUT_STRING				(EE_FIRST+90)
  // (UINT)wParam = flags
  // (LPCWSTR)lParam = pszString

inline BOOL Editor_OutputString( HWND hwnd, LPCWSTR pszString, UINT flags )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
	return (BOOL)SNDMSG( hwnd, EE_OUTPUT_STRING, (WPARAM)flags, (LPARAM)pszString );
}

#define EE_OUTPUT_DIR					(EE_FIRST+91)
  // (LPCWSTR)lParam = pszCurrDir

inline BOOL Editor_OutputDir( HWND hwnd, LPCWSTR pszCurrDir )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
	return (BOOL)SNDMSG( hwnd, EE_OUTPUT_DIR, (WPARAM)0, (LPARAM)pszCurrDir );
}

#define EE_ENUM_HIGHLIGHT				(EE_FIRST+92)
  // (LPWSTR)pBuf
  // (size_t)cchBuf

inline size_t Editor_EnumHighlight( HWND hwnd, LPWSTR pBuf, size_t cchBuf )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
	return (size_t)SNDMSG( (hwnd), EE_ENUM_HIGHLIGHT, (WPARAM)cchBuf, (LPARAM)pBuf );
}

#define EE_OUTPUT_PROCESS				(EE_FIRST+93)
  // wParam = 0
  // (PROCESS_INFO*)lParam = pProcessInfo
  
inline BOOL Editor_OutputProcess( HWND hwnd, LPCWSTR pszAppName, LPCWSTR pszCmdLine, LPCWSTR pszDir, UINT nFlags, UINT nCP )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
	PROCESS_INFO pi = { 0 };
	pi.cbSize = sizeof( pi );
	pi.pszAppName = pszAppName;
	pi.pszCmdLine = pszCmdLine;
	pi.pszDir = pszDir;
	pi.nFlags = nFlags;
	pi.nCP = nCP;
	return (BOOL)SNDMSG( hwnd, EE_OUTPUT_PROCESS, (WPARAM)0, (LPARAM)&pi );
}

#define EE_GET_DROPPED_FILE				(EE_FIRST+94)
  // (int)wParam = nIndex
  // (LPWSTR)lParam = pszBuf

inline UINT Editor_GetDroppedFile( HWND hwnd, int nIndex, LPWSTR pszBuf )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
	return (UINT)SNDMSG( hwnd, EE_GET_DROPPED_FILE, (WPARAM)nIndex, (LPARAM)pszBuf );
}

typedef struct _RUN_MACRO_INFO {
	size_t  cbSize;
	LPCWSTR pszMacroFile;
	LPCWSTR pszText;
	UINT	nFlags;
	int     nDefMacroLang;
	POINT_PTR ptOrgPos;
	POINT_PTR ptCodePos;
	POINT_PTR ptErrorPos;
	HGLOBAL hstrResult;
} RUN_MACRO_INFO;


#define S_EDIT_TEMP	 ((HRESULT)2)
#define MACRO_LANG_JSCRIPT		0
#define MACRO_LANG_VBSCRIPT		1
#define MACRO_LANG_UNKNOWN		0x000000ff

#define EE_RUN_MACRO					(EE_FIRST+95)
  // (RUN_MACRO_INFO*)lParam = pRunMacroInfo
  // retusn  S_OK        (success)
  //         S_FALSE     (macro error like syntax error)
  //         S_EDIT_TEMP (macro error but could not open temporary file when trying to edit)
  //         E_FAIL      (error)

inline HRESULT Editor_RunMacro( HWND hwnd, UINT nFlags, UINT nDefMacroLang, LPCWSTR pszMacroFile, LPCWSTR pszText, POINT_PTR* pptOrgPos, POINT_PTR* pptCodePos, POINT_PTR* pptErrorPos, HGLOBAL* phstrResult )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
	RUN_MACRO_INFO rmi = { 0 };
	rmi.cbSize = sizeof( rmi );
	rmi.pszMacroFile = pszMacroFile;
	rmi.pszText = pszText;
	rmi.nFlags = nFlags;
	rmi.nDefMacroLang = nDefMacroLang;
	rmi.ptErrorPos.x = rmi.ptErrorPos.y = -1;
	rmi.ptOrgPos.x = pptOrgPos->x;
	rmi.ptOrgPos.y = pptOrgPos->y;
	rmi.ptCodePos.x = pptCodePos->x;
	rmi.ptCodePos.y = pptCodePos->y;

	if( phstrResult ){
		rmi.hstrResult = *phstrResult;
	}
	HRESULT hr = (HRESULT)SNDMSG( hwnd, EE_RUN_MACRO, 0, (LPARAM)&rmi );
	if( pptErrorPos ){
		pptErrorPos->x = rmi.ptErrorPos.x;
		pptErrorPos->y = rmi.ptErrorPos.y;
	}
	if( phstrResult ){
		*phstrResult = rmi.hstrResult;
	}
	return hr;
}


//inline UINT Editor_RunMacro( HWND hwnd, UINT nFlags, LPCWSTR pszMacroFile )
//{
//	return (UINT)SNDMSG( hwnd, EE_RUN_MACRO, (WPARAM)nFlags, (LPARAM)pszMacroFile );
//}

#define TEMP_INFO_OPEN			0
#define TEMP_INFO_CLOSED		1
#define TEMP_INFO_CLOSE			1
#define TEMP_INFO_SAVE			2

typedef struct _TEMP_INFO {
	size_t		cbSize;
	LPCWSTR		pszTempText;
	LPCWSTR		pszTitle;
	LPCWSTR		pszIconPath;
	LPCWSTR		pszConfig;
	POINT_PTR	ptInitialCaret;
	UINT		nID;
	UINT		nEncoding;
	UINT		nFlags;
} TEMP_INFO;


#define EE_EDIT_TEMP					(EE_FIRST+96)

inline UINT Editor_EditTemp( HWND hwnd, LPCWSTR pszTempText, LPCWSTR pszTitle, LPCWSTR pszIconPath, LPCWSTR pszConfig, UINT nEncoding, POINT_PTR* pptInitialCaret = NULL, UINT nFlags = 0 )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
	TEMP_INFO ti = { 0 };
	ti.cbSize = sizeof( ti );
	ti.pszTempText = pszTempText;
	ti.pszTitle = pszTitle;
	ti.pszIconPath = pszIconPath;
	ti.pszConfig = pszConfig;
	if( pptInitialCaret ){
		ti.ptInitialCaret = *pptInitialCaret;
	}
	else {
		ti.ptInitialCaret.x = ti.ptInitialCaret.y = -1;
	}
	ti.nEncoding = nEncoding;
	ti.nFlags = nFlags;
	return (UINT)SNDMSG( hwnd, EE_EDIT_TEMP, (WPARAM)0, (LPARAM)&ti );
}

inline UINT Editor_ActivateTemp( HWND hwnd, UINT nEditID, POINT_PTR* pptInitialCaret = NULL )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
	TEMP_INFO ti = { 0 };
	ti.cbSize = sizeof( ti );
	ti.nID = nEditID;
	if( pptInitialCaret ){
		ti.ptInitialCaret = *pptInitialCaret;
	}
	else {
		ti.ptInitialCaret.x = ti.ptInitialCaret.y = -1;
	}
	return (UINT)SNDMSG( hwnd, EE_EDIT_TEMP, (WPARAM)0, (LPARAM)&ti );
}

inline UINT Editor_SaveTemp( HWND hwnd, UINT nEditID )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
	TEMP_INFO ti = { 0 };
	ti.cbSize = sizeof( ti );
	ti.nID = nEditID;
	ti.nFlags = TEMP_INFO_SAVE;
	return (UINT)SNDMSG( hwnd, EE_EDIT_TEMP, (WPARAM)0, (LPARAM)&ti );
}

inline UINT Editor_CloseTemp( HWND hwnd, UINT nEditID )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
	TEMP_INFO ti = { 0 };
	ti.cbSize = sizeof( ti );
	ti.nID = nEditID;
	ti.nFlags = TEMP_INFO_CLOSE;
	return (UINT)SNDMSG( hwnd, EE_EDIT_TEMP, (WPARAM)0, (LPARAM)&ti );
}

typedef struct _CLIP_INFO {
	size_t	cbSize;
	LPWSTR	pszBuf;
	UINT	cchBuf;
	UINT	iPos;
	UINT	nAction;
	UINT	nFlags;
} CLIP_INFO;

#define CI_GET_CLIP		0
#define CI_INSERT_CLIP	1
#define CI_REMOVE_CLIP	2
#define CI_GET_CLIP_POS	3
#define CI_SET_CLIP_POS	4
#define CI_ROTATE_CLIP	5

#define CI_FLAG_NO_UPDATE_REAL_CLIP	0x00001000

#define MAX_CLIP_LEN	0x00020000

#define EE_CLIP_HISTORY			(EE_FIRST+97)

inline UINT Editor_GetClip( HWND hwnd, LPWSTR pszBuf, UINT cchBuf, UINT iPos, UINT* pnFlags )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
	CLIP_INFO ci = { 0 };
	ci.cbSize = sizeof( ci );
	ci.nAction = CI_GET_CLIP;
	ci.pszBuf = pszBuf;
	ci.cchBuf = cchBuf;
	ci.iPos = iPos;
	ci.nFlags = *pnFlags;
	UINT nResult = (UINT)SNDMSG( hwnd, EE_CLIP_HISTORY, (WPARAM)0, (LPARAM)&ci );
	*pnFlags = ci.nFlags;
	return nResult;
}

inline UINT Editor_InsertClip( HWND hwnd, LPCWSTR pszText, UINT iPos, UINT nFlags )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
	CLIP_INFO ci = { 0 };
	ci.cbSize = sizeof( ci );
	ci.nAction = CI_INSERT_CLIP;
	ci.pszBuf = (LPWSTR)pszText;
	ci.iPos = iPos;
	ci.nFlags = nFlags;
	UINT nResult = (UINT)SNDMSG( hwnd, EE_CLIP_HISTORY, (WPARAM)0, (LPARAM)&ci );
	return nResult;
}

inline UINT Editor_RemoveClip( HWND hwnd, UINT iPos, UINT nFlags )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
	CLIP_INFO ci = { 0 };
	ci.cbSize = sizeof( ci );
	ci.nAction = CI_REMOVE_CLIP;
	ci.iPos = iPos;
	ci.nFlags = nFlags;
	UINT nResult = (UINT)SNDMSG( hwnd, EE_CLIP_HISTORY, (WPARAM)0, (LPARAM)&ci );
	return nResult;
}

inline int Editor_GetClipPos( HWND hwnd )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
	CLIP_INFO ci = { 0 };
	ci.cbSize = sizeof( ci );
	ci.nAction = CI_GET_CLIP_POS;
	UINT nResult = (UINT)SNDMSG( hwnd, EE_CLIP_HISTORY, (WPARAM)0, (LPARAM)&ci );
	return (int)nResult;
}

inline UINT Editor_SetClipPos( HWND hwnd, int iPos )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
	CLIP_INFO ci = { 0 };
	ci.cbSize = sizeof( ci );
	ci.nAction = CI_SET_CLIP_POS;
	ci.iPos = (UINT)iPos;
	UINT nResult = (UINT)SNDMSG( hwnd, EE_CLIP_HISTORY, (WPARAM)0, (LPARAM)&ci );
	return nResult;
}

inline UINT Editor_RotateClip( HWND hwnd, int iDirection )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
	CLIP_INFO ci = { 0 };
	ci.cbSize = sizeof( ci );
	ci.nAction = CI_ROTATE_CLIP;
	ci.iPos = (UINT)iDirection;
	UINT nResult = (UINT)SNDMSG( hwnd, EE_CLIP_HISTORY, (WPARAM)0, (LPARAM)&ci );
	return nResult;
}


#define EE_GET_OUTPUT_STRING		(EE_FIRST+98)

inline UINT Editor_GetOutputString( HWND hwnd, UINT cchBuf, LPWSTR pBuf )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
	UINT nResult = (UINT)SNDMSG( hwnd, EE_GET_OUTPUT_STRING, (WPARAM)cchBuf, (LPARAM)pBuf );
	return nResult;
}


#define ATTR_NONE			0x00
#define ATTR_COMMENT		0x10
#define ATTR_DOUBLE_QUOTE	0x20
#define ATTR_SINGLE_QUOTE	0x40
#define ATTR_TAG			0x80

#define AI_NEED_CONFIG_SCOPE	0x01
#define AI_NEED_CONFIG_DOC		0x02
#define AI_NEED_ATTR_SUB		0x04
#define AI_NEED_ALL				0x07


typedef struct _ATTR_INFO {
	size_t	cbSize;        // in
	POINT_PTR ptLogical;  // in
	UINT	nFlags;        // in
	UINT    nAttr;         // out
	WCHAR   szConfigScope[MAX_CONFIG_NAME];  // out
	WCHAR   szConfigDoc[MAX_CONFIG_NAME];    // out
} ATTR_INFO;


#define EE_GET_ATTR					(EE_FIRST+99)

inline BOOL Editor_GetAttr( HWND hwnd, ATTR_INFO* pAI )
{
	return (BOOL)SNDMSG( hwnd, EE_GET_ATTR, 0, (LPARAM)pAI );
}

#define EE_GET_WORD					(EE_FIRST+100)
  // (UINT_PTR)wParam = nBufferSize, (LPWSTR)lParam = szBuffer
  // returns (UINT_PTR)nRequiredBufferSize

inline UINT_PTR Editor_GetWord( HWND hwnd, UINT_PTR nBufferSize, LPWSTR szBuffer )
{
	_ASSERT( hwnd && IsWindow( hwnd ) );
    return (UINT_PTR)SNDMSG( hwnd, EE_GET_WORD, (WPARAM)nBufferSize, (LPARAM)szBuffer );
}


//typedef struct _GET_LINE_INFO_EX {
//	size_t		cbSize;        // in
//	UINT_PTR	yLine;		   // in
//	UINT		nFlags;        // in
//	BYTE		byteCrLf;      // out
//} GET_LINE_INFO_EX;
//
//#define EE_GET_LINE_EX            (EE_FIRST+101)
//  // (GET_LINE_INFO*)wParam = pGetLineInfo, (LPWSTR)lParam = szString
//  // returns (UINT_PTR)nRequiredBufferSize
//
//inline UINT_PTR Editor_GetLineEx( HWND hwnd, GET_LINE_INFO_EX* pLineInfo, LPWSTR szString )
//{
//	_ASSERT( hwnd && IsWindow( hwnd ) );
//    return (UINT_PTR)SNDMSG( (hwnd), EE_GET_LINE_EX, (WPARAM)(GET_LINE_INFO_EX*)(pLineInfo), (LPARAM)(LPWSTR)(szString) );
//}

//
#define EE_LAST                 (EE_FIRST+255)

#define RUN_FILE				0
#define RUN_TEXT				1

#define HIGHLIGHT_COLOR_MASK	0x000f
#define HIGHLIGHT_WORD			0x0100
#define HIGHLIGHT_RIGHT_SIDE	0x0200
#define HIGHLIGHT_INSIDE_TAG	0x0400
#define HIGHLIGHT_REG_EXP		0x0800
#define HIGHLIGHT_CASE			0x1000
#define HIGHLIGHT_RIGHT_ALL		0x2000

#define FLAG_OPEN_OUTPUT			0x0001
#define FLAG_CLOSE_OUTPUT			0x0002
#define FLAG_FOCUS_OUTPUT			0x0004
#define FLAG_CLEAR_OUTPUT			0x0008
#define FLAG_INCLUDE_STDERR			0x0010
#define FLAG_GREP_OUTPUT			0x0020
#define FLAG_INSERT_VIEW			0x0040
#define FLAG_KEEP_DEST_RETURN_TYPE	0x0080
#define FLAG_STDIN					0x0100
#define FLAG_WAIT_FINISHED			0x0200
#define FLAG_CLOSE_ON_EXIT			0x0400
#define FLAG_ADD_EOF				0x0800

#define EI_GET_ENCODE           256
#define EI_SET_ENCODE           257
#define EI_GET_SIGNATURE        268
#define EI_SET_SIGNATURE        269
#define EI_GET_FONT_CHARSET     270
#define EI_SET_FONT_CHARSET     271
#define EI_GET_FONT_CP          272
#define EI_GET_INPUT_CP         274
#define EI_GET_SHOW_TAG         276
#define EI_SET_SHOW_TAG         277
#define EI_GET_FILE_NAMEA       278
#define EI_GET_FILE_NAMEW       280
#define EI_IS_PROPORTIONAL_FONT 282
#define EI_GET_NEXT_BOOKMARK    284
#define EI_GET_HILITE_FIND      286
#define EI_SET_HILITE_FIND      287
#define EI_GET_APP_VERSIONA     288
#define EI_GET_APP_VERSIONW     290
#define EI_GET_READ_ONLY        296
#define EI_IS_WINDOW_COMBINED   298
#define EI_WINDOW_COMBINE       299
#define EI_IS_UNDO_COMBINED     300

// new from v5.00
#define EI_GET_DOC_COUNT        301
#define EI_INDEX_TO_DOC         302
#define EI_DOC_TO_INDEX         303
#define EI_ZORDER_TO_DOC        304
#define EI_DOC_TO_ZORDER        305
#define EI_GET_ACTIVE_INDEX     306
#define EI_SET_ACTIVE_INDEX     307
#define EI_GET_FULL_TITLEA      308
#define EI_GET_FULL_TITLEW      309
#define EI_GET_SHORT_TITLEA     310
#define EI_GET_SHORT_TITLEW     311
#define EI_GET_SAVE_AS_TITLEA   312
#define EI_GET_SAVE_AS_TITLEW   313
#define EI_MOVE_ORDER           314
#define EI_CLOSE_DOC            315
#define EI_SAVE_DOC             316

// new from v7.00
#define EI_GET_CURRENT_FOLDER	317
#define EI_IS_LARGE_DOC			318
	
// new from v8.00
#define EI_USE_INI				319
#define EI_GET_LANGUAGE			320

// new from v9.00
#define EI_COMBINE_HISTORY      321
#define EI_GET_BAR_TEXT_COLOR	322
#define EI_GET_BAR_BACK_COLOR	323
#define EI_GET_RETURN_TYPE		324

// new from v10.00
#define EI_GET_ACTIVE_DOC		325
#define EI_SET_ACTIVE_DOC		326
#define EI_GET_SYNC_SESSION		327
#define EI_GET_LOC_DLL_INSTANCE	328



#define POS_VIEW                    0
#define POS_LOGICAL_A               1
#define POS_LOGICAL_W               2
#define POS_TAB_A                   3
#define MAX_LINE_COLUMN_MODE		4

#define POS_SCROLL_DONT_CARE		0x00000000
#define POS_SCROLL_CENTER			0x00000010
#define POS_SCROLL_TOP				0x00000020
#define POS_SCROLL_ALWAYS			0x00000040
#define POS_WANT_X                  0x00010000
#define POS_WANT_Y                  0x00020000

#define SEL_TYPE_NONE               0
#define SEL_TYPE_CHAR               1
#define SEL_TYPE_LINE               2
#define SEL_TYPE_BOX                3
#define SEL_TYPE_MASK               0x000f
#define SEL_TYPE_KEYBOARD           0x0010
#define SEL_TYPE_SELECTED           0x0020

// EE_SAVE_FILE
#define DO_SAVE_NONE                0
#define DO_SAVE_REPLACE             1
#define DO_SAVE_RENAME              2

// EE_CONVERT
#define FLAG_MAKE_LOWER             0
#define FLAG_MAKE_UPPER             1
#define FLAG_HAN_TO_ZEN             2
#define FLAG_ZEN_TO_HAN             3
#define FLAG_CAPITALIZE             4
#define FLAG_CONVERT_MASK           7
#define FLAG_CONVERT_SELECT_ALL     0x0100
#define FLAG_CONVERT_KATA           0x0400
#define FLAG_CONVERT_ALPHANUMERIC   0x0800
#define FLAG_CONVERT_MARK           0x1000
#define FLAG_CONVERT_SPACE          0x2000
#define FLAG_CONVERT_KANA_MARK      0x4000
#define FLAG_CONVERT_ALL_TYPES      0xfe00

// EE_FIND, EE_REPLACE, EE_FIND_IN_FILES, EE_REPLACE_IN_FILES, EE_MATCH_REGEX, EE_FIND_REGEX
#define FLAG_FIND_NEXT              0x00000001  // EE_FIND only
#define FLAG_FIND_CASE              0x00000002  // EE_FIND, EE_REPLACE, EE_MATCH_REGEX and EE_FIND_REGEX
#define FLAG_FIND_ESCAPE            0x00000004  // EE_FIND and EE_REPLACE
#define FLAG_REPLACE_SEL_ONLY       0x00000008  // EE_REPLACE only
#define FLAG_REPLACE_ALL            0x00000010  // EE_REPLACE only
#define FLAG_FIND_NO_PROMPT         0x00000020  // EE_FIND and EE_REPLACE
#define FLAG_FIND_ONLY_WORD         0x00000040  // EE_FIND, EE_REPLACE and EE_FIND_REGEX
#define FLAG_FIND_AROUND            0x00000080  // EE_FIND only
#define FLAG_FIND_REG_EXP           0x00000100  // EE_FIND and EE_REPLACE
#define FLAG_FIND_CLOSE             0x00000200  // EE_FIND and EE_REPLACE
#define FLAG_FIND_RECURSIVE         0x00000400  // EE_FIND_IN_FILES and EE_REPLACE_IN_FILES
#define FLAG_FIND_FILENAMES_ONLY    0x00000800  // EE_FIND_IN_FILES only
#define FLAG_REPLACE_KEEP_OPEN      0x00001000  // EE_REPLACE_IN_FILES only
#define FLAG_REPLACE_BACKUP         0x00002000  // EE_REPLACE_IN_FILES only
#define FLAG_FIND_IGNORE_FILES      0x00004000  // EE_FIND_IN_FILES and EE_REPLACE_IN_FILES
#define FLAG_FIND_OPEN_DOC			0x00008000  // EE_FIND and EE_REPLACE
#define FLAG_FIND_MATCH_DOT_NL		0x00010000  // internal use only
#define FLAG_FIND_INCREMENTAL		0x00020000  // internal use only
#define FLAG_FIND_SAVE_HISTORY		0x00040000  // EE_FIND, EE_REPLACE, EE_FIND_IN_FILES and EE_REPLACE_IN_FILES
#define FLAG_FIND_COUNT				0x00080000  // EE_FIND and EE_REPLACE
#define FLAG_FIND_OUTPUT			0x01000000  // EE_FIND_IN_FILES only
#define FLAG_GREP_MASK              0x01007c00
#define FLAG_FIND_MASK              0x0108ffff

// GET_LINE_INFO
#define FLAG_LOGICAL			1
#define FLAG_WITH_CRLF			2
#define FLAG_GET_CRLF_BYTE		4

#define UNINSTALL_FALSE			0
#define UNINSTALL_SIMPLE_DELETE	1
#define UNINSTALL_RUN_COMMAND	2

#define EP_FIRST                (WM_USER+0x500)

#define EP_QUERY_PROPERTIES     (EP_FIRST+0)
#define EP_SET_PROPERTIES       (EP_FIRST+1)
#define EP_GET_NAMEA            (EP_FIRST+2)
#define EP_GET_NAMEW            (EP_FIRST+3)
#define EP_GET_VERSIONA         (EP_FIRST+4)
#define EP_GET_VERSIONW         (EP_FIRST+5)
#define EP_QUERY_UNINSTALL      (EP_FIRST+6)
#define EP_SET_UNINSTALL        (EP_FIRST+7)
#define EP_GET_BITMAP           (EP_FIRST+8)
#define EP_GET_MASK             (EP_FIRST+9)
#define EP_GET_INFO             (EP_FIRST+10)
#define EP_PRE_TRANSLATE_MSG	(EP_FIRST+11)
#define EP_USE_DROPPED_FILES	(EP_FIRST+12)
#define EP_GET_MENU_TEXT		(EP_FIRST+13)
#define EP_GET_STATUS_MESSAGE	(EP_FIRST+14)
#define EP_DISABLE_AUTO_COMPLETE	(EP_FIRST+15)
#define EP_USER_MSG             (EP_FIRST+16)

#define EP_LAST                 (EP_FIRST+50)

#ifdef _UNICODE
#define EP_GET_NAME             EP_GET_NAMEW
#define EP_GET_VERSION          EP_GET_VERSIONW
#else
#define EP_GET_NAME             EP_GET_NAMEA
#define EP_GET_VERSION          EP_GET_VERSIONA
#endif

// EP_GET_BITMAP
#define BITMAP_SMALL            0x00000000
#define BITMAP_LARGE            0x00000001
#define BITMAP_SIZE_MASK        0x0000000f
#define BITMAP_16_COLOR         0x00000000
#define BITMAP_256_COLOR        0x00000010
#define BITMAP_24BIT_COLOR      0x00000020
#define BITMAP_COLOR_MASK       0x000000f0
#define BITMAP_DEFAULT          0x00000000
#define BITMAP_DISABLED         0x00000100
#define BITMAP_HOT              0x00000200
#define BITMAP_STATUS_MASK      0x00000f00

// EP_GET_INFO
#define EPGI_ALLOW_OPEN_SAME_GROUP      1
#define EPGI_MAX_EE_VERSION             2
#define EPGI_MIN_EE_VERSION             3
#define EPGI_SUPPORT_EE_PRO             4
#define EPGI_SUPPORT_EE_STD             5
#define EPGI_ALLOW_MULTIPLE_INSTANCES	6

#define CHECK_FILE_CHANGED_NONE         0
#define CHECK_FILE_CHANGED_PROMPT       1
#define CHECK_FILE_CHANGED_AUTO         2
#define CHECK_FILE_CHANGED_EXCLUSIVE    3
#define MAX_CHECK_FILE_CHANGED			4

#define MIN_MONITOR_INTERVAL            1
#define MAX_MONITOR_INTERVAL            255  // inclusive
#define DEF_MONITOR_INTERVAL            5

#define MIN_SMOOTH_SCROLL_SPEED	1
#define MAX_SMOOTH_SCROLL_SPEED	9
#define DEF_SMOOTH_SCROLL_SPEED 5

#define MAX_REGEX_INDENT				512


#define SIZE_OF_CUSTOMIZE_INFO_OLD      6660   // old size before v9
#define SIZE_OF_CUSTOMIZE_INFO_2        ((MAX_REGEX_INDENT*4)*sizeof(WCHAR))
#define SIZE_OF_CUSTOMIZE_INFO_V9      (SIZE_OF_CUSTOMIZE_INFO_OLD+SIZE_OF_CUSTOMIZE_INFO_2)   // new size v9
//#define SIZE_OF_CUSTOMIZE_INFO_3		(sizeof( CCustomizeInfo )-SIZE_OF_CUSTOMIZE_INFO_V9)
//#define SIZE_OF_CUSTOMIZE_INFO_V10		(sizeof( CCustomizeInfo ))


#define MAX_PAREN_SIZE	11
#define DEF_PAREN_BITS	0x07f7
#define HTML_PAREN_BITS 0x07ff


class CCustomizeInfo
{
public:
    LOGFONTW    m_alfScreen[MAX_CHARSET];   // screen fonts
    LOGFONTW    m_alfPrint[MAX_CHARSET];    // printer fonts
    POINT       m_ptShowScrollBar;      // scroll bars (x: horizontal and y: vertical) 0: no display, 1: display only when necessary, 2: display always
    int         m_nPrinterMarginTop;    // printer top margin
    int         m_nPrinterMarginBottom; // printer bottom margin
    int         m_nPrinterMarginLeft;   // printer left margin
    int         m_nWrapMode;        // wrap mode
    int         m_nMarginNormal;    // normal line margin
    int         m_nMarginQuote;     // quoted line margin
    int         m_nTabSpace;        // tab columns 
    int         m_nEncodingRead;    // encoding for read
	BYTE		m_nLineSpace;		// line space
	BYTE		m_nCharSpace;		// v7: character space
	WORD		m_wParenPairBits;   // v9: Paren Pairs to highlight/autocomplete Bits  
	BYTE		m_nLineSpacePrint;  // space between lines
    bool        m_bAutoCompleteParen;  // v9: Auto Complete corresponding bracket  //	BYTE		m_byteReserved1;
	WCHAR		m_chDelimiter;		// v9 : user-defined delimiter for DSV
    int         m_nReserved15;      //  was m_nHiliteTag before v3.16
    int         m_nReserved14;      //  was m_nHiliteMultiComment before v3.16
    UINT        m_nAutoSaveTime;    // auto save time
    int         m_nCheckFileChanged; // v3: changed by another program
    UINT        m_nUndoBufferSize;  // undo max number
    int         m_nEncodingNew;     // v3: encoding for new files
    int         m_nCrLfNew;         // v3: how to return for new files
    int         m_nCharsetNew;      // v3: font charset for new files
    int         m_nEncodingWrite;   // v3: encoding for saving
    int         m_nCrLfWrite;       // v3: how to return for saving
    int         m_nSpecialSyntax;   // v3.16: Special Syntax
    WCHAR       m_chEscape;         // v3.16: Escape character
    bool        m_bPasteAnsi;       // v3.16: Always Paste as ANSI
    bool        m_bNewTemplate;     // v3.17: Use template for a new file
    bool        m_bSaveAsNameEntity; // v3.17: Use Named Entity Reference
    bool        m_bInsertSpacesTab; // v3.19: Insert spaces for Tab
    WCHAR       m_chIndentBegin;    // v3.17: Begin Indent
    WCHAR       m_chIndentEnd;      // v3.17: End Indent
    WCHAR       m_chEndOfStatement; // v3.17: End of Statement
    int         m_nIndentSpace;     // v3.19: Indent columns
    bool        m_bNoSpaceEdge;     // v3.19: No space at left edge of Window
    bool        m_bAnsiFont;        // v3.28: Non-Unicode Font --- obsolete
    bool        m_bShowScrollOnlyActive; // v3.31: Show scroll bars only when current pane is active
    bool        m_bWrapPagePrint;   // v3.31: Wrap by Page when printing
    int         m_nPrinterMarginRight;  // v3.24: printer right margin
    int         m_nMaxFindHilite;       // v3.32: (Depth of searched string to highlight) - 1
    bool        m_bPromptInvalidChar; // v4.01: Prompt if invalid characters found
    bool        m_bNameUntitled;        // 6.00: auto name untitled -- v4.03: Synchronize Read-Only attribute
    BYTE        m_byteMonitorInterval;  // 5.00: monitor interval for changed file (File tab)
    bool        m_bVirtualSpace;    // 7.00 : Enable Virtual Space
	BYTE		m_byteSmoothScrollSpeed;	// 7.00 : Smooth Scroll Speed  MIN_SMOOTH_SCROLL_SPEED (slow) - MAX_SMOOTH_SCROLL_SPEED (fast)
	bool		m_bShowIndentGuides;        // 8.00 : Show Indent Guides
	bool		m_bHorzGrid;		// v10: Horizontal Grid (was m_bDottedLine)
	bool		m_bSelectInURL;   // 9.00 : Clicking in URL selects the whole string
	bool		m_bRegexIndent;  // v9
	bool		m_bDetectCSV;		// v9 : Detect CSV
	bool		m_bDetectTSV;		// v9 : Detect TSV
	bool		m_bDetectDSV;		// v9 : Detect DSV (user-defined delimiter)
	bool		m_bSpellQuote;
	bool		m_bSpellSingleQuotes;
	bool		m_bSpellDoubleQuotes;
	bool		m_bSpellComment;
	bool		m_bSpellScript;
	bool		m_bSpellInTag;
	bool		m_bSpellHilite;
	bool		m_bSpellHyperlink;
	bool		m_bSpellRest;
	bool		m_bSpell;
	bool		m_bSpellCamelCase;
	bool		m_bReserved3;		
	bool		m_bEnableHeader;
	bool		m_bEnableFooter;
	bool		m_bReserved2;
	bool		m_bReserved1;
//    int         m_nReserved1;       // reserved
    BYTE        m_abUrlChar[128];   // =1: URL char, =2: URL char byte not at end.
    bool        m_bNotepadDiary;    // notepad compatible diary
    bool        m_bPrintLineNum;    // print line numbers
    bool        m_bPromptNullFile;  // prompt if Null character found
    bool        m_bPromptCrLf;      // prompt at inconsistent returns
    bool        m_bShowEOF;         // show EOF
    bool        m_bShowCR;          // show returns
    bool        m_bShowTab;         // show tab
    bool        m_bShowLineNum;     // show line numbers
    BYTE        m_bShowLogicalLine; // line and column display as
    bool        m_bWordWrap;        // word wrap
    bool        m_bFaceWrap;        // enable non-wrap words
    bool        m_bKinsokuWrap;     // wrap these characters
    bool        m_bSaveTabToSpace;  // save tabs as spaces
    bool        m_bSaveInsertCR;    // insert returns when saving
    bool        m_bUseRecycleBin;   // use recylce bin to buckup
    bool        m_bAutoIndent;      // auto indent
    bool		m_bWrapIndent;		// v7.00: auto indent for wrap position, used to be m_bOverwrite, v6.00 Obsolete
    bool        m_bHilite;          // highlight these words
    bool        m_bURL;             // link to URLs
    bool        m_bMailTo;          // clicking mail address sends mail
    bool        m_bLinkDblclick;    // enable double clicking only
    bool        m_bFullPath;        // show file name with full path
    bool        m_b7BitKanji;       // 7 bit kanji
    bool        m_bCrLfSeparateMark;    // show CR and LF with different marks 
    bool        m_bShowRuler;       // show ruler
    bool        m_bAutoSave;        // auto save
    bool        m_bDeleteEmpty;     // delete empty files when saving
    bool        m_bSaveNotModified; // always enable saving
    bool        m_bBackupFolder;            // save backups to backup folder
    bool        m_bFolderIfRecycleFailed;   // save to backup folder if recycle bin not available
    bool        m_bAutoSaveFolder;          // save to auto save folder
    bool        m_bRenameBackup;            // rename if same file name exists
    bool        m_bControlIME;              // run input method editor
    bool        m_bRenameAutoSave;          // rename if same file name exists
    bool        m_bBackupSame;              // save backups to same folder
    bool        m_bShowDbSpace;             // show double-byte spaces
    bool        m_bSelLinkContextMenu;      // v3: not implemented
    bool        m_bPageVScroll;             // v3: always enable 1page vertical scroll
    bool        m_bPageHScroll;             // v3: always enable 1page horizontal scroll
    bool        m_bHalfPageScroll;          // v3: scroll half page
    bool        m_bDetectUnicode;           // v3: detect Unicode(UTF-16/UTF-8)signature (BOM)
    bool        m_bAllowCtrlChars;          // v3: allow insert control character
    bool        m_bMoveCursorScroll;        // v3: move cursor by scrolling
    bool        m_bHorzLine;                // v3: horizontal line
    bool        m_bVertLine;                // v3: vertical line
    bool        m_bScroll2Lines;            // v3: double line scroll
    bool        m_bFastKeyRepeat;           // v3: faster cursor movement
    bool        m_bDBCharUrl;               // v3: recognize double-byte characters as URLs
    bool        m_bKanaUrl;                 // v3: recognize single-byte kana and kana marks as URLs
    bool        m_bShowPage;                // v3: display page number
    bool        m_bUsePrinterFont;          // v3: choose font for default printer
    bool        m_bSignatureNew;            // v3: Unicode, UTF-8 signature for new files
    bool        m_bPromptNotAnsi;           // v3: prompt on saving if unicode characters cannot convert to ANSI
    bool        m_bSignatureWrite;          // v3: Unicode, UTF-8 signature for saving
    bool        m_bIgnoreColorPrint;        // v3.08: Ignore Color and Underlines (Print)
    bool        m_bNoFullPathIfNotActive;   // v3.08: Display file name without full path if the window is not active
    bool        m_bSmoothScroll;            // v7.00: Smooth Scroll, used to be m_bSaveOverwrite, v6.00 Obsolete
    bool        m_bNoChangeCrLf;            // v3.13: Do not change how to return at copy and paste.
    bool        m_bShowSpace;               // v3.13: show single-byte spaces
    bool        m_bWordWrapMark;            // v3.13: allows word wrap after marks
    bool        m_bPrintSeparatingLines;    // v3.14: Draw separating lines
    bool        m_bSameFontPrint;           // v3.14: Use Display Font as Printer Font
    bool        m_bHiliteCorresParen;       // v3.14: Highlight Corresponding Parentheses
    bool        m_bSelectInQuotes;          // v3.14: Highlight and easily select in "quotes".
    bool        m_bDetectUTF8;              // v3.15: Detect UTF-8
    bool        m_bDetectCharset;           // v3.15: Detect Charset (HTML)
    bool        m_bDetectAll;               // v3.15: Detect All
    bool        m_bDeleteSpaceEnd;          // v3.15: Delete Space at End of Lines
    bool        m_bSaveAsEntity;            // v3.15: Encode Unicode as HTML Entity
    bool        m_bShowControl;             // v3.15: Highlight Control Characters
    BYTE        m_bQuoteType;               // v3.16: Quote type, combination of QUOTE_SINGLE, QUOTE_DOUBLE and QUOTE_CONTINUE
    WCHAR       m_chKanjiInChar;            // transitional character to kanji
    WCHAR       m_chKanjiOutChar;           // transitional character to single-bytes 
    WCHAR       m_chTagLeft;                // begin tag
    WCHAR       m_chTagRight;               // end tag
    WCHAR       m_szHeader[MAX_HEADER];             // header
    WCHAR       m_szLineComment1[MAX_LINE_COMMENT]; // v3.16: Line Comment
    WCHAR       m_szScriptBegin[MAX_SCRIPT_BEGIN];  // v3.16: Script Begin
    WCHAR       m_szFooter[MAX_FOOTER];             // footer
    WCHAR       m_szLineComment2[MAX_LINE_COMMENT]; // v3.16: Line Comment
    WCHAR       m_szScriptEnd[MAX_SCRIPT_END];      // v3.16: Script End
    WCHAR       m_szPrefix[MAX_PREFIX_LENGTH];      // default quote mark 
    WCHAR       m_szKinsokuBegin[MAX_KINSOKU_BEGIN]; // not allowed at line head
    WCHAR       m_szKinsokuEnd[MAX_KINSOKU_END];    //  not allowed at line end
    WCHAR       m_szDefExt[MAX_DEF_EXT];            // default extension
    WCHAR       m_szPrefixList[MAX_PREFIX_LIST];    // quote mark 
    WCHAR       m_szBackupPath[MAX_PATH];           // backup folder
    WCHAR       m_szAutoSavePath[MAX_PATH];         // auto save folder
    WCHAR       m_szMultiCommentBegin[MAX_MULTI_COMMENT_BEGIN];  // Multi-line comment begin
    WCHAR       m_szMultiCommentEnd[MAX_MULTI_COMMENT_END];      // Multi-line comment end
public:
    WCHAR       m_szRegexIgnoreIndent[MAX_REGEX_INDENT];
    WCHAR       m_szRegexIndentBegin[MAX_REGEX_INDENT];
    WCHAR       m_szRegexIndentEnd[MAX_REGEX_INDENT];
    WCHAR       m_szRegexIndentStatement[MAX_REGEX_INDENT];

	// v10 auto complete
	//WCHAR m_szDicFile[MAX_PATH];
	//WCHAR m_szFirstChars[MAX_PATH];
	//WCHAR m_szMidChars[MAX_PATH];
	//WCHAR m_szLastChars[MAX_PATH];

	//int  m_nLinesBefore;
	//int  m_nLinesAfter;
	//UINT m_nDelay;
	//int  m_nDummy1;

	//BYTE m_nMatchCase;
	//BYTE m_nPriority;
	//BYTE m_nType;
	//BYTE m_nRefreshRate;

	//BYTE m_nNumOfChars;
	//bool m_bListHighlight;
	//bool m_bListWordsInDoc;
	//bool m_bAutoShow;

	//bool m_bAutoComplete;
	//bool m_bShowIcon;
	//bool m_bColorList;
	//bool m_bListDic;

	//bool m_bEnterKey;
	//bool m_bHideWhenNoCandidate;
	//bool m_bLimitLines;
	//bool m_bIncludePrevDoc;

	//bool m_bIncludeAllDocsInGroup;
	//bool m_bOnlyIfSameConfig;
	//bool m_bFreeFormat;
	//bool m_bClipboard;

	//bool m_bFileNames;
	//bool m_bShowOnlyMatched;
	//bool m_bSearchedStrings;
	//bool m_bEnableAutoComplete; // m_bDummy1;

    
public:
    void Initialize();
	bool IsSpellInCheckedAny() const {
		return m_bSpellQuote || m_bSpellSingleQuotes || m_bSpellDoubleQuotes || m_bSpellComment || m_bSpellScript || m_bSpellInTag || m_bSpellHilite || m_bSpellHyperlink || m_bSpellRest;
	}
	bool IsSpellInCheckedAll() const {
		return m_bSpellQuote && m_bSpellSingleQuotes && m_bSpellDoubleQuotes && m_bSpellComment && m_bSpellScript && m_bSpellInTag && m_bSpellHilite && m_bSpellHyperlink && m_bSpellRest;
	}
};

// Command IDs
//

#define EEID_FILE_NEW                     4096
#define EEID_FILE_OPEN                    4097
#define EEID_FILE_CLOSE_OPEN              4098
#define EEID_FILE_SAVE                    4099
#define EEID_FILE_SAVE_AS                 4100
#define EEID_FILE_SAVE_ALL                4101
#define EEID_FILE_SAVE_ANSI               4102
#define EEID_FILE_SAVE_JIS                4103
#define EEID_FILE_SAVE_EUC                4104
#define EEID_SAVE_AS_CRLF                 4105
#define EEID_SAVE_AS_CR                   4106
#define EEID_SAVE_AS_LF                   4107
#define EEID_FILE_INSERT                  4108
#define EEID_FILE_RELOAD                  4109
#define EEID_FILE_RELOAD_ANSI             4110
#define EEID_FILE_RELOAD_JIS              4111
#define EEID_FILE_RELOAD_EUC              4112
#define EEID_READ_ONLY                    4113
#define EEID_FILE_PRINT                   4114
#define EEID_FILE_PRINT_DIRECT            4115
#define EEID_FILE_SAVE_EXIT               4116
#define EEID_APP_EXIT                     4117
#define EEID_SAVE_EXIT_ALL                4118
#define EEID_EXIT_ALL                     4119
#define EEID_APP_QUIT                     4120
#define EEID_NEW_TRAY_ICON                4121
#define EEID_TRAY_ICON_EXIT               4122
#define EEID_FILE_NEW_PASTE               4123
#define EEID_EDIT_UNDO                    4124
#define EEID_EDIT_REDO                    4125
#define EEID_EDIT_CUT                     4126
#define EEID_EDIT_COPY                    4127
#define EEID_EDIT_COPY_DESELECT           4128
#define EEID_EDIT_PASTE                   4129
#define EEID_EDIT_COPY_PREFIX             4130
#define EEID_EDIT_COPY_PREFIX_DESELECT    4131
#define EEID_PASTE_PREFIX                 4132
#define EEID_PASTE_RETURN                 4133
#define EEID_PASTE_PREFIX_RETURN          4134
#define EEID_DELETE                       4135
#define EEID_EDIT_SELECT_ALL              4136
#define EEID_INSERT_DATE                  4137
#define EEID_INSERT_DATE_TIME             4138
#define EEID_JUMP                         4139
#define EEID_EDIT_COPY_LINK               4140
#define EEID_LINK_OPEN                    4141
#define EEID_INSERT                       4142
#define EEID_INSERT_CR_WRAP               4143
#define EEID_DELETE_CR_WRAP               4144
#define EEID_INSERT_CR                    4145
#define EEID_INSERT_LF                    4146
#define EEID_TAG_JUMP                     4147
#define EEID_CONVERT                      4148
#define EEID_MAKE_UPPER                   4149
#define EEID_MAKE_LOWER                   4150
#define EEID_ZEN_TO_HAN                   4151
#define EEID_HAN_TO_ZEN                   4152
#define EEID_SELECT_CHAR                  4153
#define EEID_SELECT_LINE                  4154
#define EEID_SELECT_BOX                   4155
#define EEID_RIGHT                        4156
#define EEID_LEFT                         4157
#define EEID_RIGHT_WORD                   4158
#define EEID_LEFT_WORD                    4159
#define EEID_UP                           4160
#define EEID_DOWN                         4161
#define EEID_PAGEUP                       4162
#define EEID_PAGEDOWN                     4163
#define EEID_HOME                         4164
#define EEID_LOGICAL_HOME                 4165
#define EEID_END                          4166
#define EEID_LOGICAL_END                  4167
#define EEID_TOP                          4168
#define EEID_BOTTOM                       4169
#define EEID_SCROLL_UP                    4170
#define EEID_SCROLL_DOWN                  4171
#define EEID_SHIFT_RIGHT                  4172
#define EEID_SHIFT_LEFT                   4173
#define EEID_SHIFT_RIGHT_WORD             4174
#define EEID_SHIFT_LEFT_WORD              4175
#define EEID_SHIFT_UP                     4176
#define EEID_SHIFT_DOWN                   4177
#define EEID_SHIFT_PAGEUP                 4178
#define EEID_SHIFT_PAGEDOWN               4179
#define EEID_SHIFT_HOME                   4180
#define EEID_SHIFT_LOGICAL_HOME           4181
#define EEID_SHIFT_END                    4182
#define EEID_SHIFT_LOGICAL_END            4183
#define EEID_SHIFT_TOP                    4184
#define EEID_SHIFT_BOTTOM                 4185
#define EEID_BACK                         4186
#define EEID_ESCAPE                       4187
#define EEID_TAB                          4188
#define EEID_SHIFT_TAB                    4189
#define EEID_DELETE_LINE                  4190
#define EEID_DELETE_RIGHT_LINE            4191
#define EEID_EDIT_COPY_LINE               4192
#define EEID_EDIT_CUT_LINE                4193
#define EEID_DELETE_WORD                  4194
#define EEID_LINE_OPEN_ABOVE              4195
#define EEID_LINE_OPEN_BELOW              4196
#define EEID_INSERT_CONTROL               4197
#define EEID_TOGGLE_IME                   4198
#define EEID_RECONVERT                    4199
#define EEID_EDIT_FIND                    4200
#define EEID_EDIT_REPLACE                 4201
#define EEID_EDIT_REPEAT                  4202
#define EEID_EDIT_REPEAT_BACK             4203
#define EEID_FIND_NEXT_WORD               4204
#define EEID_FIND_PREV_WORD               4205
#define EEID_ERASE_FIND_HILITE            4206
#define EEID_GREP                         4207
#define EEID_WRAP_NONE                    4208
#define EEID_WRAP_BY_CHAR                 4209
#define EEID_WRAP_BY_WINDOW               4210
#define EEID_VIEW_STATUS_BAR              4212
#define EEID_WATCH_CHAR_CODE              4213
#define EEID_NEXT_PANE                    4214
#define EEID_PREV_PANE                    4215
#define EEID_QUICK_MACRO_RECORD           4216
#define EEID_QUICK_MACRO_RUN              4217
#define EEID_FONT                         4218
#define EEID_CUSTOMIZE                    4219
#define EEID_CONFIG_POPUP                 4220
#define EEID_CONFIG                       4221
#define EEID_COMMON_SETTINGS              4222
#define EEID_FILE_ASSOCIATE               4223
#define EEID_CUSTOMIZE_TOOLBAR            4224
#define EEID_CUSTOMIZE_PLUG_INS           4238
#define EEID_WINDOW_ALWAYS_TOP            4239
#define EEID_WINDOW_SPLIT                 4240
#define EEID_WINDOW_CASCADE               4241
#define EEID_WINDOW_TILE_HORZ             4242
#define EEID_WINDOW_TILE_VERT             4243
#define EEID_WINDOW_MINIMIZE_ALL          4244
#define EEID_NEXT_WINDOW                  4245
#define EEID_PREV_WINDOW                  4246
#define EEID_HELP_FINDER                  4247
#define EEID_HELP_REGIST                  4248
#define EEID_WEB_HOME                     4249
#define EEID_APP_ABOUT                    4250
#define EEID_SELECT_WORD                  4251
#define EEID_FILE_SAVE_RENAME             4252
#define EEID_TAB_TO_SPACE                 4253
#define EEID_FILE_SAVE_UNICODE            4254
#define EEID_FILE_SAVE_UTF8               4255
#define EEID_FILE_SAVE_UTF7               4256
#define EEID_FILE_RELOAD_UNICODE          4257
#define EEID_FILE_RELOAD_UTF8             4258
#define EEID_FILE_RELOAD_UTF7             4259
#define EEID_FILE_SAVE_UNICODE_BIGENDIAN  4260
#define EEID_FILE_RELOAD_UNICODE_BIGENDIAN 4261
#define EEID_EDIT_PASTE_ANSI              4262
#define EEID_FILE_RELOAD_932              4263
#define EEID_DEFINE_CODE_PAGE             4264
#define EEID_FILE_SAVE_932                4265
#define EEID_CUSTOMIZE_MENU               4266
#define EEID_ALL_COMMANDS                 4267
#define EEID_NEXT_LOGICAL_LINE            4268
#define EEID_PREV_LOGICAL_LINE            4269
#define EEID_ALL_PROP                     4270
#define EEID_NEW_PASTE_PREFIX             4271
#define EEID_NEW_PASTE_PREFIX_RETURN      4272
#define EEID_CUSTOMIZE_TRAY               4273
#define EEID_INSERT_CR_LF                 4274
#define EEID_DELETE_RIGHT_WORD            4275
#define EEID_NEXT_PAREN                   4276
#define EEID_SHIFT_NEXT_PAREN             4277
#define EEID_TRIM_RIGHT                   4278
#define EEID_FILE_RELOAD_DETECT_ALL       4279
#define EEID_DELETE_LEFT_WORD             4280
#define EEID_NEW_CONFIG_POPUP             4281
#define EEID_FONT_POPUP                   4282
#define EEID_RELOAD_POPUP                 4283
#define EEID_DELETE_PANES                 4284
#define EEID_SHOW_PLUGINS_BAR             4285
#define EEID_PRINT_PREVIEW                4286
#define EEID_WINDOW_TOP                   4292
#define EEID_WINDOW_BOTTOM                4293
#define EEID_WINDOW_RIGHT                 4294
#define EEID_WINDOW_LEFT                  4295
#define EEID_HOME_TEXT                    4296
#define EEID_SHIFT_HOME_TEXT              4297
#define EEID_KEYBOARD_MAP                 4298
#define EEID_WINDOW_SPLIT_HORZ            4299
#define EEID_WINDOW_SPLIT_VERT            4300
#define EEID_CONTEXT_MENU                 4301
#define EEID_DELETE_LEFT_LINE             4302
#define EEID_INSERT_GRAVE                 4303
#define EEID_INSERT_ACUTE                 4304
#define EEID_INSERT_CIRCUMFLEX            4305
#define EEID_INSERT_TILDE                 4306
#define EEID_INSERT_DIAERESIS             4307
#define EEID_INSERT_RING_ABOVE            4308
#define EEID_INSERT_LIGATURE              4309
#define EEID_INSERT_CEDILLA               4310
#define EEID_INSERT_STROKE                4311
#define EEID_INSERT_INVERTED_QUESTION     4312
#define EEID_INSERT_INVERTED_EXCLAMATION  4313
#define EEID_INSERT_COPYRIGHT             4314
#define EEID_INSERT_REGISTERED            4315
#define EEID_INSERT_TRADEMARK             4316
#define EEID_INSERT_EURO                  4317
#define EEID_WRAP_BY_PAPER                4318
#define EEID_SHOW_TOOLS_BAR               4319
#define EEID_BOOKMARK_TOGGLE              4320
#define EEID_BOOKMARK_NEXT                4321
#define EEID_BOOKMARK_PREV                4322
#define EEID_BOOKMARK_CLEAR               4323
#define EEID_CUSTOMIZE_TOOLS              4324
#define EEID_RETRIEVE_FIND_TEXT           4325
#define EEID_COPY_FILE_PATH               4326
#define EEID_COPY_FILE_DIR                4327
#define EEID_DUPLICATE_LINE               4328
#define EEID_LOAD_WORKSPACE               4329
#define EEID_SAVE_WORKSPACE               4330
#define EEID_SAVE_WORKSPACE_EXIT_ALL      4331
#define EEID_SAVE_WORKSPACE_QUIT_ALL      4332
#define EEID_LOGICAL_HOME_TEXT            4333
#define EEID_SHIFT_LOGICAL_HOME_TEXT      4334
#define EEID_WINDOW_SPLIT_HORZ_FIX        4335
#define EEID_WINDOW_SPLIT_VERT_FIX        4336
//#define EEID_SHOW_WINDOWS_BAR             4337
#define EEID_SHOW_BAR_TITLE               4340
#define EEID_LOCK_TOOLBARS                4341
#define EEID_WINDOW_COMBINE               4342
#define EEID_WINDOW_ALWAYS_TOP_ON         4343
#define EEID_WINDOW_ALWAYS_TOP_OFF        4344
#define EEID_MOVE_LAST_EDIT               4345
#define EEID_MACRO_SAVE                   4346
#define EEID_MACRO_SELECT                 4347
#define EEID_MACRO_EDIT                   4348
#define EEID_MACRO_SELECT_THIS            4349
#define EEID_CUSTOMIZE_MACRO              4350
#define EEID_BOOKMARK_NEXT_WITHIN         4351
#define EEID_BOOKMARK_PREV_WITHIN         4352
#define EEID_BOOKMARK_SET                 4353
#define EEID_BOOKMARK_RESET               4354
#define EEID_SPACE_TO_TAB                 4355
#define EEID_TABIFY                       4356
#define EEID_UNTABIFY                     4357
#define EEID_INDENT                       4358
#define EEID_UNINDENT                     4359
#define EEID_MACRO_HELP                   4360
#define EEID_MACRO_HELP_WORD              4361
#define EEID_REPLACE_IN_FILES             4362
#define EEID_QUIT_ALL                     4363
#define EEID_MACRO_RUN_OPTIONS            4364
#define EEID_INSERT_CARON                 4369
#define EEID_VIEW_MARKS                   4370
#define EEID_EDIT_COMMENT                 4371
#define EEID_EDIT_UNCOMMENT               4372
#define EEID_INCREASE_FONT_SIZE           4373
#define EEID_DECREASE_FONT_SIZE           4374
#define EEID_FIND_NEXT_UNICODE            4375
#define EEID_FIND_PREV_UNICODE            4376
#define EEID_ERASE_UNICODE_HILITE         4377
#define EEID_JOIN_LINES                   4378
#define EEID_SPLIT_LINES                  4379
#define EEID_IMPORT_EXPORT                4380
#define EEID_CAPITALIZE                   4381
#define EEID_WINDOW_MOVE_NEXT             4382
#define EEID_WINDOW_MOVE_PREV             4383
#define EEID_CLOSE_ALL_OTHERS             4384
#define EEID_WINDOW_SPLIT_HORZ_TOGGLE     4385
#define EEID_WINDOW_SPLIT_VERT_TOGGLE     4386
#define EEID_GROUP_CLOSE_ALL              4387
#define EEID_GROUP_CLOSE_OTHERS           4388
#define EEID_GROUP_CLOSE_LEFT             4389
#define EEID_GROUP_CLOSE_RIGHT            4390
#define EEID_NEW_GROUP                    4391
#define EEID_NEW_GROUP_MINIMIZE           4392
#define EEID_NEW_GROUP_CASCADE            4393
#define EEID_NEW_GROUP_HORZ               4394
#define EEID_NEW_GROUP_VERT               4395
#define EEID_MOVE_PREV_GROUP              4396
#define EEID_MOVE_NEXT_GROUP              4397
#define EEID_SORT_FILE_NAME               4398
#define EEID_SORT_TYPE                    4399
#define EEID_SORT_MODIFIED                4400
#define EEID_SORT_ZORDER                  4401
#define EEID_SORT_ASCENDING               4402
#define EEID_SORT_DESCENDING              4403
#define EEID_AUTO_SORT                    4404
#define EEID_RESTORE_POS                  4406
#define EEID_WINDOW_COMBINE_ON            4407
#define EEID_WINDOW_COMBINE_OFF           4408
#define EEID_ACTIVE_PANE                  4409
#define EEID_OUTLINE_COLLAPSE_ALL         4410
#define EEID_OUTLINE_EXPAND_ALL           4411
#define EEID_OUTLINE_TOGGLE_LINE          4412
#define EEID_OUTLINE_COLLAPSE_LINE        4413
#define EEID_OUTLINE_EXPAND_LINE          4414
#define EEID_OUTLINE_NEXT_NODE            4415
#define EEID_OUTLINE_PREV_NODE            4416
#define EEID_SHIFT_NEXT_NODE              4417
#define EEID_SHIFT_PREV_NODE              4418
#define EEID_RESTORE_DELETED              4419
#define EEID_VIEW_OUTPUT                  4420
#define EEID_SHOW_MACROS_BAR              4421
#define EEID_REFRESH_TOOLBARS             4422
#define EEID_RECORD_MOUSE                 4423
#define EEID_RECORD_NO_MOUSE              4424
#define EEID_FOCUS_LEFT_BAR               4425
#define EEID_FOCUS_TOP_BAR                4426
#define EEID_FOCUS_RIGHT_BAR              4427
#define EEID_FOCUS_BOTTOM_BAR             4428
#define EEID_USER_MENU1                   4429
#define EEID_USER_MENU2                   4430
#define EEID_USER_MENU3                   4431
#define EEID_USER_MENU4                   4432
#define EEID_USER_MENU5                   4433
#define EEID_USER_MENU6                   4434
#define EEID_USER_MENU7                   4435
#define EEID_USER_MENU8                   4436
#define EEID_SELECT_LOGICAL_LINE          4437
#define EEID_FILE_RELOAD_BINARY           4438
#define EEID_FILE_RELOAD_HEX              4439
#define EEID_FILE_SAVE_BINARY             4440
#define EEID_FILE_SAVE_HEX                4441
#define EEID_JUMP_NEXT                    4442
#define EEID_JUMP_PREV                    4443
#define EEID_EDIT_CUT_SEL                 4444
#define EEID_EDIT_COPY_SEL                4445
#define EEID_RETRIEVE_REPLACE_TEXT        4446
#define EEID_REPLACE_NEXT                 4447
#define EEID_VIEW_FUNCTION_BAR            4448
#define EEID_LARGE_FILE_BAR               4449
#define EEID_ERASE_WORKSPACE              4450
#define EEID_TERMINATE_TOOL               4451
#define EEID_OUTPUT_CLEAR                 4452
#define EEID_FULL_SCREEN                  4453
#define EEID_PASTE_HISTORY                4454
#define EEID_CUSTOMIZE_JUMP_LIST          4455
#define EEID_NARROWING_TOGGLE             4456
#define EEID_NARROWING_ON                 4457
#define EEID_NARROWING_OFF                4458
#define EEID_MODE_CSV                     4459
#define EEID_ADJUST_COLUMN                4460
#define EEID_SELECT_COLUMN                4461
#define EEID_ACTIVATE_OR_NEW			  4462
#define EEID_MODE_TSV                     4471
#define EEID_MODE_NORMAL                  4472
#define EEID_VERTICAL_MODE                4473
#define EEID_WINDOW_SCROLL_LEFT           4474
#define EEID_WINDOW_SCROLL_RIGHT          4475
#define EEID_MODE_DSV                     4476
#define EEID_SORT_TEXT_A                  4477
#define EEID_SORT_TEXT_D                  4478
#define EEID_SORT_NUM_A                   4479
#define EEID_SORT_NUM_D                   4480
#define EEID_CHECK_UPDATES                4481
#define EEID_CUSTOMIZE_UPDATE_CHECKER     4482

// v10 commands
#define EEID_SAVE_UTF16LE_SIGN            4483
#define EEID_SAVE_UTF16LE_NOSIGN          4484
#define EEID_SAVE_UTF16BE_SIGN            4485
#define EEID_SAVE_UTF16BE_NOSIGN          4486
#define EEID_SAVE_UTF8_SIGN               4487
#define EEID_SAVE_UTF8_NOSIGN             4488
#define EEID_SELECT_CELL                  4489
#define EEID_NEXT_CELL                    4490
#define EEID_PREV_CELL                    4491
#define EEID_COMPARE_DIRECT               4492
#define EEID_COMPARE_OPTIONS              4493
#define EEID_COMPARE_RESCAN               4494
#define EEID_SYNC_SCROLL_DIRECT           4495
#define EEID_SYNC_SCROLL_OPTIONS          4496
#define EEID_COMPARE_RESET                4497
#define EEID_IGNORE_LEAD_SPACE            4498
#define EEID_IGNORE_TRAIL_SPACE           4499
#define EEID_IGNORE_EMBEDDED_SPACE        4500
#define EEID_IGNORE_CASES                 4501
#define EEID_IGNORE_RETURNS               4502
#define EEID_IGNORE_COMMENT               4503
#define EEID_IGNORE_ENCODING              4504
#define EEID_SYNC_VERT                    4505
#define EEID_SYNC_HORZ                    4506
#define EEID_SYNC_CARET                   4507
#define EEID_COMPARE_SAVE_OPTIONS         4508
#define EEID_COMPARE_PREV                 4509
#define EEID_COMPARE_NEXT                 4510
#define EEID_SPELL_ADD_DIC                4511
#define EEID_SPELL_TOGGLE                 4512
#define EEID_SPELL_QUOTE                  4513
#define EEID_SPELL_SINGLE_QUOTES          4514
#define EEID_SPELL_DOUBLE_QUOTES          4515
#define EEID_SPELL_COMMENTS               4516
#define EEID_SPELL_SCRIPT                 4517
#define EEID_SPELL_TAGS                   4518
#define EEID_SPELL_HILITE                 4519
#define EEID_SPELL_HYPERLINK              4520
#define EEID_SPELL_REST                   4521
#define EEID_SPELL_ALL                    4522
#define EEID_SYNC_HORZ_SCROLL_SPLIT       4523
#define EEID_SYNC_VERT_SCROLL_SPLIT       4524
#define EEID_ENCODE_HTML_CHAR_REF         4525
#define EEID_DECODE_HTML_CHAR_REF         4526
#define EEID_ENCODE_UCN                   4527
#define EEID_DECODE_UCN                   4528
#define EEID_VIEW_LINE_NUMBERS            4530
#define EEID_VIEW_RULER                   4531
#define EEID_VIEW_RETURN                  4532
#define EEID_VIEW_EOF                     4533
#define EEID_VIEW_TAB                     4534
#define EEID_VIEW_SPACE                   4535
#define EEID_VIEW_WIDE_SPACE              4536
#define EEID_VIEW_CR_LF_SEPARATE          4537
#define EEID_VIEW_CONTROL                 4538
#define EEID_VIEW_INDENT_GUIDES           4539
#define EEID_TOGGLE_AUTO_INDENT           4540
#define EEID_TOGGLE_SPACES_TAB            4541
#define EEID_TOGGLE_WRAP_INDENT           4542
#define EEID_RESTORE_COMBINED_POS         4543
#define EEID_NEXT_ZORDER_DOC              4544
#define EEID_PREV_ZORDER_DOC              4545
#define EEID_SYNC_RESTORE_POS             4546
#define EEID_RIGHT_DOC                    4547
#define EEID_LEFT_DOC                     4548
#define EEID_TOGGLE_OUTPUT_SHORTCUTS      4549
#define EEID_TAB_COLUMN_POPUP             4550
#define EEID_INDENT_COLUMN_POPUP          4551
#define EEID_NEXT_PANE_OR_BAR             4552
#define EEID_PREV_PANE_OR_BAR             4553
#define EEID_SPELL_NEXT                   4554
#define EEID_SPELL_PREV                   4555
#define EEID_COMPARE_PREV_LINE            4556
#define EEID_COMPARE_NEXT_LINE            4557
#define EEID_NUMBERING                    4558

#define EEID_FILE_MRU_FILE1               4609  // to EEID_FILE_MRU_FILE1 + 63
#define EEID_MRU_FONT1                    4736  // to EEID_MRU_FONT1 + 63
#define EEID_FILE_MRU_INSERT1             4864  // to EEID_FILE_MRU_INSER1 + 63
#define EEID_FILE_MRU_FOLDER1             4992  // to EEID_FILE_MRU_FOLDER1 + 63
#define EEID_SELECT_CONFIG                5120  // to EEID_SELECT_CONFIG + 255
#define EEID_WINDOW_MENU                  5376  // to EEID_WINDOW_MENU + 255
#define EEID_PLUG_IN1                     5632  // to EEID_PLUG_IN1 + 255
#define EEID_FILE_RELOAD_DEFINED          6656  // to EEID_FILE_RELOAD_DEFINED + 255
#define EEID_FILE_NEW_CONFIG              7168  // to EEID_FILE_NEW_CONFIG + 255
#define EEID_FILE_SAVE_DEFINED            7680  // to EEID_FILE_SAVE_DEFINED + 255
#define EEID_TOOL1                        8192  // to EEID_TOOL1 + 255
#define EEID_MACRO1                       9216  // to EEID_MACRO1 + 1023
#define EEID_CUSTOM_REBAR1                21504 // to EEID_CUSTOM_REBAR1 + 255
#define EEID_SPELL_SUGGEST				  8768  // to EEID_SPELL_SUGGEST + 31
#define EEID_SELECT_DICTIONARY			  22016 // to EEID_SELECT_DICTIONARY + 255

#define EEID_CHARSET_DEFAULT              8704
#define EEID_CHARSET_ARABIC               8705
#define EEID_CHARSET_BALTIC               8706
#define EEID_CHARSET_CENTRAL_EUROPE       8707
#define EEID_CHARSET_CHINESE_SIMPLIFIED   8708
#define EEID_CHARSET_CHINESE_TRADITIONAL  8709
#define EEID_CHARSET_CYRILLIC             8710
#define EEID_CHARSET_GREEK                8711
#define EEID_CHARSET_HEBREW               8712
#define EEID_CHARSET_JAPANESE             8713
#define EEID_CHARSET_KOREAN               8714
#define EEID_CHARSET_THAI                 8715
#define EEID_CHARSET_TURKISH              8716
#define EEID_CHARSET_VIETNAMESE           8717
#define EEID_CHARSET_WESTERN_EUROPE       8718
#define EEID_CHARSET_OEM                  8719

#define EEID_OUTLINE_LEVEL_2              8832
#define EEID_OUTLINE_LEVEL_3              8833
#define EEID_OUTLINE_LEVEL_4              8834
#define EEID_OUTLINE_LEVEL_5              8835
#define EEID_OUTLINE_LEVEL_6              8836
#define EEID_OUTLINE_LEVEL_7              8837
#define EEID_OUTLINE_LEVEL_8              8838
#define EEID_OUTLINE_LEVEL_9              8839
#define EEID_OUTLINE_LEVEL_10             8840
#define EEID_OUTLINE_LEVEL_11             8841
#define EEID_OUTLINE_LEVEL_12             8842
#define EEID_OUTLINE_LEVEL_13             8843
#define EEID_OUTLINE_LEVEL_14             8844
#define EEID_OUTLINE_LEVEL_15             8845
#define EEID_OUTLINE_LEVEL_16             8846

#define EEID_PROPERTY_MARGIN              8960
#define EEID_PROPERTY_SCROLL              8961
#define EEID_PROPERTY_FILE                8962
#define EEID_PROPERTY_BACKUP              8963
#define EEID_PROPERTY_AUTO_SAVE           8964
#define EEID_PROPERTY_ASSOCIATE           8965
#define EEID_PROPERTY_KINSOKU             8966
#define EEID_PROPERTY_FACE                8967
#define EEID_PROPERTY_HILITE              8968
#define EEID_PROPERTY_COMMENT             8969
#define EEID_PROPERTY_SHOW                8970
#define EEID_PROPERTY_MARK                8971
#define EEID_PROPERTY_PRINT               8972
#define EEID_PROPERTY_LINK                8973
#define EEID_PROPERTY_KEYBOARD            8974
#define EEID_PROPERTY_SPELL               8975

#define EEID_CUSTOMIZE_FILE               9040
#define EEID_CUSTOMIZE_SEARCH             9041
#define EEID_CUSTOMIZE_HISTORY            9042
#define EEID_CUSTOMIZE_WINDOW             9043
#define EEID_CUSTOMIZE_TAB                9044
#define EEID_CUSTOMIZE_STATUS             9045
#define EEID_CUSTOMIZE_ADVANCED           9046
#define EEID_CUSTOMIZE_LANG               9047
#define EEID_CUSTOMIZE_SHORTCUT           9048
#define EEID_CUSTOMIZE_EDIT               9049
#define EEID_CUSTOMIZE_MARKS              9050
#define EEID_CUSTOMIZE_VIEW               9051
#define EEID_CUSTOMIZE_MOUSE              9052
#define EEID_CUSTOMIZE_SORT               9053

