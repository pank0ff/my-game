﻿
// SameGameView.h: интерфейс класса CSameGameView
//

#pragma once


class CSameGameView : public CView
{
protected: // создать только из сериализации
	CSameGameView() noexcept;
	DECLARE_DYNCREATE(CSameGameView)

// Атрибуты
public:
	CSameGameDoc* GetDocument() const;

// Операции
public:

// Переопределение
public:
	virtual void OnDraw(CDC* pDC);  // переопределено для отрисовки этого представления
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Реализация
public:
	void ResizeWindow();

	virtual ~CSameGameView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Созданные функции схемы сообщений
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	virtual void OnInitialUpdate();
	/*  Функции для изменения уровня сложности */
	afx_msg void OnLevel3colors();
	afx_msg void OnLevel4colors();
	afx_msg void OnLevel5colors();
	afx_msg void OnLevel6colors();
	afx_msg void OnLevel7colors();
	/*  Функции для обновления меню*/
	afx_msg void OnUpdateLevel3colors(CCmdUI *pCmdUI);
	afx_msg void OnUpdateLevel4colors(CCmdUI *pCmdUI);
	afx_msg void OnUpdateLevel5colors(CCmdUI *pCmdUI);
	afx_msg void OnUpdateLevel6colors(CCmdUI *pCmdUI);
	afx_msg void OnUpdateLevel7colors(CCmdUI *pCmdUI);
	afx_msg void OnSetupBlockcount();
	afx_msg void OnSetupBlocksize();
	afx_msg void OnUpdateSetupBlockcount(CCmdUI *pCmdUI);
	afx_msg void OnUpdateSetupBlocksize(CCmdUI *pCmdUI);
	afx_msg void On32771();
	afx_msg void OnUpdateEditUndo(CCmdUI *pCmdUI);
	afx_msg void OnUpdate32771(CCmdUI *pCmdUI);
	afx_msg void OnEditUndo();
};

#ifndef _DEBUG  // версия отладки в SameGameView.cpp
inline CSameGameDoc* CSameGameView::GetDocument() const
   { return reinterpret_cast<CSameGameDoc*>(m_pDocument); }
#endif

