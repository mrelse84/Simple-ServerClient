
// Simple-ServerClientDlg.h : 헤더 파일
//

#pragma once
#include "afxsock.h"


// CSimpleServerClientDlg 대화 상자
class CSimpleServerClientDlg : public CDialogEx, public CSocket
{
// 생성입니다.
public:
	CSimpleServerClientDlg(CWnd* pParent = NULL);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
	enum { IDD = IDD_SIMPLESERVERCLIENT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	int m_nMode;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	virtual void OnAccept(int nErrorCode);
	virtual void OnConnect(int nErrorCode);
	virtual void OnReceive(int nErrorCode);
	CString m_strSendData;
	virtual void OnSend(int nErrorCode);
	afx_msg void OnBnClickedOk();
};
