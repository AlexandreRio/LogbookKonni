///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep  8 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "logbook_pi.h"
#include "Logbook.h"
#include "LogbookOptions.h"
#include "Options.h"
#include "LogbookDialog.h"

#include <wx/dir.h>
#include <wx/stdpaths.h>
#include <wx/filefn.h>
#include <wx/msgdlg.h>
#include <wx/filedlg.h>
#include <wx/tooltip.h>

#include <memory>
#include "folder.xpm"
using namespace std;

///////////////////////////////////////////////////////////////////////////
LogbookOptions::LogbookOptions( wxWindow* parent, Options* opt, logbookkonni_pi* log_pi, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->opt = opt;
	this->log_pi = log_pi;

	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxVERTICAL );
	
	m_scrolledWindow1 = new wxScrolledWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxVSCROLL );
	m_scrolledWindow1->SetScrollRate( 5, 5 );
	wxBoxSizer* bSizer29;
	bSizer29 = new wxBoxSizer( wxVERTICAL );

	m_notebook4 = new wxNotebook( m_scrolledWindow1, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_notebook4->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_ACTIVEBORDER ) );
	
	m_panel15 = new wxPanel( m_notebook4, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer10;
	fgSizer10 = new wxFlexGridSizer( 12, 1, 0, 0 );
	fgSizer10->SetFlexibleDirection( wxBOTH );
	fgSizer10->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxFlexGridSizer* fgSizer29;
	fgSizer29 = new wxFlexGridSizer( 1, 4, 0, 0 );
	fgSizer29->SetFlexibleDirection( wxBOTH );
	fgSizer29->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	fgSizer29->Add( 10, 15, 1, wxEXPAND, 5 );
	fgSizer29->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer29->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer29->Add( 250, 0, 1, wxEXPAND, 5 );
	fgSizer29->Add( 10, 0, 1, wxEXPAND, 5 );
	
	m_checkBoxShowLogbook = new wxCheckBox( m_panel15, wxID_ANY, _("Show Logbook Icon"), wxDefaultPosition, wxSize( -1,-1 ), wxCHK_2STATE );
	m_checkBoxShowLogbook->SetValue(true); 
	fgSizer29->Add( m_checkBoxShowLogbook, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	
	m_staticText76 = new wxStaticText( m_panel15, wxID_ANY, _("Show Position Fomat"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText76->Wrap( -1 );
	fgSizer29->Add( m_staticText76, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxString m_choicePositionFormatChoices[] = { wxT("054\xB0 12.1234'"), wxT("054\xB0 12' 12.34\"") };
	int m_choicePositionFormatNChoices = sizeof( m_choicePositionFormatChoices ) / sizeof( wxString );
	m_choicePositionFormat = new wxChoice( m_panel15, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choicePositionFormatNChoices, m_choicePositionFormatChoices, 0 );
	m_choicePositionFormat->SetSelection( 0 );
	fgSizer29->Add( m_choicePositionFormat, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	fgSizer29->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_checkBoxToolTips = new wxCheckBox( m_panel15, wxID_ANY, _("Show ToolTips"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBoxToolTips->SetValue(true); 
	fgSizer29->Add( m_checkBoxToolTips, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	fgSizer29->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer29->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer29->Add( 0, 0, 1, wxEXPAND, 5 );

	m_checkBoxShowAllLayouts = new wxCheckBox( m_panel15, wxID_ANY, _("Show all Layouts"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBoxShowAllLayouts->SetValue(true); 
	fgSizer29->Add( m_checkBoxShowAllLayouts, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	
	m_checkBoxShowOnlySelectedLayouts = new wxCheckBox( m_panel15, wxID_ANY, _("Only Layouts with prefix:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBoxShowOnlySelectedLayouts->SetToolTip( _("If You have created Your own layouts\nwith prefix e.g. My_") );
	
	fgSizer29->Add( m_checkBoxShowOnlySelectedLayouts, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	
	m_textCtrlLayoutPrefix = new wxTextCtrl( m_panel15, wxID_ANY, _T("Label_"), wxDefaultPosition, wxSize( 90,-1 ), wxTE_PROCESS_ENTER );
	m_textCtrlLayoutPrefix->SetToolTip( _("If You have created Your own Layouts\nprepend them with e.g. My_ \nThe _ is important") );
	
	fgSizer29->Add( m_textCtrlLayoutPrefix, 0, wxALL, 0 );
	fgSizer29->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_checkBoxNoGPS = new wxCheckBox( m_panel15, wxID_ANY, _("Write warning \"No GPS\""), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBoxNoGPS->SetValue(true); 
	m_checkBoxNoGPS->SetToolTip( _("Uncheck if You have no GPS\nIf GPS is out of order, uncheck to\nprevent that the message repeats.") );
	
	fgSizer29->Add( m_checkBoxNoGPS, 0, wxALL, 0 );
	fgSizer29->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer29->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer29->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText741 = new wxStaticText( m_panel15, wxID_ANY, _("     Winddirection set to:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText741->Wrap( -1 );
	fgSizer29->Add( m_staticText741, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxString m_choiceWindToChoices[] = { _("default"), _("Heading") };
	int m_choiceWindToNChoices = sizeof( m_choiceWindToChoices ) / sizeof( wxString );
	m_choiceWindTo = new wxChoice( m_panel15, wxID_ANY, wxDefaultPosition, wxSize( 100,-1 ), m_choiceWindToNChoices, m_choiceWindToChoices, 0 );
	m_choiceWindTo->SetSelection( 0 );
	m_choiceWindTo->SetToolTip( _("default = Relative to Boat\nHeading = Actual wind direction") );
	
	fgSizer29->Add( m_choiceWindTo, 0, wxALL, 0 );
	fgSizer29->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer29->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_checkBoxWayPoint = new wxCheckBox( m_panel15, wxID_ANY, _("If Waypoint arrived"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer29->Add( m_checkBoxWayPoint, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	
	
	fgSizer29->Add( 0, 0, 1, wxEXPAND, 5 );
#ifdef __WXOSX__
    m_textCtrlWayPoint = new wxTextCtrl( m_panel15, wxID_ANY, _("automatic line\nWaypoint arrived:"), wxDefaultPosition, wxSize(250,40), wxTE_MULTILINE );
#else
	m_textCtrlWayPoint = new wxTextCtrl( m_panel15, wxID_ANY, _("automatic line\nWaypoint arrived:"), wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE );
#endif	
	fgSizer29->Add( m_textCtrlWayPoint, 0, wxALL|wxEXPAND, 0 );
	fgSizer29->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_checkBoxGuardChanged = new wxCheckBox( m_panel15, wxID_ANY, _("If Watch changed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer29->Add( m_checkBoxGuardChanged, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	fgSizer29->Add( 0, 0, 1, wxEXPAND, 5 );
	
#ifdef __WXOSX__
    m_textCtrlGuradChanged = new wxTextCtrl( m_panel15, wxID_ANY, _("automatic line\nchange of guards"), wxDefaultPosition, wxSize(250,40), wxTE_MULTILINE );
#else
	m_textCtrlGuradChanged = new wxTextCtrl( m_panel15, wxID_ANY, _("automatic line\nchange of guards"), wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE );
#endif	
//	m_textCtrlGuradChanged = new wxTextCtrl( m_panel15, wxID_ANY, _("automatic line\nchange of guards"), wxDefaultPosition, wxSize( -1,-1 ), wxTE_MULTILINE );
	fgSizer29->Add( m_textCtrlGuradChanged, 0, wxALL|wxEXPAND, 0 );
	fgSizer29->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_checkBoxEverySM = new wxCheckBox( m_panel15, wxID_ANY, _("Append Line every Nm"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer29->Add( m_checkBoxEverySM, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	
	m_textCtrlEverySM = new wxTextCtrl( m_panel15, wxID_ANY, wxT("10"), wxDefaultPosition, wxSize( 50,-1 ), wxTE_CENTRE );
	fgSizer29->Add( m_textCtrlEverySM, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	
#ifdef __WXOSX__
    m_textCtrlEverySMText = new wxTextCtrl( m_panel15, wxID_ANY, _("automatic line\nDistance > "), wxDefaultPosition, wxSize(250,40), wxTE_MULTILINE );
#else
	m_textCtrlEverySMText = new wxTextCtrl( m_panel15, wxID_ANY, _("automatic line\nDistance > "), wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE );
#endif
//	m_textCtrlEverySMText = new wxTextCtrl( m_panel15, wxID_ANY, _("automatic line\nDistance > "), wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE );
	fgSizer29->Add( m_textCtrlEverySMText, 0, wxALL|wxEXPAND, 0 );
	fgSizer10->Add( fgSizer29, 1, 0, 5 );
	
	wxFlexGridSizer* fgSizer35;
	fgSizer35 = new wxFlexGridSizer( 2, 4, 0, 0 );
	fgSizer35->SetFlexibleDirection( wxBOTH );
	fgSizer35->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	fgSizer35->Add( 10, 0, 1, wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer36;
	fgSizer36 = new wxFlexGridSizer( 2, 2, 0, 0 );
	fgSizer36->SetFlexibleDirection( wxBOTH );
	fgSizer36->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_checkBoxCourseChanged = new wxCheckBox( m_panel15, wxID_ANY, _("If Course changes more then "), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer36->Add( m_checkBoxCourseChanged, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	
	m_textCtrlCourseCahngedMoreThen = new wxTextCtrl( m_panel15, wxID_ANY, wxT("45"), wxDefaultPosition, wxSize( 30,-1 ), wxTE_CENTRE );
	fgSizer36->Add( m_textCtrlCourseCahngedMoreThen, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	
	m_staticText74 = new wxStaticText( m_panel15, wxID_ANY, _("      Course- Message after Minutes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText74->Wrap( -1 );
	fgSizer36->Add( m_staticText74, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	
	m_textCtrlCourseMessageAfter = new wxTextCtrl( m_panel15, wxID_ANY, wxT("5"), wxDefaultPosition, wxDefaultSize, wxTE_CENTRE );
	m_textCtrlCourseMessageAfter->SetToolTip( _("delay to find the right course to the wind") );
	m_textCtrlCourseMessageAfter->SetMinSize( wxSize( 30,-1 ) );
	
	fgSizer36->Add( m_textCtrlCourseMessageAfter, 0, wxALL, 0 );
	fgSizer35->Add( fgSizer36, 1, wxEXPAND, 5 );
	fgSizer35->Add( 74, 0, 1, wxEXPAND, 5 );
#ifdef __WXOSX__
    m_textCtrlChancedCourse = new wxTextCtrl( m_panel15, wxID_ANY, _("automatic line\nchange of course >"), wxDefaultPosition, wxSize(250,40), wxTE_MULTILINE );
#else
	m_textCtrlChancedCourse = new wxTextCtrl( m_panel15, wxID_ANY, _("automatic line\nchange of course >"), wxDefaultPosition, wxSize( 250,-1 ), wxTE_MULTILINE );
#endif	
//	m_textCtrlChancedCourse = new wxTextCtrl( m_panel15, wxID_ANY, _("automatic line\nchange of course >"), wxDefaultPosition, wxSize( 250,-1 ), wxTE_MULTILINE );
	fgSizer35->Add( m_textCtrlChancedCourse, 0, wxALL|wxEXPAND, 0 );
	
	fgSizer10->Add( fgSizer35, 0, 0, 5 );
	
	m_staticline25 = new wxStaticLine( m_panel15, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	fgSizer10->Add( m_staticline25, 0, wxEXPAND | wxALL, 5 );
	
	m_staticText54 = new wxStaticText( m_panel15, wxID_ANY, _("Timer"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticText54->Wrap( -1 );
	m_staticText54->SetFont( wxFont( 10, 74, 90, 92, false, wxT("Tahoma") ) );
	
	fgSizer10->Add( m_staticText54, 1, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );
	
	m_staticline10 = new wxStaticLine( m_panel15, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	fgSizer10->Add( m_staticline10, 0, wxEXPAND | wxALL, 5 );
	
	wxFlexGridSizer* fgSizer14;
	fgSizer14 = new wxFlexGridSizer( 2, 11, 0, 0 );
	fgSizer14->SetFlexibleDirection( wxBOTH );
	fgSizer14->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	
	fgSizer14->Add( 10, 0, 1, wxEXPAND, 5 );
	
	m_checkBoxTimer = new wxCheckBox( m_panel15, wxID_ANY, _("Timer on/off"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	fgSizer14->Add( m_checkBoxTimer, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	
	fgSizer14->Add( 30, 0, 1, wxEXPAND, 5 );
	
	m_staticText56 = new wxStaticText( m_panel15, wxID_ANY, _("Interval:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText56->Wrap( -1 );
	fgSizer14->Add( m_staticText56, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrTimerH = new wxTextCtrl( m_panel15, wxID_ANY, wxT("0"), wxDefaultPosition, wxSize( 30,-1 ), wxTE_RIGHT );
	m_textCtrTimerH->SetMaxLength( 4 ); 
	fgSizer14->Add( m_textCtrTimerH, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText58 = new wxStaticText( m_panel15, wxID_ANY, _("h"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText58->Wrap( -1 );
	fgSizer14->Add( m_staticText58, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrlTimerM = new wxTextCtrl( m_panel15, wxID_ANY, wxT("0"), wxDefaultPosition, wxSize( 30,-1 ), wxTE_RIGHT );
	m_textCtrlTimerM->SetMaxLength( 4 ); 
	fgSizer14->Add( m_textCtrlTimerM, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText581 = new wxStaticText( m_panel15, wxID_ANY, _("m"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText581->Wrap( -1 );
	fgSizer14->Add( m_staticText581, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrlTimerS = new wxTextCtrl( m_panel15, wxID_ANY, wxT("1"), wxDefaultPosition, wxSize( 30,-1 ), wxTE_RIGHT );
	m_textCtrlTimerS->SetMaxLength( 4 ); 
	fgSizer14->Add( m_textCtrlTimerS, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText5811 = new wxStaticText( m_panel15, wxID_ANY, _("s"), wxDefaultPosition, wxSize( 20,-1 ), 0 );
	m_staticText5811->Wrap( -1 );
	fgSizer14->Add( m_staticText5811, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	m_timerText = new wxTextCtrl( m_panel15, wxID_ANY, _("Automatic Line by Timer\nyou can set/unset a timer\nor change this text in options"), wxDefaultPosition, wxSize( 250,40 ), wxTE_MULTILINE );
	fgSizer14->Add( m_timerText, 0, wxLEFT, 5 );
	
	fgSizer10->Add( fgSizer14, 1, wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer18;
	fgSizer18 = new wxFlexGridSizer( 2, 8, 0, 0 );
	fgSizer18->SetFlexibleDirection( wxBOTH );
	fgSizer18->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	fgSizer18->Add( 70, 0, 1, wxEXPAND, 5 );
	
	m_radioBtnUTC = new wxRadioButton( m_panel15, wxID_ANY, _("UTC"), wxDefaultPosition, wxSize( 80,-1 ), 0 );
	fgSizer18->Add( m_radioBtnUTC, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_radioBtnLocal = new wxRadioButton( m_panel15, wxID_ANY, _("Local = UTC"), wxDefaultPosition, wxDefaultSize, 0 );
	m_radioBtnLocal->SetValue( true ); 
	fgSizer18->Add( m_radioBtnLocal, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxString m_choiceTzIndicatorChoices[] = { wxT("+"), wxT("-") };
	int m_choiceTzIndicatorNChoices = sizeof( m_choiceTzIndicatorChoices ) / sizeof( wxString );
#ifdef __WXOSX__
    m_choiceTzIndicator = new wxChoice( m_panel15, wxID_ANY, wxDefaultPosition, wxSize( 50,-1 ), m_choiceTzIndicatorNChoices, m_choiceTzIndicatorChoices, 0 );
#else
	m_choiceTzIndicator = new wxChoice( m_panel15, wxID_ANY, wxDefaultPosition, wxSize( 40,-1 ), m_choiceTzIndicatorNChoices, m_choiceTzIndicatorChoices, 0 );
#endif
	m_choiceTzIndicator->SetSelection( 0 );
	fgSizer18->Add( m_choiceTzIndicator, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxString m_choiceTzHoursChoices[] = { wxT("0"), wxT("1"), wxT("2"), wxT("3"), wxT("4"), wxT("5"), wxT("6"), wxT("7"), wxT("8"), wxT("9"), wxT("10"), wxT("11"), wxT("12") };
	int m_choiceTzHoursNChoices = sizeof( m_choiceTzHoursChoices ) / sizeof( wxString );
#ifdef __WXOSX__
    m_choiceTzHours = new wxChoice( m_panel15, wxID_ANY, wxDefaultPosition, wxSize( 50,-1 ), m_choiceTzHoursNChoices, m_choiceTzHoursChoices, 0 );
#else
	m_choiceTzHours = new wxChoice( m_panel15, wxID_ANY, wxDefaultPosition, wxSize( 40,-1 ), m_choiceTzHoursNChoices, m_choiceTzHoursChoices, 0 );
#endif
	m_choiceTzHours->SetSelection( 0 );
	fgSizer18->Add( m_choiceTzHours, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText71 = new wxStaticText( m_panel15, wxID_ANY, _("h"), wxDefaultPosition, wxSize( 60,-1 ), 0 );
	m_staticText71->Wrap( -1 );
	fgSizer18->Add( m_staticText71, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	
	m_radioBtnGPSAuto = new wxRadioButton( m_panel15, wxID_ANY, _("GPS Auto"), wxDefaultPosition, wxDefaultSize, 0 );
	m_radioBtnGPSAuto->SetToolTip( _("every 15 Degrees +/- 1 hour") );
	
	fgSizer18->Add( m_radioBtnGPSAuto, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	fgSizer10->Add( fgSizer18, 1, wxEXPAND, 5 );
	
	m_staticline22 = new wxStaticLine( m_panel15, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	fgSizer10->Add( m_staticline22, 0, wxEXPAND | wxALL, 5 );
	
	wxFlexGridSizer* fgSizer28;
	fgSizer28 = new wxFlexGridSizer( 4, 3, 0, 0 );
	fgSizer28->SetFlexibleDirection( wxBOTH );
	fgSizer28->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText731 = new wxStaticText( m_panel15, wxID_ANY, _("Install Layouts"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText731->Wrap( -1 );
	fgSizer28->Add( m_staticText731, 0, wxALL, 5 );
	
	m_staticText742 = new wxStaticText( m_panel15, wxID_ANY, _("Install Languages"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText742->Wrap( -1 );
	fgSizer28->Add( m_staticText742, 0, wxALL, 5 );
	
	m_staticText751 = new wxStaticText( m_panel15, wxID_ANY, _("Uninstall Logbook"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText751->Wrap( -1 );
	fgSizer28->Add( m_staticText751, 0, wxALL, 5 );
	
	m_buttonInstallHTMLFiles = new wxButton( m_panel15, wxID_ANY, _("Install"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonInstallHTMLFiles->SetToolTip( _("Install OpenCPN_Logbook_Layouts.zip") );
	
	fgSizer28->Add( m_buttonInstallHTMLFiles, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_buttonInstallLanguages = new wxButton( m_panel15, wxID_ANY, _("Install"), wxDefaultPosition, wxDefaultSize, 0 );
#ifdef __WXOSX__
    m_buttonInstallLanguages->SetToolTip( _("Install OpenCPN_Mac_Logbook_Languages.zip") );
#else
	m_buttonInstallLanguages->SetToolTip( _("Install OpenCPN_Logbook_Languages.zip") );
#endif
	fgSizer28->Add( m_buttonInstallLanguages, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_buttonUninstall = new wxButton( m_panel15, wxID_ANY, _("Uninstall"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonUninstall->SetToolTip( _("Uninstalls\nLogbook-Plugin,\nall Logbook-Data,\nall Logbook-Layouts,\nall Logbook-Languages\nand cleans the OpenCPN.ini") );
	
	fgSizer28->Add( m_buttonUninstall, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	fgSizer10->Add( fgSizer28, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxFlexGridSizer* fgSizer301;
	fgSizer301 = new wxFlexGridSizer( 2, 1, 0, 0 );
	fgSizer301->SetFlexibleDirection( wxBOTH );
	fgSizer301->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	fgSizer10->Add( fgSizer301, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_staticline261 = new wxStaticLine( m_panel15, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	fgSizer10->Add( m_staticline261, 0, wxEXPAND | wxALL, 5 );
	
	wxFlexGridSizer* fgSizer16;
	fgSizer16 = new wxFlexGridSizer( 1, 3, 0, 0 );
	fgSizer16->SetFlexibleDirection( wxBOTH );
	fgSizer16->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_panel15->SetSizer( fgSizer10 );
	m_panel15->Layout();
	fgSizer10->Fit( m_panel15 );
	m_notebook4->AddPage( m_panel15, _("Behavior"), true );
	m_panel20 = new wxPanel( m_notebook4, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer30;
	bSizer30 = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizer30->Add( 0, 0, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxVERTICAL );
	
	
	bSizer31->Add( 0, 20, 0, wxEXPAND, 5 );
	
	m_staticText1041 = new wxStaticText( m_panel20, wxID_ANY, _("Only used when you enter 1/2, 1/4 ... in a total-field, or to calculate the watermaker\n"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticText1041->Wrap( -1 );
	m_staticText1041->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 92, false, wxEmptyString ) );
	
	bSizer31->Add( m_staticText1041, 0, wxALL|wxEXPAND, 5 );
	
	m_staticline34 = new wxStaticLine( m_panel20, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer31->Add( m_staticline34, 0, wxEXPAND | wxALL, 5 );
	
	wxFlexGridSizer* fgSizer44;
	fgSizer44 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer44->SetFlexibleDirection( wxBOTH );
	fgSizer44->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText99 = new wxStaticText( m_panel20, wxID_ANY, _("Water"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText99->Wrap( -1 );
	m_staticText99->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 92, false, wxEmptyString ) );
	m_staticText99->SetMinSize( wxSize( 150,-1 ) );
	fgSizer44->Add( m_staticText99, 0, wxALL, 0 );
	fgSizer44->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer44->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer44->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText100 = new wxStaticText( m_panel20, wxID_ANY, _("Tank"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText100->Wrap( -1 );
	m_staticText100->SetMinSize( wxSize( 120,-1 ) );
	
	fgSizer44->Add( m_staticText100, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrlTankWater = new wxTextCtrl( m_panel20, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	m_textCtrlTankWater->SetToolTip( _("Set gal/liter in Abbreviations ") );
	fgSizer44->Add( m_textCtrlTankWater, 0, wxALL, 5 );
	
	
	fgSizer44->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText102 = new wxStaticText( m_panel20, wxID_ANY, _("Watermaker"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText102->Wrap( -1 );
	m_staticText102->SetMinSize( wxSize( 120,-1 ) );
	
	fgSizer44->Add( m_staticText102, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrlWatermaker = new wxTextCtrl( m_panel20, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	m_textCtrlWatermaker->SetToolTip( _("Set gal/liter in Abbreviations ") );
	
	fgSizer44->Add( m_textCtrlWatermaker, 0, wxALL, 5 );
	
	bSizer31->Add( fgSizer44, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_staticline33 = new wxStaticLine( m_panel20, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer31->Add( m_staticline33, 0, wxEXPAND | wxALL, 5 );
	
	wxFlexGridSizer* fgSizer43;
	fgSizer43 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer43->SetFlexibleDirection( wxBOTH );
	fgSizer43->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText96 = new wxStaticText( m_panel20, wxID_ANY, _("Fuel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText96->Wrap( -1 );
	m_staticText96->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 92, false, wxEmptyString ) );
	m_staticText96->SetMinSize( wxSize( 150,-1 ) );
	fgSizer43->Add( m_staticText96, 0, wxALL, 0 );
	fgSizer43->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer43->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer43->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText97 = new wxStaticText( m_panel20, wxID_ANY, _("Tank"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText97->Wrap( -1 );
	m_staticText97->SetMinSize( wxSize( 120,-1 ) );
	
	fgSizer43->Add( m_staticText97, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrlTankFuel = new wxTextCtrl( m_panel20, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	m_textCtrlTankFuel->SetToolTip( _("Set gal/liter in Abbreviations ") );
	fgSizer43->Add( m_textCtrlTankFuel, 0, wxALL, 5 );
	
	bSizer31->Add( fgSizer43, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_staticline32 = new wxStaticLine( m_panel20, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer31->Add( m_staticline32, 0, wxALL|wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer45;
	fgSizer45 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer45->SetFlexibleDirection( wxBOTH );
	fgSizer45->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText104 = new wxStaticText( m_panel20, wxID_ANY, _("Battery"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText104->Wrap( -1 );
	m_staticText104->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 92, false, wxEmptyString ) );
	m_staticText104->SetMinSize( wxSize( 150,-1 ) );
	fgSizer45->Add( m_staticText104, 0, wxALL, 0 );
	fgSizer45->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer45->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer45->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText105 = new wxStaticText( m_panel20, wxID_ANY, _("Bank #1"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText105->Wrap( -1 );
	m_staticText105->SetMinSize( wxSize( 120,-1 ) );
	
	fgSizer45->Add( m_staticText105, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrlBank1 = new wxTextCtrl( m_panel20, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	fgSizer45->Add( m_textCtrlBank1, 0, wxALL, 5 );
	
	
	fgSizer45->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText107 = new wxStaticText( m_panel20, wxID_ANY, _("Bank #2"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText107->Wrap( -1 );
	m_staticText107->SetMinSize( wxSize( 120,-1 ) );
	
	fgSizer45->Add( m_staticText107, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrlBank2 = new wxTextCtrl( m_panel20, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	fgSizer45->Add( m_textCtrlBank2, 0, wxALL, 5 );
	
	bSizer31->Add( fgSizer45, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	bSizer30->Add( bSizer31, 1, wxEXPAND, 5 );
	
	m_panel20->SetSizer( bSizer30 );
	m_panel20->Layout();
	bSizer30->Fit( m_panel20 );
	m_notebook4->AddPage( m_panel20, _("Capacity"), false );
	m_panel16 = new wxPanel( m_notebook4, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer30;
	fgSizer30 = new wxFlexGridSizer( 2, 1, 5, 0 );
	fgSizer30->SetFlexibleDirection( wxBOTH );
	fgSizer30->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxFlexGridSizer* fgSizer91;
	fgSizer91 = new wxFlexGridSizer( 3, 7, 5, 0 );
	fgSizer91->SetFlexibleDirection( wxBOTH );
	fgSizer91->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	fgSizer91->Add( 140, 30, 1, wxEXPAND, 5 );
	fgSizer91->Add( 100, 0, 1, wxEXPAND, 5 );
	fgSizer91->Add( 80, 0, 1, wxEXPAND, 5 );
	fgSizer91->Add( 80, 0, 1, wxEXPAND, 5 );
	fgSizer91->Add( 60, 0, 1, wxEXPAND, 5 );
	fgSizer91->Add( 50, 0, 1, wxEXPAND, 5 );
	fgSizer91->Add( 100, 0, 1, wxEXPAND, 5 );
	
	m_staticText34 = new wxStaticText( m_panel16, wxID_ANY, _("Navigation"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText34->Wrap( -1 );
	m_staticText34->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 92, false, wxEmptyString ) );
	
	fgSizer91->Add( m_staticText34, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText31 = new wxStaticText( m_panel16, wxID_ANY, _("Degres"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText31->Wrap( -1 );
	fgSizer91->Add( m_staticText31, 0, wxALIGN_CENTER_VERTICAL, 5 );
#ifdef __WXOSX__
    m_sDeg = new wxTextCtrl( m_panel16, wxID_ANY, _T("�"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
#else
	m_sDeg = new wxTextCtrl( m_panel16, wxID_ANY, _T("\xB0"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
#endif
	fgSizer91->Add( m_sDeg, 0, 0, 5 );
	
	m_staticText35 = new wxStaticText( m_panel16, wxID_ANY, _("Minutes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText35->Wrap( -1 );
	fgSizer91->Add( m_staticText35, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_sMin = new wxTextCtrl( m_panel16, wxID_ANY, _("'"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer91->Add( m_sMin, 0, 0, 5 );
	
	m_staticText36 = new wxStaticText( m_panel16, wxID_ANY, _("Seconds"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText36->Wrap( -1 );
	fgSizer91->Add( m_staticText36, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_sSec = new wxTextCtrl( m_panel16, wxID_ANY, _("\""), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer91->Add( m_sSec, 0, 0, 5 );
	
	
	fgSizer91->Add( 100, 0, 1, wxEXPAND, 5 );
	
	m_staticText38 = new wxStaticText( m_panel16, wxID_ANY, _("Distance"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText38->Wrap( -1 );
	fgSizer91->Add( m_staticText38, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	m_sDist = new wxTextCtrl( m_panel16, wxID_ANY, _("NM"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer91->Add( m_sDist, 0, 0, 5 );
	
	m_staticText39 = new wxStaticText( m_panel16, wxID_ANY, _("Speed"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText39->Wrap( -1 );
	fgSizer91->Add( m_staticText39, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_sSpeed = new wxTextCtrl( m_panel16, wxID_ANY, _("kts"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer91->Add( m_sSpeed, 0, 0, 5 );
	fgSizer91->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer91->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer91->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText40 = new wxStaticText( m_panel16, wxID_ANY, _("Show Depth in"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText40->Wrap( -1 );
	fgSizer91->Add( m_staticText40, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	wxString m_choiceDepthChoices[] = { _("Meter"), _("Feet"), _("Fathom") };
	int m_choiceDepthNChoices = sizeof( m_choiceDepthChoices ) / sizeof( wxString );
	m_choiceDepth = new wxChoice( m_panel16, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceDepthNChoices, m_choiceDepthChoices, 0 );
	m_choiceDepth->SetSelection( 0 );
	fgSizer91->Add( m_choiceDepth, 0, 0, 5 );
	
	m_staticText41 = new wxStaticText( m_panel16, wxID_ANY, _("Meter"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText41->Wrap( -1 );
	fgSizer91->Add( m_staticText41, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_smeter = new wxTextCtrl( m_panel16, wxID_ANY, _("m"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer91->Add( m_smeter, 0, 0, 5 );
	fgSizer91->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer91->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer91->Add( 0, 0, 1, wxEXPAND, 0 );
	
	m_staticText63 = new wxStaticText( m_panel16, wxID_ANY, _("Show Wave/Swell in"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText63->Wrap( -1 );
	fgSizer91->Add( m_staticText63, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxString m_choiceWaveSwellChoices[] = { _("Meter"), _("Feet"), _("Fathom") };
	int m_choiceWaveSwellNChoices = sizeof( m_choiceWaveSwellChoices ) / sizeof( wxString );
	m_choiceWaveSwell = new wxChoice( m_panel16, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceWaveSwellNChoices, m_choiceWaveSwellChoices, 0 );
	m_choiceWaveSwell->SetSelection( 0 );
	fgSizer91->Add( m_choiceWaveSwell, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText48 = new wxStaticText( m_panel16, wxID_ANY, _("Feet"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText48->Wrap( -1 );
	fgSizer91->Add( m_staticText48, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_sFeet = new wxTextCtrl( m_panel16, wxID_ANY, _("ft"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer91->Add( m_sFeet, 0, 0, 5 );
	fgSizer91->Add( 0, 0, 1, wxEXPAND, 0 );
	fgSizer91->Add( 0, 0, 1, wxEXPAND, 0 );
	fgSizer91->Add( 0, 0, 1, wxEXPAND, 0 );
	
	m_staticText632 = new wxStaticText( m_panel16, wxID_ANY, _("Heading"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText632->Wrap( -1 );
	fgSizer91->Add( m_staticText632, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxString m_choiceHeadingChoices[] = { _("True"), _("Magnetic") };
	int m_choiceHeadingNChoices = sizeof( m_choiceHeadingChoices ) / sizeof( wxString );
	m_choiceHeading = new wxChoice( m_panel16, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceHeadingNChoices, m_choiceHeadingChoices, 0 );
	m_choiceHeading->SetSelection( 0 );
	fgSizer91->Add( m_choiceHeading, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	m_staticText49 = new wxStaticText( m_panel16, wxID_ANY, _("Fathom"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText49->Wrap( -1 );
	fgSizer91->Add( m_staticText49, 0, wxALIGN_CENTER_VERTICAL|wxBOTTOM|wxLEFT, 5 );
	
	m_sFathom = new wxTextCtrl( m_panel16, wxID_ANY, _("fm"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer91->Add( m_sFathom, 0, 0, 5 );
	fgSizer91->Add( 0, 1, 1, wxEXPAND, 0 );
	fgSizer91->Add( 0, 0, 1, wxEXPAND, 0 );
	
	m_staticText42 = new wxStaticText( m_panel16, wxID_ANY, _("Weather"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText42->Wrap( -1 );
	m_staticText42->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 92, false, wxEmptyString ) );
	
	fgSizer91->Add( m_staticText42, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText43 = new wxStaticText( m_panel16, wxID_ANY, _("Barometer"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText43->Wrap( -1 );
	fgSizer91->Add( m_staticText43, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	m_sBaro = new wxTextCtrl( m_panel16, wxID_ANY, _("mb"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer91->Add( m_sBaro, 0, 0, 5 );
	
	m_staticText44 = new wxStaticText( m_panel16, wxID_ANY, _("Windspeed"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText44->Wrap( -1 );
	fgSizer91->Add( m_staticText44, 0, wxALIGN_CENTER_VERTICAL|wxLEFT, 5 );
	
	m_sKnots = new wxTextCtrl( m_panel16, wxID_ANY, _("kts"), wxDefaultPosition, wxSize( 40,-1 ), wxTE_PROCESS_ENTER );
	fgSizer91->Add( m_sKnots, 0, 0, 5 );
	fgSizer91->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer91->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer91->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer91->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer91->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer91->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_sMeterSec = new wxTextCtrl( m_panel16, wxID_ANY, _("m/s"), wxDefaultPosition, wxSize( 40,-1 ), wxTE_PROCESS_ENTER );
	fgSizer91->Add( m_sMeterSec, 0, 0, 5 );
	fgSizer91->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer91->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer91->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer91->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer91->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer91->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_sKmh = new wxTextCtrl( m_panel16, wxID_ANY, _("km/h"), wxDefaultPosition, wxSize( 40,-1 ), wxTE_PROCESS_ENTER );
	fgSizer91->Add( m_sKmh, 0, 0, 5 );
	fgSizer91->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer91->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer91->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText791 = new wxStaticText( m_panel16, wxID_ANY, _("Temperature"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText791->Wrap( -1 );
	fgSizer91->Add( m_staticText791, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	
	m_textCtrlTemperature = new wxTextCtrl( m_panel16, wxID_ANY, _("F"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer91->Add( m_textCtrlTemperature, 0, wxALL, 0 );
	fgSizer91->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer91->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer91->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer91->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText46 = new wxStaticText( m_panel16, wxID_ANY, _("Fuel/Water"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText46->Wrap( -1 );
	m_staticText46->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 92, false, wxEmptyString ) );
	
	fgSizer91->Add( m_staticText46, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText47 = new wxStaticText( m_panel16, wxID_ANY, _("Capacity"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText47->Wrap( -1 );
	fgSizer91->Add( m_staticText47, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	m_sLiter = new wxTextCtrl( m_panel16, wxID_ANY, _("gal"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer91->Add( m_sLiter, 0, 0, 5 );
	
	m_staticText50 = new wxStaticText( m_panel16, wxID_ANY, _("Motor Hours"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText50->Wrap( -1 );
	fgSizer91->Add( m_staticText50, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_sMotorh = new wxTextCtrl( m_panel16, wxID_ANY, _("h"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer91->Add( m_sMotorh, 0, 0, 5 );

	m_staticText106 = new wxStaticText( m_panel16, wxID_ANY, _("Ampere"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText106->Wrap( -1 );
	fgSizer91->Add( m_staticText106, 0, wxALL, 5 );
	
	m_textCtrlAmpere = new wxTextCtrl( m_panel16, wxID_ANY, _T("A"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer91->Add( m_textCtrlAmpere, 0, wxALL, 0 );
	
	m_staticText70 = new wxStaticText( m_panel16, wxID_ANY, _("Maintenance"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText70->Wrap( -1 );
	m_staticText70->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 92, false, wxEmptyString ) );
	
	fgSizer91->Add( m_staticText70, 0, wxALL, 5 );
	
	m_staticText712 = new wxStaticText( m_panel16, wxID_ANY, _("Day(s)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText712->Wrap( -1 );
	fgSizer91->Add( m_staticText712, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	
	m_Days = new wxTextCtrl( m_panel16, wxID_ANY, _("Day(s)"), wxDefaultPosition, wxSize( 60,-1 ), 0 );
	fgSizer91->Add( m_Days, 0, wxALL, 0 );
	
	m_staticText72 = new wxStaticText( m_panel16, wxID_ANY, _("Week(s)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText72->Wrap( -1 );
	fgSizer91->Add( m_staticText72, 0, wxALL, 5 );
	
	m_Weeks = new wxTextCtrl( m_panel16, wxID_ANY, _("Weeks(s)"), wxDefaultPosition, wxSize( 60,-1 ), 0 );
	fgSizer91->Add( m_Weeks, 0, wxALL, 0 );
	
	m_staticText73 = new wxStaticText( m_panel16, wxID_ANY, _("Month"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText73->Wrap( -1 );
	fgSizer91->Add( m_staticText73, 0, wxALL, 5 );
	
	m_textMonth = new wxTextCtrl( m_panel16, wxID_ANY, _("Month"), wxDefaultPosition, wxSize( 60,-1 ), 0 );
	fgSizer91->Add( m_textMonth, 0, wxALL, 0 );
	
	fgSizer30->Add( fgSizer91, 1, wxEXPAND, 5 );
	
	m_staticline251 = new wxStaticLine( m_panel16, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	fgSizer30->Add( m_staticline251, 0, wxEXPAND | wxALL, 5 );
	
	m_staticText75 = new wxStaticText( m_panel16, wxID_ANY, _("If GPS off use for manual entry"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_staticText75->Wrap( -1 );
	fgSizer30->Add( m_staticText75, 0, wxALL|wxEXPAND, 5 );
	
	m_staticline26 = new wxStaticLine( m_panel16, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	fgSizer30->Add( m_staticline26, 0, wxEXPAND | wxALL, 5 );
	
	wxFlexGridSizer* fgSizer32;
	fgSizer32 = new wxFlexGridSizer( 2, 4, 0, 0 );
	fgSizer32->SetFlexibleDirection( wxBOTH );
	fgSizer32->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText51 = new wxStaticText( m_panel16, wxID_ANY, _("Windspeed "), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_staticText51->Wrap( -1 );
	fgSizer32->Add( m_staticText51, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	wxString m_choiceWindChoices[] = { _("kts"), _("m/s"), _("km/h") };
	int m_choiceWindNChoices = sizeof( m_choiceWindChoices ) / sizeof( wxString );
#ifdef __WXOSX__
    m_choiceWind = new wxChoice( m_panel16, wxID_ANY, wxDefaultPosition, wxSize( 80,-1 ), m_choiceWindNChoices, m_choiceWindChoices, 0 );
#else
	m_choiceWind = new wxChoice( m_panel16, wxID_ANY, wxDefaultPosition, wxSize( 50,-1 ), m_choiceWindNChoices, m_choiceWindChoices, 0 );
#endif
	m_choiceWind->SetSelection( 0 );
	fgSizer32->Add( m_choiceWind, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText45 = new wxStaticText( m_panel16, wxID_ANY, _(" Direction "), wxPoint( -1,-1 ), wxSize( -1,-1 ), wxALIGN_RIGHT );
	m_staticText45->Wrap( -1 );
	fgSizer32->Add( m_staticText45, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxString m_choiceDirChoices[] = { _("True"), _("Relative") };
	int m_choiceDirNChoices = sizeof( m_choiceDirChoices ) / sizeof( wxString );
#ifdef __WXOSX__
    m_choiceDir = new wxChoice( m_panel16, wxID_ANY, wxPoint( -1,-1 ), wxSize( 80,-1 ), m_choiceDirNChoices, m_choiceDirChoices, 0 );
#else
	m_choiceDir = new wxChoice( m_panel16, wxID_ANY, wxPoint( -1,-1 ), wxSize( 65,-1 ), m_choiceDirNChoices, m_choiceDirChoices, 0 );
#endif
	m_choiceDir->SetSelection( 1 );
	fgSizer32->Add( m_choiceDir, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	fgSizer30->Add( fgSizer32, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_panel16->SetSizer( fgSizer30 );
	m_panel16->Layout();
	fgSizer30->Fit( m_panel16 );
	m_notebook4->AddPage( m_panel16, _("Abbreviations"), false );
	m_panel17 = new wxPanel( m_notebook4, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer322;
	fgSizer322 = new wxFlexGridSizer( 2, 1, 0, 0 );
	fgSizer322->SetFlexibleDirection( wxBOTH );
	fgSizer322->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxFlexGridSizer* fgSizer321;
	fgSizer321 = new wxFlexGridSizer( 2, 3, 0, 0 );
	fgSizer321->SetFlexibleDirection( wxBOTH );
	fgSizer321->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	fgSizer321->Add( 0, 40, 1, wxEXPAND, 5 );
	fgSizer321->Add( 0, 0, 1, wxEXPAND, 5 );
	fgSizer321->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText761 = new wxStaticText( m_panel17, wxID_ANY, _("Path to ODT-Editor"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText761->Wrap( -1 );
	fgSizer321->Add( m_staticText761, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrlODTEditor = new wxTextCtrl( m_panel17, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 420,-1 ), 0 );
	m_textCtrlODTEditor->SetToolTip( _("to use MS-Word, append %s like this:\n\"C:\\yourPathToWinword\\WINWORD.EXE\" %s") );

	fgSizer321->Add( m_textCtrlODTEditor, 0, wxALL|wxEXPAND, 5 );
	
	m_bpButtonODT = new wxBitmapButton( m_panel17, wxID_ANY, wxBitmap( folder ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	fgSizer321->Add( m_bpButtonODT, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	
	m_staticText77 = new wxStaticText( m_panel17, wxID_ANY, _("Path to Datamanager"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText77->Wrap( -1 );
	fgSizer321->Add( m_staticText77, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
    
#ifdef __WXOSX__
    m_textCtrlDataManager = new wxTextCtrl( m_panel17, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 420,-1 ), 0 );
#else
	m_textCtrlDataManager = new wxTextCtrl( m_panel17, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
#endif
	fgSizer321->Add( m_textCtrlDataManager, 0, wxALL|wxEXPAND, 5 );
	
	m_bpButtonDatamanager = new wxBitmapButton( m_panel17, wxID_ANY, wxBitmap( folder ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	fgSizer321->Add( m_bpButtonDatamanager, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	
	m_staticText78 = new wxStaticText( m_panel17, wxID_ANY, _("Path to MailClient"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText78->Wrap( -1 );
	fgSizer321->Add( m_staticText78, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
#ifdef __WXOSX__
    m_textCtrlMailClient = new wxTextCtrl( m_panel17, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 420,-1 ), 0 );
#else
	m_textCtrlMailClient = new wxTextCtrl( m_panel17, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
#endif
	fgSizer321->Add( m_textCtrlMailClient, 0, wxALL|wxEXPAND, 5 );
	
	m_bpButtonMail = new wxBitmapButton( m_panel17, wxID_ANY, wxBitmap( folder ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	fgSizer321->Add( m_bpButtonMail, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	
	m_staticText79 = new wxStaticText( m_panel17, wxID_ANY, _("Path to HTML-Editor\n(optional)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText79->Wrap( -1 );
	fgSizer321->Add( m_staticText79, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrlHTMLEditorPath = new wxTextCtrl( m_panel17, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 420,-1 ), 0 );
	fgSizer321->Add( m_textCtrlHTMLEditorPath, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_bpButtonHTMLEditor = new wxBitmapButton( m_panel17, wxID_ANY, wxBitmap( folder ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	fgSizer321->Add( m_bpButtonHTMLEditor, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer322->Add( fgSizer321, 1, wxEXPAND, 5 );
	
	m_buttonResetPath = new wxButton( m_panel17, wxID_ANY, _("Reset Paths"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer322->Add( m_buttonResetPath, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_panel17->SetSizer( fgSizer322 );
	m_panel17->Layout();
	fgSizer322->Fit( m_panel17 );
	m_notebook4->AddPage( m_panel17, _("Paths"), false );

	bSizer29->Add( m_notebook4, 1, wxEXPAND | wxALL, 5 );
	
	m_sdbSizer1 = new wxStdDialogButtonSizer();
	m_sdbSizer1OK = new wxButton( m_scrolledWindow1, wxID_OK );
	m_sdbSizer1->AddButton( m_sdbSizer1OK );
	m_sdbSizer1Cancel = new wxButton( m_scrolledWindow1, wxID_CANCEL );
	m_sdbSizer1->AddButton( m_sdbSizer1Cancel );
	m_sdbSizer1->Realize();

	bSizer29->Add( m_sdbSizer1, 0, wxALIGN_CENTER, 5 );
	m_scrolledWindow1->SetSizer( bSizer29 );
	m_scrolledWindow1->Layout();
	bSizer29->Fit( m_scrolledWindow1 );
	bSizer21->Add( m_scrolledWindow1, 1, wxEXPAND | wxALL, 5 );

	this->SetSizer( bSizer21 );
	this->Layout();
	
	this->Centre( wxBOTH );
//	this->Fit();
	// Connect Events
	m_choicePositionFormat->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( LogbookOptions::onChoicePositionFormat ), NULL, this );
	m_checkBoxShowAllLayouts->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( LogbookOptions::onCeckBoxShowAllLayouts ), NULL, this );
	m_checkBoxToolTips->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( LogbookOptions::onCheckBoxToolTips ), NULL, this );
	m_checkBoxShowOnlySelectedLayouts->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( LogbookOptions::onCheckBoxShowOnlySelectedLayouts ), NULL, this );
	m_textCtrlLayoutPrefix->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( LogbookOptions::OnTextEnterLayoutPrefix ), NULL, this );
	m_checkBoxNoGPS->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( LogbookOptions::onCheckBoNoGPS ), NULL, this );
	m_checkBoxTimer->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( LogbookOptions::m_checkBoxTimerOnCheckBox ), NULL, this );
	m_radioBtnUTC->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( LogbookOptions::onRadioBtnUTC ), NULL, this );
	m_radioBtnLocal->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( LogbookOptions::onRadioBtnLocal ), NULL, this );
	m_radioBtnGPSAuto->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( LogbookOptions::onRadioBtnGPSAuto ), NULL, this );
	m_bpButtonODT->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LogbookOptions::onButtonClickODT ), NULL, this );
	m_bpButtonDatamanager->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LogbookOptions::onButtonClickDataManager ), NULL, this );
	m_bpButtonMail->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LogbookOptions::onButtonClickMail ), NULL, this );
	m_buttonInstallHTMLFiles->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LogbookOptions::onButtonClickInstallHTMLFiles ), NULL, this );
	m_buttonInstallLanguages->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LogbookOptions::onButtonClickInstallLanguages ), NULL, this );
	m_bpButtonHTMLEditor->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LogbookOptions::onButtonHTMLEditor ), NULL, this );
	m_sKnots->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( LogbookOptions::onTextEnterm_sKnots ), NULL, this );
	m_sMeterSec->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( LogbookOptions::onTextEnterm_sMeterSec ), NULL, this );
	m_sKmh->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( LogbookOptions::onTextEnterm_sKmh ), NULL, this );
	m_sdbSizer1OK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LogbookOptions::OnButtonOKClick ), NULL, this );
	m_checkBoxGuardChanged->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( LogbookOptions::onCheckBoxGuardChanged ), NULL, this );
	m_buttonUninstall->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LogbookOptions::OnButtonClickUninstall ), NULL, this );
	m_buttonResetPath->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LogbookOptions::OnButtonResetPaths ), NULL, this );
	m_sLiter->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( LogbookOptions::onTextm_sLiter ), NULL, this );
	m_textCtrlWatermaker->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( LogbookOptions::OnTextEnterm_textCtrlWatermaker ), NULL, this );
	m_textCtrlBank1->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( LogbookOptions::OnTextEnterBank1 ), NULL, this );
	m_textCtrlBank2->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( LogbookOptions::onTextEnterBank2 ), NULL, this );
	m_textCtrlTankFuel->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( LogbookOptions::OnTextEnterFuelTank ), NULL, this );
	m_textCtrlTankWater->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( LogbookOptions::OnTextEnterWaterTank ), NULL, this );

	setValues();

	if(opt->timer)
	{
		this->m_textCtrTimerH->Enable(false);
		this->m_textCtrlTimerM->Enable(false);
		this->m_textCtrlTimerS->Enable(false);
	}

#ifndef __WXMSW__
	m_buttonUninstall->Enable(false);
#endif

	m_buttonInstallLanguages->Disable();
}

LogbookOptions::~LogbookOptions()
{
	// Disconnect Events
	m_choicePositionFormat->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( LogbookOptions::onChoicePositionFormat ), NULL, this );
	m_checkBoxShowAllLayouts->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( LogbookOptions::onCeckBoxShowAllLayouts ), NULL, this );
	m_checkBoxToolTips->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( LogbookOptions::onCheckBoxToolTips ), NULL, this );
	m_checkBoxShowOnlySelectedLayouts->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( LogbookOptions::onCheckBoxShowOnlySelectedLayouts ), NULL, this );
	m_textCtrlLayoutPrefix->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( LogbookOptions::OnTextEnterLayoutPrefix ), NULL, this );
	m_checkBoxNoGPS->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( LogbookOptions::onCheckBoNoGPS ), NULL, this );
	m_checkBoxTimer->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( LogbookOptions::m_checkBoxTimerOnCheckBox ), NULL, this );
	m_radioBtnUTC->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( LogbookOptions::onRadioBtnUTC ), NULL, this );
	m_radioBtnLocal->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( LogbookOptions::onRadioBtnLocal ), NULL, this );
	m_radioBtnGPSAuto->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( LogbookOptions::onRadioBtnGPSAuto ), NULL, this );
	m_bpButtonODT->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LogbookOptions::onButtonClickODT ), NULL, this );
	m_bpButtonDatamanager->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LogbookOptions::onButtonClickDataManager ), NULL, this );
	m_bpButtonMail->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LogbookOptions::onButtonClickMail ), NULL, this );
	m_buttonInstallHTMLFiles->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LogbookOptions::onButtonClickInstallHTMLFiles ), NULL, this );
	m_buttonInstallLanguages->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LogbookOptions::onButtonClickInstallLanguages ), NULL, this );
	m_bpButtonHTMLEditor->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LogbookOptions::onButtonHTMLEditor ), NULL, this );
	m_sKnots->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( LogbookOptions::onTextEnterm_sKnots ), NULL, this );
	m_sMeterSec->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( LogbookOptions::onTextEnterm_sMeterSec ), NULL, this );
	m_sKmh->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( LogbookOptions::onTextEnterm_sKmh ), NULL, this );
	m_sdbSizer1OK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LogbookOptions::OnButtonOKClick ), NULL, this );
	m_checkBoxGuardChanged->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( LogbookOptions::onCheckBoxGuardChanged ), NULL, this );
	m_buttonUninstall->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LogbookOptions::OnButtonClickUninstall ), NULL, this );
	m_buttonResetPath->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LogbookOptions::OnButtonResetPaths ), NULL, this );
	m_sLiter->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( LogbookOptions::onTextm_sLiter ), NULL, this );
	m_textCtrlWatermaker->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( LogbookOptions::OnTextEnterm_textCtrlWatermaker ), NULL, this );
	m_textCtrlBank1->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( LogbookOptions::OnTextEnterBank1 ), NULL, this );
	m_textCtrlBank2->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( LogbookOptions::onTextEnterBank2 ), NULL, this );
	m_textCtrlTankFuel->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( LogbookOptions::OnTextEnterFuelTank ), NULL, this );
	m_textCtrlTankWater->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( LogbookOptions::OnTextEnterWaterTank ), NULL, this );



}

void LogbookOptions::OnButtonClickUninstall(wxCommandEvent& ev)
{
#ifdef __WXMSW__
	wxStandardPaths stdpath;
	wxString s = stdpath.GetPluginsDir();
	wxString command = s+_T("\\plugins\\uninst_logbookkonni_pi.exe");

	wxExecute(_T("explorer.exe /select,")+command);	
#endif
}

void LogbookOptions::OnButtonResetPaths( wxCommandEvent& event )
{
	opt->htmlEditor = opt->htmlEditorReset;
	opt->odtEditor  = opt->odtEditorReset;
	opt->mailClient = opt->mailClientReset;
	opt->dataManager= opt->dataManagerReset;

	setValues();
}

void LogbookOptions::onCheckBoxToolTips(wxCommandEvent& ev)
{
	if(ev.IsChecked())
	{
		this->GetToolTip()->Enable(true);
		opt->showToolTips = true;
	}
	else
	{
		this->GetToolTip()->Enable(false);
		opt->showToolTips = false;
	}
}

void LogbookOptions::OnButtonOKClick(wxCommandEvent &ev)
{
	getValues();
	updateChoiceBoxes();

	if((m_sDeg->IsEmpty() || m_sDeg->GetValue().Len() != 1) || 
		(m_sMin->IsEmpty() || m_sMin->GetValue().Len()!= 1) ||
		(m_sSec->IsEmpty()) || m_sSec->GetValue().Len() != 1)
	{
#ifdef __WXOSX__
        MessageBoxOSX(NULL,_("Please fill in one character in Degrees, Minuts and Seconds"),_T("Information"),wxID_OK);
        return;
#else
		wxMessageBox(_("Please fill in one character in Degrees, Minutes and Seconds"));
		return;
#endif
	}
	else
		ev.Skip();
}

void LogbookOptions::onChoicePositionFormat(wxCommandEvent &ev)
{
	switch(ev.GetInt())
	{
	case 0: 	opt->traditional = false;
		break;
	case 1:		opt->traditional = true;
		break;
	}
}

void LogbookOptions::setValues()
{
	m_textCtrlTankFuel->SetValue(opt->fuelTank+_T(" ")+opt->vol);
	m_textCtrlTankWater->SetValue(opt->waterTank+_T(" ")+opt->vol);
	m_textCtrlBank1->SetValue(opt->bank1+_T(" ")+opt->ampereh);
	m_textCtrlBank2->SetValue(opt->bank2+_T(" ")+opt->ampereh);
	m_textCtrlWatermaker->SetValue(opt->watermaker+_T(" ")+opt->vol+_T("/")+opt->motorh);
	m_checkBoxGuardChanged->SetValue(opt->guardChange);
	m_textCtrlGuradChanged->SetValue(opt->guardChangeText);
	m_checkBoxWayPoint->SetValue(opt->waypointArrived);
	m_textCtrlWayPoint->SetValue(opt->waypointText);
	m_checkBoxCourseChanged->SetValue(opt->courseChange);
	m_textCtrlCourseMessageAfter->SetValue(opt->courseTextAfterMinutes);
	m_textCtrlCourseCahngedMoreThen->SetValue(opt->courseChangeDegrees);
	m_textCtrlChancedCourse->SetValue(opt->courseChangeText);
	m_checkBoxEverySM->SetValue(opt->everySM);
	m_textCtrlEverySM->SetValue(opt->everySMAmount);
	m_textCtrlEverySMText->SetValue(opt->everySMText);

	opt->courseChangeDegrees.ToDouble(&opt->dCourseChangeDegrees);
	opt->everySMAmount.ToDouble(&opt->dEverySM);

	m_checkBoxTimer->SetValue(opt->timer);
	m_textCtrTimerH->SetValue(opt->thour);
	m_textCtrlTimerM->SetValue(opt->tmin);
	m_textCtrlTimerS->SetValue(opt->tsec);
	m_timerText->SetValue(opt->ttext);

	m_sDeg->SetValue(opt->Deg);
	m_sMin->SetValue(opt->Min);
	m_sSec->SetValue(opt->Sec);

	m_sDist->SetValue(opt->distance);
	m_sSpeed->SetValue(opt->speed);

	m_sBaro->SetValue(opt->baro);
	m_textCtrlTemperature->SetValue(opt->temperature);
	m_smeter->SetValue(opt->meter);
	m_sFeet->SetValue(opt->feet);
	m_sFathom->SetValue(opt->fathom);

	m_sKnots->SetValue(opt->windkts);
	m_sMeterSec->SetValue(opt->windmeter);
	m_sKmh->SetValue(opt->windkmh);

	m_sLiter->SetValue(opt->vol);
	m_sMotorh->SetValue(opt->motorh);
	m_textCtrlAmpere->SetValue(opt->ampere);

	m_Days->SetValue(opt->days);
	m_Weeks->SetValue(opt->weeks);
	m_textMonth->SetValue(opt->month);

	choicesWind[0] = opt->windkts;
	choicesWind[1] = opt->windmeter;
	choicesWind[2] = opt->windkmh;
	updateWindChoice();

	m_choiceDepth->SetSelection(opt->showDepth);
	m_choiceWaveSwell->SetSelection(opt->showWaveSwell);
	m_choiceWind->SetSelection(opt->showWindSpeed);
	m_choiceDir->SetSelection(opt->showWindDir);
	m_choiceHeading->SetSelection(opt->showHeading);
	m_choiceWindTo->SetSelection(opt->showWindHeading);

	m_textCtrlHTMLEditorPath->SetValue(opt->htmlEditor);
	m_textCtrlODTEditor->SetValue(opt->odtEditor);
	m_textCtrlDataManager->SetValue(opt->dataManager);
	m_textCtrlMailClient->SetValue(opt->mailClient);

	if(opt->local == true)
		m_radioBtnLocal->SetValue(true);
	if(opt->gpsAuto == true)
		m_radioBtnGPSAuto->SetValue(true);
	if(opt->UTC == true)
		m_radioBtnUTC->SetValue(true);

	if(opt->traditional)
		m_choicePositionFormat->SetSelection(1);
	else
		m_choicePositionFormat->SetSelection(0);

	m_checkBoxToolTips->SetValue(opt->showToolTips);

	m_choiceTzIndicator->SetSelection(opt->tzIndicator);
	m_choiceTzHours->SetSelection(opt->tzHour);

	m_checkBoxNoGPS->SetValue(opt->noGPS);
	m_checkBoxShowAllLayouts->SetValue(opt->showAllLayouts);
	m_checkBoxShowOnlySelectedLayouts->SetValue(opt->filterLayout);
	m_textCtrlLayoutPrefix->SetValue(opt->layoutPrefix);
	
}

void LogbookOptions::getValues()
{
	wxString t = m_textCtrlWatermaker->GetValue();
	opt->watermaker =  t.substr(0,t.find_first_of(' '));
	t = m_textCtrlBank1->GetValue();
	opt->bank1 =  t.substr(0,t.find_first_of(' '));
	t = m_textCtrlBank2->GetValue();
	opt->bank2 =  t.substr(0,t.find_first_of(' '));
	t = m_textCtrlTankFuel->GetValue();
	opt->fuelTank =  t.substr(0,t.find_first_of(' '));
	t = m_textCtrlTankWater->GetValue();
	opt->waterTank =  t.substr(0,t.find_first_of(' '));
	opt->guardChange = m_checkBoxGuardChanged->GetValue();
	opt->guardChangeText = m_textCtrlGuradChanged->GetValue();
	opt->waypointArrived = m_checkBoxWayPoint->GetValue();
	opt->waypointText = m_textCtrlWayPoint->GetValue();
	opt->courseChange = m_checkBoxCourseChanged->GetValue();
	opt->courseChangeDegrees = m_textCtrlCourseCahngedMoreThen->GetValue();
	opt->courseTextAfterMinutes = m_textCtrlCourseMessageAfter->GetValue();
	opt->courseChangeText = m_textCtrlChancedCourse->GetValue();
	opt->everySM = m_checkBoxEverySM->GetValue();
	opt->everySMAmount = m_textCtrlEverySM->GetValue();
	opt->everySMText = m_textCtrlEverySMText->GetValue();

	opt->courseChangeDegrees.ToDouble(&opt->dCourseChangeDegrees);
	opt->everySMAmount.ToDouble(&opt->dEverySM);

	opt->timer = m_checkBoxTimer->GetValue();
	opt->thour = m_textCtrTimerH->GetValue();
	opt->tmin  = m_textCtrlTimerM->GetValue();
	opt->tsec  = m_textCtrlTimerS->GetValue();
	opt->ttext = m_timerText->GetValue();

	opt->timerSec = (wxAtol(opt->thour)* 3600000 +
					 wxAtol(opt->tmin) *60000 +
					 wxAtol(opt->tsec) * 1000);

	opt->Deg = m_sDeg->GetValue();
	opt->Min = m_sMin->GetValue();
	opt->Sec =m_sSec->GetValue();

	opt->distance = m_sDist->GetValue();
	opt->speed    = m_sSpeed->GetValue();

	opt->baro        = m_sBaro->GetValue();
	opt->temperature = m_textCtrlTemperature->GetValue();
	opt->meter       = m_smeter->GetValue();
	opt->feet        = m_sFeet->GetValue();
	opt->fathom      = m_sFathom->GetValue();

	opt->windkts   = m_sKnots->GetValue();
	opt->windmeter = m_sMeterSec->GetValue();
	opt->windkmh   = m_sKmh->GetValue();

	opt->vol    = m_sLiter->GetValue();
	opt->motorh = m_sMotorh->GetValue();
	opt->ampere = m_textCtrlAmpere->GetValue();

	opt->days = m_Days->GetValue();
	opt->weeks = m_Weeks->GetValue();
	opt->month = m_textMonth->GetValue();

	opt->showDepth       = m_choiceDepth->GetSelection();
	opt->showWaveSwell   = m_choiceWaveSwell->GetSelection();
	opt->showWindSpeed   = m_choiceWind->GetSelection();
	opt->showWindDir     = m_choiceDir->GetSelection();
	opt->showHeading     = m_choiceHeading->GetSelection();
	opt->showWindHeading = m_choiceWindTo->GetSelection();

	opt->htmlEditor = m_textCtrlHTMLEditorPath->GetValue();
	opt->odtEditor  = m_textCtrlODTEditor->GetValue();
	opt->dataManager= m_textCtrlDataManager->GetValue();
	opt->mailClient = m_textCtrlMailClient->GetValue();

	if(m_radioBtnLocal->GetValue() == true)
		opt->local = true;
	if(m_radioBtnGPSAuto->GetValue() == true)
	{
		opt->gpsAuto = true;
		opt->local = true;
	}
	if(this->m_radioBtnUTC->GetValue() == true)
		opt->UTC = true;

	if(	m_choicePositionFormat->GetSelection())
		opt->traditional = true;
	else
		opt->traditional= false;

	opt->showToolTips = m_checkBoxToolTips->GetValue();

	opt->tzIndicator = m_choiceTzIndicator->GetSelection();
	opt->tzHour = m_choiceTzHours->GetSelection();
	opt->noGPS = m_checkBoxNoGPS->GetValue();
	opt->showAllLayouts = m_checkBoxShowAllLayouts->GetValue();
	opt->filterLayout = m_checkBoxShowOnlySelectedLayouts->GetValue();
	opt->layoutPrefix = m_textCtrlLayoutPrefix->GetValue();
}

void LogbookOptions::m_checkBoxTimerOnCheckBox( wxCommandEvent& ev )
{
	opt->timerSec = (wxAtol(m_textCtrTimerH->GetValue())  * 3600000 +
					 wxAtol(m_textCtrlTimerM->GetValue()) * 60000   +
					 wxAtol(m_textCtrlTimerS->GetValue()) * 1000);

	long sec = opt->timerSec;

	if(sec == 0)
	{
		m_checkBoxTimer->SetValue(false);
#ifdef __WXOSX__
        MessageBoxOSX(NULL,_("Sorry, 0 Hrs 0 Min 0 Sec are not possible"),_T("Information"),wxID_OK);
        return;
#else
		wxMessageBox(_("Sorry, 0 Hrs 0 Min 0 Sec are not possible"),_("Information"));
		return;
#endif
	}

	if(ev.IsChecked())
	{
		opt->thour = m_textCtrTimerH->GetValue();
		opt->tmin  = m_textCtrlTimerM->GetValue();
		opt->tsec  = m_textCtrlTimerS->GetValue();

		m_textCtrTimerH->Enable(false);
		m_textCtrlTimerM->Enable(false);
		m_textCtrlTimerS->Enable(false);
		this->opt->timer = true;

		if(log_pi->m_plogbook_window == NULL)
		{
			log_pi->m_plogbook_window =
				new LogbookDialog(log_pi, log_pi->m_timer, log_pi->m_parent_window, wxID_ANY,_("Active Logbook"), wxDefaultPosition, wxSize( opt->dlgWidth,opt->dlgHeight ), wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER);					
		    log_pi->m_plogbook_window->init();
		}
		else
			log_pi->m_plogbook_window->SetTitle(log_pi->m_plogbook_window->GetTitle()+ log_pi->m_plogbook_window->titleExt);

		log_pi->m_plogbook_window->setTitleExt();
		log_pi->m_timer->Start(sec);
	}
	else
	{
		if(log_pi->m_timer->IsRunning())
			log_pi->m_timer->Stop();

		m_textCtrTimerH->Enable(true);
		m_textCtrlTimerM->Enable(true);
		m_textCtrlTimerS->Enable(true);

		this->opt->timer = false;

		if(log_pi->m_plogbook_window != NULL)
			log_pi->m_plogbook_window->SetTitle(log_pi->m_plogbook_window->GetTitle().BeforeFirst('-'));
	}
}

void LogbookOptions::onRadioBtnUTC( wxCommandEvent& ev )
{
	if(ev.IsChecked())
	{
		opt->local = false;
		opt->gpsAuto = false;
		opt->UTC = true;
		this->m_choiceTzIndicator->Enable(false);
		this->m_choiceTzHours->Enable(false);
	}

}
void LogbookOptions::onRadioBtnLocal( wxCommandEvent& ev )
{
	if(ev.IsChecked())
	{
		opt->local = true;
		opt->gpsAuto = false;
		opt->UTC = false;
		this->m_choiceTzIndicator->Enable(true);
		this->m_choiceTzHours->Enable(true); 
	}
}

void LogbookOptions::onRadioBtnGPSAuto( wxCommandEvent& ev )
{
	if(ev.IsChecked())
	{
		opt->local = true;
		opt->gpsAuto = true;
		opt->UTC = false;
		this->m_choiceTzIndicator->Enable(true);
		this->m_choiceTzHours->Enable(true);
		this->m_choiceTzHours->SetSelection(opt->tzHour);
		this->m_choiceTzIndicator->SetSelection(opt->tzIndicator);
		this->m_choiceTzHours->Refresh();
		this->m_choiceTzIndicator->Refresh();

	}
}

void LogbookOptions::onButtonClickInstallHTMLFiles( wxCommandEvent& event )
{
	log_pi->loadLayouts(this);
}

void LogbookOptions::onButtonClickInstallLanguages(wxCommandEvent& ev)
{
	log_pi->loadLanguages(this);
}


void LogbookOptions::onButtonHTMLEditor(wxCommandEvent & ev)
{
	wxFileDialog *openFileDialog = 
			new wxFileDialog(this, _("Set Path to HTML-Editor"), _T(""), _T(""),
										   _T(""), 
										   wxFD_OPEN);

	if (openFileDialog->ShowModal() == wxID_CANCEL)
            return;

	m_textCtrlHTMLEditorPath->SetValue(openFileDialog->GetPath());
	opt->htmlEditor = openFileDialog->GetPath();
}

void LogbookOptions::onButtonClickDataManager(wxCommandEvent& ev)
{
	wxFileDialog *openFileDialog = 
			new wxFileDialog(this, _("Set Path to DataManager"), _T(""), _T(""),
										   _T(""), 
										   wxFD_OPEN);

	if (openFileDialog->ShowModal() == wxID_CANCEL)
            return;

	m_textCtrlDataManager->SetValue(openFileDialog->GetPath());
	opt->dataManager = openFileDialog->GetPath();
}

void LogbookOptions::onButtonClickMail(wxCommandEvent& ev)
{
	wxFileDialog *openFileDialog = 
			new wxFileDialog(this, _("Set Path to MailClient"), _T(""), _T(""),
										   _T(""), 
										   wxFD_OPEN);

	if (openFileDialog->ShowModal() == wxID_CANCEL)
            return;

	m_textCtrlMailClient->SetValue(openFileDialog->GetPath());
	opt->mailClient = openFileDialog->GetPath();
}

void LogbookOptions::onButtonClickODT(wxCommandEvent& ev)
{
	wxFileDialog *openFileDialog = 
			new wxFileDialog(this, _("Set Path to ODT-Editor"), _T(""), _T(""),
										   _T(""), 
										   wxFD_OPEN);

	if (openFileDialog->ShowModal() == wxID_CANCEL)
            return;

	m_textCtrlODTEditor->SetValue(openFileDialog->GetPath());
	opt->odtEditor = openFileDialog->GetPath();
}



void LogbookOptions::onTextEnterm_sKnots( wxCommandEvent& ev )
{
	choicesWind[0] = ev.GetString();
	updateWindChoice();
	m_sMeterSec->SetFocus();
}

void LogbookOptions::onTextEnterm_sMeterSec( wxCommandEvent& ev )
{
	choicesWind[1] = ev.GetString();
	updateWindChoice();
	m_sKmh->SetFocus();
}

void LogbookOptions::onTextEnterm_sKmh( wxCommandEvent& ev )
{
	choicesWind[2] = ev.GetString();
	updateWindChoice();
	m_choiceWind->SetFocus();
}

void LogbookOptions::onTextm_sLiter( wxCommandEvent& event )
{
	wxString t = wxString::Format(_T("%i %s/%s"),wxAtoi(opt->watermaker),m_sLiter->GetValue().c_str(),opt->motorh.c_str());
	this->m_textCtrlWatermaker->SetValue(t);

	t = wxString::Format(_T("%i %s"),wxAtoi(m_textCtrlTankWater->GetValue()),m_sLiter->GetValue().c_str());
	this->m_textCtrlTankWater->SetValue(t);

	t = wxString::Format(_T("%i %s"),wxAtoi(m_textCtrlTankFuel->GetValue()),m_sLiter->GetValue().c_str());
	this->m_textCtrlTankFuel->SetValue(t);

}

void LogbookOptions::OnTextEnterm_textCtrlWatermaker( wxCommandEvent& event )
{
	long a;
	wxString t = m_textCtrlWatermaker->GetValue();
	t.ToLong(&a);
	m_textCtrlWatermaker->Clear();
	t = wxString::Format(_T("%i %s/%s"),a, m_sLiter->GetValue().c_str(),opt->motorh.c_str());

	m_textCtrlWatermaker->SetValue(t);
	m_textCtrlTankFuel->SetFocus();
}

void LogbookOptions::OnTextEnterFuelTank( wxCommandEvent& event )
{
	long a;
	wxString t = m_textCtrlTankFuel->GetValue();
	t.ToLong(&a);
	m_textCtrlTankFuel->Clear();
	t = wxString::Format(_T("%i %s"),a, m_sLiter->GetValue().c_str());

	m_textCtrlTankFuel->SetValue(t);
	m_textCtrlBank1->SetFocus();
}

void LogbookOptions::OnTextEnterWaterTank( wxCommandEvent& event )
{
	long a;
	wxString t = m_textCtrlTankWater->GetValue();
	t.ToLong(&a);
	m_textCtrlTankWater->Clear();
	t = wxString::Format(_T("%i %s"),a, m_sLiter->GetValue().c_str());

	m_textCtrlTankWater->SetValue(t);
	m_textCtrlWatermaker->SetFocus();
}

void LogbookOptions::OnTextEnterBank1( wxCommandEvent& event )
{
	long a;
	wxString t = m_textCtrlBank1->GetValue();
	t.ToLong(&a);
	m_textCtrlBank1->Clear();
	t = wxString::Format(_T("%i %s"),a, opt->ampereh.c_str());

	m_textCtrlBank1->SetValue(t);
	m_textCtrlBank2->SetFocus();
}

void LogbookOptions::onTextEnterBank2( wxCommandEvent& event )
{
	long a;
	wxString t = m_textCtrlBank2->GetValue();
	t.ToLong(&a);
	m_textCtrlBank2->Clear();
	t = wxString::Format(_T("%i %s"),a, opt->ampereh.c_str());

	m_textCtrlBank2->SetValue(t);
	m_textCtrlTankWater->SetFocus();
}

void LogbookOptions::onCeckBoxShowAllLayouts( wxCommandEvent& event )
{
	opt->filterLayout = false;
	m_checkBoxShowOnlySelectedLayouts->SetValue(false);
	updateChoiceBoxes();
}
void LogbookOptions::onCheckBoxShowOnlySelectedLayouts( wxCommandEvent& event )
{
	opt->filterLayout = true;
	opt->layoutPrefix = m_textCtrlLayoutPrefix->GetValue();
	m_checkBoxShowAllLayouts->SetValue(false);
	updateChoiceBoxes();
}

void LogbookOptions::OnCheckBoxMaintenanceRowColoured( wxCommandEvent& event )
{

}

void LogbookOptions::onCheckBoNoGPS( wxCommandEvent& event )
{
	opt->noGPS = m_checkBoxNoGPS->GetValue();
}

void LogbookOptions::OnTextEnterLayoutPrefix( wxCommandEvent& event )
{
	opt->layoutPrefix = m_textCtrlLayoutPrefix->GetValue();
	if(m_checkBoxShowOnlySelectedLayouts->GetValue())
		updateChoiceBoxes();
}

void LogbookOptions::onCheckBoxGuardChanged(wxCommandEvent& ev)
{
	if(log_pi->m_plogbook_window)
		log_pi->m_plogbook_window->logbook->dLastMinute = 
			(long) log_pi->m_plogbook_window->logbook->mCorrectedDateTime.GetMinute()+1;
}

void LogbookOptions::updateChoiceBoxes()
{
	LogbookDialog *dialog = log_pi->m_plogbook_window;

	if(dialog != NULL)
	{
		dialog->loadLayoutChoice(dialog->logbook->layout_locn, dialog->logbookChoice);
		dialog->loadLayoutChoice(dialog->overview->layout_locn, dialog->overviewChoice);
		dialog->loadLayoutChoice(dialog->crewList->layout_locn, dialog->crewChoice);
		dialog->loadLayoutChoice(dialog->boat->layout_locn, dialog->boatChoice);
		dialog->loadLayoutChoice(dialog->maintenance->layout_locnService, dialog->m_choiceSelectLayoutService);
		dialog->loadLayoutChoice(dialog->maintenance->layout_locnRepairs, dialog->m_choiceSelectLayoutService);
		dialog->loadLayoutChoice(dialog->maintenance->layout_locnBuyParts, dialog->m_choiceSelectLayoutService);
	}
}

void LogbookOptions::updateWindChoice()
{
	int s = m_choiceWind->GetSelection();
	for(int i = 0; i < 3; i++)
		m_choiceWind->SetString(i,choicesWind[i]);
	m_choiceWind->SetSelection(s);
}
