// Settings.cpp : 实现文件
//

#include "stdafx.h"
#include "DrawingBoard.h"
#include "Settings.h"
#include "afxdialogex.h"
#include "Settings.h"
#include "DrawingBoardView.h"
// Settings 对话框

IMPLEMENT_DYNAMIC(Settings, CDialogEx)

Settings::Settings(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
{

}

Settings::~Settings()
{
}

void Settings::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, NUM);
}


BEGIN_MESSAGE_MAP(Settings, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &Settings::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT3, &Settings::OnEnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT2, &Settings::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT4, &Settings::OnEnChangeEdit4)
END_MESSAGE_MAP()


// Settings 消息处理程序


void Settings::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
	GetDlgItemText(IDC_EDIT1, str1);

}


void Settings::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
	GetDlgItemText(IDC_EDIT3, str3);
}


void Settings::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
	GetDlgItemText(IDC_EDIT2, str2);

}


void Settings::OnEnChangeEdit4()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
	GetDlgItemText(IDC_EDIT4, str4);
}
