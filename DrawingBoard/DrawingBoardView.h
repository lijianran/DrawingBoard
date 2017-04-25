
// DrawingBoardView.h : CDrawingBoardView 类的接口
//

#pragma once
#include"ReDraw.h"
#include"Settings.h"
#include"DrawingBoardDoc.h"

class CDrawingBoardView : public CView
{
private:  
	UINT m_nDrawType;
	CPoint m_ptOrigin, m_ptEnd;
	BOOL m_bDraw;
	ReDraw list;
	Settings set;
	int m_clr = 1;
	COLORREF color;
protected: // 仅从序列化创建
	CDrawingBoardView();
	DECLARE_DYNCREATE(CDrawingBoardView)

// 特性
public:
	CDrawingBoardDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CDrawingBoardView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDrawcircle();
//	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnDot();
	afx_msg void OnLine();
	afx_msg void OnRectangle();
	afx_msg void OnEllipse();
	afx_msg void OnShanxing();
	afx_msg void OnLianxuxian();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnSimplebrush();
//	afx_msg void OnSetting();
	afx_msg void OnErease();
	afx_msg void OnBitmap();
	afx_msg void OnXiangpijin();
	afx_msg void OnColor();
//	afx_msg void OnPaint();
	afx_msg void OnColor1();
};

#ifndef _DEBUG  // DrawingBoardView.cpp 中的调试版本
inline CDrawingBoardDoc* CDrawingBoardView::GetDocument() const
   { return reinterpret_cast<CDrawingBoardDoc*>(m_pDocument); }
#endif

