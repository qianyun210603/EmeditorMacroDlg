// DemoDlg.cpp : implementation file
//

#include "stdafx.h"
#include "EmeditorMacroDlg.h"
#include "DemoDlg.h"


// CDemoDlg dialog

IMPLEMENT_DYNAMIC(CDemoDlg, CDialog)

CDemoDlg::CDemoDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CDemoDlg::IDD, pParent)
    , m_sEdit(_T(""))
    , m_bChk(FALSE)
{

}

CDemoDlg::~CDemoDlg()
{
}

void CDemoDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);
    DDX_Text(pDX, IDC_EDIT1, m_sEdit);
    DDV_MaxChars(pDX, m_sEdit, 50);
    DDX_Check(pDX, IDC_CHECK1, m_bChk);
}


BEGIN_MESSAGE_MAP(CDemoDlg, CDialog)
	ON_BN_CLICKED(IDOK, &CDemoDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &CDemoDlg::OnBnClickedCancel)
END_MESSAGE_MAP()


// CDemoDlg message handlers


void CDemoDlg::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	CDialog::OnOK();
}


void CDemoDlg::OnBnClickedCancel()
{
	// TODO: Add your control notification handler code here
	CDialog::OnCancel();
}
