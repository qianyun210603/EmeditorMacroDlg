#pragma once


// CDemoDlg dialog

class CDemoDlg : public CDialog
{
	DECLARE_DYNAMIC(CDemoDlg)

public:
	CDemoDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CDemoDlg();

// Dialog Data
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
    CString m_sEdit;
    BOOL m_bChk;
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
