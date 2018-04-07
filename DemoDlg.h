#pragma once

#include <vector>
#include <set>
// CDemoDlg dialog

class CDemoDlg : public CDialog
{
	DECLARE_DYNAMIC(CDemoDlg)

public:
	CDemoDlg(LPWSTR buffer, UINT bufferFlag, CWnd* pParent = NULL);   // standard constructor
	virtual ~CDemoDlg();

// Dialog Data
	enum { IDD = IDD_MAIN_DIALOG };
	virtual BOOL OnInitDialog();
	virtual void OnDestroy();
	int getBufferFlag() const;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

	const int labelLeft = 7;
	const int widgetLeft = 86;
	const int topBaseLine = 43;
	const int widgetWidth = 407;
	const int labelWidth = 80;
	const int height = 15;
	const int widgetSep = 18; // from top edge to top edge
	const int comboDropListHeight = 90;

	int addOneTitleLevel();
	BOOL getInputFromGUI();

	BOOL m_bChkNonLineHead;
	BOOL m_bChkSepIncluded;
	std::vector<CStatic*> m_pLabels;
	std::vector<CComboBox*> m_pWidgets;
	WCHAR m_defaultRegexFile[MAX_PATH];
	std::set<std::wstring> m_regexCandidates;
	const LPWSTR m_buffer;
	UINT m_bufferFlag;
	UINT m_bufferFlagSizeShift;

public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedAddTitleLevel();
	afx_msg void OnBnClickedAddToDefault();
};

