
// DrawingBoardView.cpp : CDrawingBoardView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "DrawingBoard.h"
#endif

#include "DrawingBoardDoc.h"
#include "DrawingBoardView.h"
#include "ReDraw.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDrawingBoardView

IMPLEMENT_DYNCREATE(CDrawingBoardView, CView)

BEGIN_MESSAGE_MAP(CDrawingBoardView, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_DRAWCIRCLE, &CDrawingBoardView::OnDrawcircle)
//	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
	ON_COMMAND(ID_DOT, &CDrawingBoardView::OnDot)
	ON_COMMAND(ID_LINE, &CDrawingBoardView::OnLine)
	ON_COMMAND(ID_RECTANGLE, &CDrawingBoardView::OnRectangle)
	ON_COMMAND(ID_ELLIPSE, &CDrawingBoardView::OnEllipse)
	ON_COMMAND(ID_SHANXING, &CDrawingBoardView::OnShanxing)
	ON_COMMAND(ID_LIANXUXIAN, &CDrawingBoardView::OnLianxuxian)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_COMMAND(ID_SimpleBrush, &CDrawingBoardView::OnSimplebrush)
	ON_COMMAND(ID_EREASE, &CDrawingBoardView::OnErease)
	ON_COMMAND(ID_Bitmap, &CDrawingBoardView::OnBitmap)
	ON_COMMAND(ID_Xiangpijin, &CDrawingBoardView::OnXiangpijin)
	ON_COMMAND(ID_COLOR, &CDrawingBoardView::OnColor)
//	ON_WM_PAINT()
	ON_COMMAND(ID_COLOR1, &CDrawingBoardView::OnColor1)
END_MESSAGE_MAP()


// CDrawingBoardView 构造/析构

CDrawingBoardView::CDrawingBoardView()
{
	// TODO: 在此处添加构造代码
	m_nDrawType = 0;
	m_ptOrigin = 0;
	m_ptEnd = 0;
	m_bDraw = FALSE;
}

CDrawingBoardView::~CDrawingBoardView()
{
}

BOOL CDrawingBoardView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CDrawingBoardView 绘制

void CDrawingBoardView::OnDraw(CDC* pDC)
{
	CDrawingBoardDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC dc(this);
	CPen pen(PS_SOLID, m_clr, color);
	CPen *oldpen = dc.SelectObject(&pen);
	for (int i = 0; i < list.onepoint.size(); i++)
	{
		dc.SetPixel(list.onepoint[i], color);
	}
	for (int i = 0; i < list.line.size(); i++)
	{
		dc.MoveTo(list.line[i].begin);
		dc.LineTo(list.line[i].end);
	}
	for (int i = 0; i < list.Rectangle.size(); i++)
	{
		dc.Rectangle(CRect(list.Rectangle[i].begin, list.Rectangle[i].end));
	}
	for (int i = 0; i < list.Ellipse.size(); i++)
	{
		dc.Ellipse(CRect(list.Ellipse[i].begin, list.Ellipse[i].end));
	}
	for (int i = 0; i < list.xiangpijing.size(); i++)
	{
		CPen pen(PS_SOLID, 100, RGB(255, 255, 255));
		dc.MoveTo(list.xiangpica[i].begin);
		dc.LineTo(list.xiangpica[i].end);
	}
	dc.SelectObject(oldpen);
	// TODO: 在此处为本机数据添加绘制代码
}


// CDrawingBoardView 打印

BOOL CDrawingBoardView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CDrawingBoardView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CDrawingBoardView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CDrawingBoardView 诊断

#ifdef _DEBUG
void CDrawingBoardView::AssertValid() const
{
	CView::AssertValid();
}

void CDrawingBoardView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDrawingBoardDoc* CDrawingBoardView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDrawingBoardDoc)));
	return (CDrawingBoardDoc*)m_pDocument;
}
#endif //_DEBUG


// CDrawingBoardView 消息处理程序


void CDrawingBoardView::OnDrawcircle()
{
	// TODO: 在此添加命令处理程序代码
}




void CDrawingBoardView::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnRButtonDown(nFlags, point);
}



void CDrawingBoardView::OnDot()
{
	// TODO: 在此添加命令处理程序代码
	m_nDrawType = 1;
}


void CDrawingBoardView::OnLine()
{
	// TODO: 在此添加命令处理程序代码
	m_nDrawType = 2;
}


void CDrawingBoardView::OnRectangle()
{
	// TODO: 在此添加命令处理程序代码
	m_nDrawType = 3;
}


void CDrawingBoardView::OnEllipse()
{
	// TODO: 在此添加命令处理程序代码
	m_nDrawType = 4;
}


void CDrawingBoardView::OnShanxing()
{
	// TODO: 在此添加命令处理程序代码
	m_nDrawType = 5;
}


void CDrawingBoardView::OnLianxuxian()
{
	// TODO: 在此添加命令处理程序代码
	m_nDrawType = 6;
}


void CDrawingBoardView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	m_bDraw = TRUE;
	m_ptOrigin = m_ptEnd = point;
	CView::OnLButtonDown(nFlags, point);
}


void CDrawingBoardView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	m_bDraw = FALSE;
	CClientDC dc(this);
	CPen *oldpen;
	CPen pen(PS_SOLID, m_clr, color);
	oldpen = dc.SelectObject(&pen);
	two a;
	switch (m_nDrawType)
	{
	case 1:
		dc.SetPixel(point, color);
		list.onepoint.push_back(point);
		break;
	case 2:
		oldpen = dc.SelectObject(&pen);
		dc.MoveTo(m_ptOrigin);
		dc.LineTo(point);
		dc.SelectObject(oldpen);
		a.begin = m_ptOrigin;
		a.end = point;
		list.line.push_back(a);
		break;
	case 3:
		oldpen = dc.SelectObject(&pen);
		dc.Rectangle(CRect(m_ptOrigin, point));
		dc.SelectObject(oldpen);
		a.begin = m_ptOrigin;
		a.end = point;
		list.Rectangle.push_back(a);
		break;
	case 4:
		oldpen = dc.SelectObject(&pen);
		dc.Ellipse(CRect(m_ptOrigin, point));
		dc.SelectObject(oldpen);
		a.begin = m_ptOrigin;
		a.end = point;
		list.Ellipse.push_back(a);
		break;
	}
	dc.SelectObject(oldpen);
	CView::OnLButtonUp(nFlags, point);
}


void CDrawingBoardView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	two a;
	if (m_nDrawType == 5)
	{
		CClientDC dc(this);
		CPen pen(PS_SOLID, 3, m_clr);
		CPen *pOldpen = dc.SelectObject(&pen);
		if (m_bDraw == TRUE)
		{
			dc.MoveTo(m_ptOrigin);
			dc.LineTo(point);
			a.begin = m_ptOrigin;
			a.end = point;
			list.Shanxing.push_back(a);
		}
		dc.SelectObject(pOldpen);
		CView::OnMouseMove(nFlags, point);
	}

	if (m_nDrawType == 6)
	{
		CClientDC dc(this);
		CPen pen(PS_SOLID, 10, m_clr);
		CPen *pOldpen = dc.SelectObject(&pen);
		if (m_bDraw == TRUE)
		{
			dc.MoveTo(m_ptOrigin);
			a.begin = m_ptOrigin;
			dc.LineTo(point);
			a.end = m_ptEnd;
			list.Lianxuxian.push_back(a);
			m_ptOrigin = point;
		}
		dc.SelectObject(pOldpen);
		CView::OnMouseMove(nFlags, point);
	}

	if (m_nDrawType == 7)
	{
		CBrush brush(color);
		CClientDC dc(this);
		CBrush *pOldpen = dc.SelectObject(&brush);
		if (m_bDraw == TRUE)
		{
			dc.MoveTo(m_ptOrigin);
			dc.FillRect(CRect(m_ptOrigin, point), &brush);
			a.begin = m_ptOrigin;
			a.end = m_ptEnd;
			list.huashua.push_back(a);
		}
		dc.SelectObject(pOldpen);
		CView::OnMouseMove(nFlags, point);
	}

	if (m_nDrawType == 8)
	{
		CBitmap bitmap;
		bitmap.LoadBitmap(IDB_BITMAP1);
		CBrush brush(&bitmap);
		CClientDC dc(this);
		if (m_bDraw == TRUE)
		{
			dc.MoveTo(m_ptOrigin);
			dc.FillRect(CRect(m_ptOrigin, point), &brush);
		}
		CView::OnMouseMove(nFlags, point);
	}

	if (m_nDrawType == 9) //橡皮筋
	{
		CClientDC dc(this);	
		CPen pen(PS_SOLID, 10, m_clr);		
		CPen *pOldpen = dc.SelectObject(&pen);		
		if (nFlags == MK_LBUTTON)
		{	
			dc.SetROP2(R2_NOT);
			dc.MoveTo(m_ptOrigin);
			dc.LineTo(m_ptEnd);	
			a.begin = m_ptOrigin;
			a.end = m_ptEnd;
			list.xiangpijing.push_back(a);
			m_ptEnd = point;
			dc.MoveTo(m_ptOrigin);
			dc.LineTo(m_ptEnd);	
		}
		dc.SelectObject(pOldpen);
		CView::OnMouseMove(nFlags, point);
	}

	if (m_nDrawType == 10) //橡皮擦
	{
		CClientDC dc(this);
		CPen pen(PS_SOLID, 100, RGB(255,255,255));
		CPen *pOldpen = dc.SelectObject(&pen);
		if (m_bDraw == TRUE)
		{
			dc.MoveTo(m_ptOrigin);
			dc.LineTo(point);
			a.begin = m_ptOrigin;
			a.end = m_ptEnd;
			list.xiangpica.push_back(a);
			m_ptOrigin = point;
		}
		dc.SelectObject(pOldpen);
		CView::OnMouseMove(nFlags, point);
	}
}


void CDrawingBoardView::OnSimplebrush()
{
	// TODO: 在此添加命令处理程序代码
	m_nDrawType = 7;
}


void CDrawingBoardView::OnErease()
{
	// TODO: 在此添加命令处理程序代码
	m_nDrawType = 10;
}


void CDrawingBoardView::OnBitmap()
{
	// TODO: 在此添加命令处理程序代码
	m_nDrawType = 8;
}


void CDrawingBoardView::OnXiangpijin()
{
	// TODO: 在此添加命令处理程序代码
	m_nDrawType = 9;
}


void CDrawingBoardView::OnColor()
{
	 //TODO: 在此添加命令处理程序代码
	//CColorDialog dlg;
	//dlg.m_cc.Flags |= CC_RGBINIT | CC_FULLOPEN;
	//dlg.m_cc.rgbResult = m_clr;
	//if (IDOK == dlg.DoModal())
	//{
	//	m_clr = dlg.m_cc.rgbResult;
	//}
	CColorDialog colorDialog;
//	COLORREF color;
	if (colorDialog.DoModal() == IDOK)
	{
		color = colorDialog.GetColor();
	}
}


//void CDrawingBoardView::OnPaint()
//{
//	CPaintDC dc(this); // device context for painting
//					   // TODO: 在此处添加消息处理程序代码
//					   // 不为绘图消息调用 CView::OnPaint()
//}


void CDrawingBoardView::OnColor1()
{
	// TODO: 在此添加命令处理程序代码
	if (set.DoModal() == IDOK)
	{
		int a = atoi(set.str1);
		int b = atoi(set.str2);
		int c = atoi(set.str3);
		color = RGB(a, b, c);
		m_clr = atoi(set.str4);
	}
}
