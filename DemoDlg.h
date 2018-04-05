#pragma once

#include <vector>
#include <set>
// CDemoDlg dialog

class CDemoDlg : public CDialog
{
	DECLARE_DYNAMIC(CDemoDlg)

public:
	CDemoDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CDemoDlg();

// Dialog Data
	enum { IDD = IDD_MAIN_DIALOG };
	virtual BOOL OnInitDialog();
	virtual void OnDestroy();
	BOOL getInputFromGUI(LPWSTR buffer, UINT bufferSize);

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

	const int labelLeft = 7;
	const int widgetLeft = 86;
	const int topBaseLine = 28;
	const int widgetWidth = 342;
	const int labelWidth = 80;
	const int height = 15;
	const int widgetSep = 21; // from top edge to top edge
	const int comboDropListHeight = 90;

	int addOneTitleLevel();

	BOOL m_bChkNonLineHead;
	BOOL m_bChkSepIncluded;
	std::vector<CStatic*> m_pLabels;
	std::vector<CComboBox*> m_pWidgets;
	std::wstring m_defaultRegexFile;
	std::set<std::wstring> m_regexCandidates;
public:
	
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
