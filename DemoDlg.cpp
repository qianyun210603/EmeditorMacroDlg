// DemoDlg.cpp : implementation file
//

#include "stdafx.h"
#include "EmeditorMacroDlg.h"
#include "DemoDlg.h"
#include "util.h"

// CDemoDlg dialog

IMPLEMENT_DYNAMIC(CDemoDlg, CDialog)

CDemoDlg::CDemoDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CDemoDlg::IDD, pParent)
{

}

CDemoDlg::~CDemoDlg()
{
}

BOOL CDemoDlg::OnInitDialog()
{
	if (!CDialog::OnInitDialog())
		return FALSE;
	addOneTitleLevel();
	return TRUE;
}

void CDemoDlg::OnDestroy()
{
	for (auto pLabel : m_pLabels)
		pLabel->DestroyWindow();
	for (auto pWidget : m_pWidgets)
		pWidget->DestroyWindow();
	CDialog::OnDestroy();
}

void CDemoDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);
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

int CDemoDlg::addOneTitleLevel()
{
	ASSERT(m_pLabels.size() == m_pWidgets.size());
	UINT numWidget = static_cast<UINT>(m_pLabels.size());
	ASSERT(numWidget < 1000);
	UINT top = topBaseLine + numWidget * widgetSep;
	CRect labelRect(labelLeft, top, labelLeft + labelWidth, top + height);
	MapDialogRect(labelRect);
	m_pLabels.push_back(new CStatic());
	std::wstring label = L"Title Regex:";
	if (numWidget > 0)
		label = stringAttacher(label, numWidget + 1);

	m_pLabels.back()->Create(label.c_str(), WS_VISIBLE | SS_CENTERIMAGE, labelRect, this, IDC_MYWIDGETLABELS + numWidget);
	//CFont* font = GetDlgItem(IDC_INCLUDE_INTEXT)->GetFont();
	//m_pLabels.back()->SetFont(font);
	CRect widgetRect(widgetLeft, top, widgetLeft + widgetWidth, top + height + comboDropListHeight);
	MapDialogRect(widgetRect);
	m_pWidgets.push_back(new CComboBox);
	m_pWidgets.back()->Create(WS_VISIBLE | CBS_AUTOHSCROLL | CBS_DROPDOWN, widgetRect, this, IDC_MYWIDGETS + numWidget);
	for (const auto& regex : m_regexCandidates)
		m_pWidgets.back()->AddString(regex.c_str());
	m_pWidgets.back()->SetCurSel(2);
	return numWidget;
}

BOOL CDemoDlg::getInputFromGUI(LPWSTR buffer, UINT bufferSize)
{
	ASSERT(m_pLabels.size() == m_pWidgets.size());
	UINT numWidget = static_cast<UINT>(m_pLabels.size());
	numWidget <<= 2;
	if (IsDlgButtonChecked(IDC_MATCH_INNER_TEXT))
		numWidget |= INCLUDE_IN_TEXT;
	if (IsDlgButtonChecked(IDC_REGEX_INC_TITEL_SEP))
		numWidget |= SEP_IN_TITLE_REGEX;

	ASSERT(numWidget < (0b1 << (sizeof(wchar_t) - 2)));
	buffer[0] = numWidget;
	LPWSTR remainbuffer = buffer + 1;
	for (auto pWidget : m_pWidgets)
	{
		int currlen = pWidget->GetWindowTextLengthW();
		if (buffer + bufferSize < remainbuffer + currlen + 1)
			return FALSE;
		pWidget->GetWindowTextW(remainbuffer, currlen);
		remainbuffer += currlen;
		*(remainbuffer++) = L'\n';
	}
	*(remainbuffer++) = L'\0';
	return TRUE;
}