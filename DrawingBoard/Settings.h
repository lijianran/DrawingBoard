#pragma once
#include "afxwin.h"


// Settings 对话框

class Settings : public CDialogEx
{
	DECLARE_DYNAMIC(Settings)

public:
	Settings(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Settings();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit4();
	CEdit NUM;
	CString str1, str2, str3, str4;
};
