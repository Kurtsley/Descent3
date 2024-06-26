/*
* Descent 3 
* Copyright (C) 2024 Parallax Software
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#if !defined(AFX_SCRIPTWIZARD_H__A08FC7B1_14DB_11D1_BD98_00A0C96ED595__INCLUDED_)
#define AFX_SCRIPTWIZARD_H__A08FC7B1_14DB_11D1_BD98_00A0C96ED595__INCLUDED_
 
#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// ScriptWizard.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CScriptWizard dialog

struct tD3XProgram;

class CScriptWizard : public CDialog
{
// Construction
public:
	CScriptWizard(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CScriptWizard)
	enum { IDD = IDD_SCRIPTWIZ };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CScriptWizard)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CScriptWizard)
	virtual BOOL OnInitDialog();
	afx_msg void OnAddScript();
	afx_msg void OnLock();
	afx_msg void OnUnlock();
	afx_msg void OnEditScript();
	virtual void OnOK();
	virtual void OnCancel();
	afx_msg void OnSelChangeScrListbox();
	afx_msg void OnAddEvent();
	afx_msg void OnSelchangeScrevtListbox();
	afx_msg void OnSelchangeScrmodBox();
	afx_msg void OnDestroy();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

private:
	char ScriptFileName[32];
	char ScriptCodeName[32];
	int m_CurScriptSel;							// The current script selected from LISTBOX
	int m_CurEventSel;							// Current event selected from LISTBOX index.

	char *m_ScriptSource;						// script source
	tD3XProgram *m_ScriptCode;					// script code.

private:
	void LoadCurrentModule();
	void UpdateScriptListbox();
	void UpdateEventListbox();
	void UpdateDialogButtons();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SCRIPTWIZARD_H__A08FC7B1_14DB_11D1_BD98_00A0C96ED595__INCLUDED_)
