
// Simple-ServerClient.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CSimpleServerClientApp:
// �� Ŭ������ ������ ���ؼ��� Simple-ServerClient.cpp�� �����Ͻʽÿ�.
//

class CSimpleServerClientApp : public CWinApp
{
public:
	CSimpleServerClientApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CSimpleServerClientApp theApp;