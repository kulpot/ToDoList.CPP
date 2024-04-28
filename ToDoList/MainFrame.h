#pragma once
#include <wx/wx.h>

class MainFrame : public wxFrame
{
public:
	MainFrame(const wxString& title);
private:
	wxPanel* panel;
	wxStaticText* headLineText;

};

