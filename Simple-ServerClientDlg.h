
// Simple-ServerClientDlg.h : ��� ����
//

#pragma once
#include "afxsock.h"


// CSimpleServerClientDlg ��ȭ ����
class CSimpleServerClientDlg : public CDialogEx, public CSocket
{
// �����Դϴ�.
public:
	CSimpleServerClientDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_SIMPLESERVERCLIENT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
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
