// Settings.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "DrawingBoard.h"
#include "Settings.h"
#include "afxdialogex.h"
#include "Settings.h"
#include "DrawingBoardView.h"
// Settings �Ի���

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


// Settings ��Ϣ�������


void Settings::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	GetDlgItemText(IDC_EDIT1, str1);

}


void Settings::OnEnChangeEdit3()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	GetDlgItemText(IDC_EDIT3, str3);
}


void Settings::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	GetDlgItemText(IDC_EDIT2, str2);

}


void Settings::OnEnChangeEdit4()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	GetDlgItemText(IDC_EDIT4, str4);
}
