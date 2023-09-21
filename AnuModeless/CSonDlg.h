﻿#pragma once
#include "afxdialogex.h"


// CSonDlg 대화 상자

class CSonDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CSonDlg)

public:
	CSonDlg(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CSonDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLG_MODELESS };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CString m_Str;
	afx_msg void OnClose();
	virtual void PostNcDestroy();
};
