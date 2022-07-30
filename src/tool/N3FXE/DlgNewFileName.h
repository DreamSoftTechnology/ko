#pragma once

// DlgNewFileName.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDlgNewFileName dialog

class CDlgNewFileName : public CDialog
{
// Construction
public:
	CDlgNewFileName(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDlgNewFileName)
	enum { IDD = IDD_DLG_NEWFILENAME };
	CString	m_strExt;
	CString	m_strNewFileName;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDlgNewFileName)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDlgNewFileName)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

