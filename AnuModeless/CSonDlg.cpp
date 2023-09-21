// CSonDlg.cpp: 구현 파일
//

#include "pch.h"
#include "AnuModeless.h"
#include "afxdialogex.h"
#include "CSonDlg.h"


// CSonDlg 대화 상자

IMPLEMENT_DYNAMIC(CSonDlg, CDialogEx)

CSonDlg::CSonDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DLG_MODELESS, pParent)
	, m_Str(_T(""))
{

}

CSonDlg::~CSonDlg()
{
}

void CSonDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_Str);
}


BEGIN_MESSAGE_MAP(CSonDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CSonDlg::OnBnClickedButton1)
//	ON_WM_CLOSE()
ON_WM_CLOSE()
END_MESSAGE_MAP()


// CSonDlg 메시지 처리기

#include "AnuModelessDlg.h"
void CSonDlg::OnBnClickedButton1()
{
	CAnuModelessDlg* p = (CAnuModelessDlg*)GetParent();
	UpdateData(true);
	p->m_List.AddString(m_Str);
}


void CSonDlg::OnClose()
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	DestroyWindow();

	CDialogEx::OnClose();
}


void CSonDlg::PostNcDestroy()
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.

	CDialogEx::PostNcDestroy();
}
