// DemoDlg.cpp : implementation file
//

#include "stdafx.h"
#include "EmeditorMacroDlg.h"
#include "DemoDlg.h"
#include "util.h"
#include <fstream>
#include <iterator>
#include <string>
#include <locale>
// CDemoDlg dialog

IMPLEMENT_DYNAMIC(CDemoDlg, CDialog)

CDemoDlg::CDemoDlg(LPWSTR buffer, UINT bufferFlag, CWnd* pParent /*=NULL*/)
	: CDialog(CDemoDlg::IDD, pParent)
	, m_buffer(buffer)
	, m_bufferFlag(bufferFlag)
	, m_bufferFlagSizeShift(16)
{
	WCHAR szFileName[MAX_PATH];
	GetModuleFile(szFileName);
	GetModuleFilePath(szFileName, m_defaultRegexFile);
	wcscat_s(m_defaultRegexFile, L".txt");
	std::wifstream configFile(m_defaultRegexFile);
	configFile.imbue(std::locale("chs"));
	if (!configFile.fail())
		copy(std::istream_iterator<std::wstring, wchar_t>(configFile),
			std::istream_iterator<std::wstring, wchar_t>(),
			std::inserter(m_regexCandidates, m_regexCandidates.end()));
	configFile.close();
}

CDemoDlg::~CDemoDlg()
{
	for (auto pLabel : m_pLabels)
		delete pLabel;
	for (auto pWidget : m_pWidgets)
		delete pWidget;
}

BOOL CDemoDlg::OnInitDialog()
{
	if (!CDialog::OnInitDialog())
		return FALSE;
	addOneTitleLevel();
	std::wstring preComment(m_buffer, m_bufferFlag & PRECOMMENT_MASK);
	GetDlgItem(IDC_PRECOMMENT)->SetWindowTextW(preComment.c_str());
	if ((m_bufferFlag & ADD_TITLE_LEVEL_MASK) == 0)
		GetDlgItem(IDC_ADD_TITLE_LEVEL)->ShowWindow(SW_HIDE);
	m_bufferFlag >>= m_bufferFlagSizeShift;
	m_bufferFlagSizeShift = 0;
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
	ON_BN_CLICKED(IDC_ADD_TITLE_LEVEL, &CDemoDlg::OnBnClickedAddTitleLevel)
	ON_BN_CLICKED(IDC_ADD_TO_DEFAULT, &CDemoDlg::OnBnClickedAddToDefault)
END_MESSAGE_MAP()


// CDemoDlg message handlers


void CDemoDlg::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	getInputFromGUI();
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
	{
		std::wostringstream attacher;
		attacher << label.substr(0, label.length() - 1) << L' ' << numWidget + 1 << L':';
		label = attacher.str();
	}

	m_pLabels.back()->Create(label.c_str(), WS_VISIBLE | SS_CENTERIMAGE, labelRect, this, IDC_MYWIDGETLABELS + numWidget);
	//CFont* font = GetDlgItem(IDC_INCLUDE_INTEXT)->GetFont();
	//m_pLabels.back()->SetFont(font);
	CRect widgetRect(widgetLeft, top, widgetLeft + widgetWidth, top + height + comboDropListHeight);
	MapDialogRect(widgetRect);
	m_pWidgets.push_back(new CComboBox);
	m_pWidgets.back()->Create(WS_VISIBLE | CBS_AUTOHSCROLL | CBS_DROPDOWN, widgetRect, this, IDC_MYWIDGETS + numWidget);
	int longestLength = 0, longest = 0;
	for (const auto& regex : m_regexCandidates)
	{
		if (regex.length() > longestLength)
		{
			longestLength = static_cast<int>(regex.length());
			longest = m_pWidgets.back()->GetCount();
		}
		m_pWidgets.back()->AddString(regex.c_str());
	}

	m_pWidgets.back()->SetCurSel(longest);
	return numWidget;
}

BOOL CDemoDlg::getInputFromGUI()
{
	ASSERT(m_pLabels.size() == m_pWidgets.size());
	LPWSTR remainbuffer = m_buffer;
	for (auto pWidget : m_pWidgets)
	{
		int currlen = pWidget->GetWindowTextLengthW();
		if (m_buffer + m_bufferFlag < remainbuffer + currlen + 1)
			return FALSE;
		pWidget->GetWindowTextW(remainbuffer, currlen + 1);
		remainbuffer += currlen;
		*(remainbuffer++) = L'\n';
	}
	m_bufferFlag = static_cast<UINT>(remainbuffer - m_buffer - 1);
	m_bufferFlagSizeShift = 2;
	m_bufferFlag <<= m_bufferFlagSizeShift;
	if (IsDlgButtonChecked(IDC_MATCH_INNER_TEXT))
		m_bufferFlag |= INCLUDE_IN_TEXT;
	if (IsDlgButtonChecked(IDC_REGEX_INC_TITEL_SEP))
		m_bufferFlag |= SEP_IN_TITLE_REGEX;
	return TRUE;
}

int CDemoDlg::getBufferFlag() const
{
	return m_bufferFlag;
}

void CDemoDlg::OnBnClickedAddTitleLevel()
{
	CRect rect;
	GetWindowRect(&rect);
	long baseunitY = HIWORD(GetDialogBaseUnits());
	int increment = MulDiv(widgetSep, baseunitY, 8);
	rect.SetRect(rect.left, rect.top - increment / 2, rect.right, rect.bottom + increment / 2);
	MoveWindow(&rect);
	if (this->addOneTitleLevel())
	{
		m_pLabels[0]->SetWindowTextW(L"Title Regex 1:");
		m_pLabels[0]->UpdateData();
	}
}

void CDemoDlg::OnBnClickedAddToDefault()
{
	for (auto pWidget : m_pWidgets)
	{
		CString buffer;
		pWidget->GetWindowTextW(buffer);
		m_regexCandidates.insert(buffer.GetString());
	}

	std::wofstream configFile(m_defaultRegexFile);
	configFile.imbue(std::locale("chs"));
	if (!configFile.fail())
		copy(m_regexCandidates.begin(),
			m_regexCandidates.end(),
			std::ostream_iterator<std::wstring, wchar_t>(configFile, L"\n"));
	else
		MessageBox(L"Cannot Save regexes to file!", L"Error");
	configFile.close();
}
