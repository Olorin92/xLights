#include "VideoPanel.h"
#include "EffectPanelUtils.h"
#include "UtilFunctions.h"

//(*InternalHeaders(VideoPanel)
#include <wx/artprov.h>
#include <wx/bitmap.h>
#include <wx/bmpbuttn.h>
#include <wx/checkbox.h>
#include <wx/choice.h>
#include <wx/filepicker.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/slider.h>
#include <wx/stattext.h>
#include <wx/string.h>
#include <wx/textctrl.h>
//*)

//(*IdInit(VideoPanel)
const long VideoPanel::ID_FILEPICKERCTRL_Video_Filename = wxNewId();
const long VideoPanel::ID_STATICTEXT_Video_Starttime = wxNewId();
const long VideoPanel::IDD_SLIDER_Video_Starttime = wxNewId();
const long VideoPanel::ID_TEXTCTRL_Video_Starttime = wxNewId();
const long VideoPanel::ID_STATICTEXT1 = wxNewId();
const long VideoPanel::ID_TEXTCTRL_Duration = wxNewId();
const long VideoPanel::ID_STATICTEXT_Video_DurationTreatment = wxNewId();
const long VideoPanel::ID_CHOICE_Video_DurationTreatment = wxNewId();
const long VideoPanel::ID_STATICTEXT2 = wxNewId();
const long VideoPanel::IDD_SLIDER_Video_Speed = wxNewId();
const long VideoPanel::ID_VALUECURVE_Video_Speed = wxNewId();
const long VideoPanel::ID_TEXTCTRL_Video_Speed = wxNewId();
const long VideoPanel::ID_CHECKBOX_Video_AspectRatio = wxNewId();
const long VideoPanel::ID_CHECKBOX_SynchroniseWithAudio = wxNewId();
const long VideoPanel::ID_STATICTEXT_Video_CropLeft = wxNewId();
const long VideoPanel::IDD_SLIDER_Video_CropLeft = wxNewId();
const long VideoPanel::ID_TEXTCTRL_Video_CropLeft = wxNewId();
const long VideoPanel::ID_STATICTEXT_Video_CropRight = wxNewId();
const long VideoPanel::IDD_SLIDER_Video_CropRight = wxNewId();
const long VideoPanel::ID_TEXTCTRL_Video_CropRight = wxNewId();
const long VideoPanel::ID_STATICTEXT_Video_CropTop = wxNewId();
const long VideoPanel::IDD_SLIDER_Video_CropTop = wxNewId();
const long VideoPanel::ID_TEXTCTRL_Video_CropTop = wxNewId();
const long VideoPanel::ID_STATICTEXT_Video_CropBottom = wxNewId();
const long VideoPanel::IDD_SLIDER_Video_CropBottom = wxNewId();
const long VideoPanel::ID_TEXTCTRL_Video_CropBottom = wxNewId();
const long VideoPanel::ID_CHECKBOX_Video_TransparentBlack = wxNewId();
const long VideoPanel::IDD_SLIDER_Video_TransparentBlack = wxNewId();
const long VideoPanel::ID_TEXTCTRL_Video_TransparentBlack = wxNewId();
//*)

wxDEFINE_EVENT(EVT_VIDEODETAILS, wxCommandEvent);

BEGIN_EVENT_TABLE(VideoPanel,wxPanel)
	//(*EventTable(VideoPanel)
	//*)
    EVT_COMMAND(wxID_ANY, EVT_VIDEODETAILS, VideoPanel::SetVideoDetails)
END_EVENT_TABLE()

VideoPanel::VideoPanel(wxWindow* parent)
{
	//(*Initialize(VideoPanel)
	wxFlexGridSizer* FlexGridSizer1;
	wxFlexGridSizer* FlexGridSizer2;
	wxFlexGridSizer* FlexGridSizer3;
	wxFlexGridSizer* FlexGridSizer42;
	wxFlexGridSizer* FlexGridSizer4;
	wxFlexGridSizer* FlexGridSizer5;
	wxFlexGridSizer* FlexGridSizer6;
	wxFlexGridSizer* FlexGridSizer7;
	wxFlexGridSizer* FlexGridSizer8;

	Create(parent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("wxID_ANY"));
	FlexGridSizer42 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer42->AddGrowableCol(0);
	FlexGridSizer3 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer3->AddGrowableCol(0);
	FlexGridSizer1 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer1->AddGrowableCol(0);
	FilePicker_Video_Filename = new xlVideoFilePickerCtrl(this, ID_FILEPICKERCTRL_Video_Filename, wxEmptyString, wxEmptyString, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxFLP_FILE_MUST_EXIST|wxFLP_OPEN|wxFLP_USE_TEXTCTRL, wxDefaultValidator, _T("ID_FILEPICKERCTRL_Video_Filename"));
	FlexGridSizer1->Add(FilePicker_Video_Filename, 1, wxALL|wxEXPAND, 2);
	FlexGridSizer3->Add(FlexGridSizer1, 1, wxEXPAND, 2);
	FlexGridSizer2 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer2->AddGrowableCol(1);
	StaticText8 = new wxStaticText(this, ID_STATICTEXT_Video_Starttime, _("Start Time"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT_Video_Starttime"));
	FlexGridSizer2->Add(StaticText8, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
	Slider_Video_Starttime = new BulkEditSliderF2(this, IDD_SLIDER_Video_Starttime, 0, 0, 20, wxDefaultPosition, wxSize(200,-1), 0, wxDefaultValidator, _T("IDD_SLIDER_Video_Starttime"));
	FlexGridSizer2->Add(Slider_Video_Starttime, 1, wxALL|wxEXPAND, 2);
	TextCtrl_Video_Starttime = new BulkEditTextCtrlF2(this, ID_TEXTCTRL_Video_Starttime, _("0.0"), wxDefaultPosition, wxDLG_UNIT(this,wxSize(40,-1)), wxTE_RIGHT, wxDefaultValidator, _T("ID_TEXTCTRL_Video_Starttime"));
	FlexGridSizer2->Add(TextCtrl_Video_Starttime, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
	FlexGridSizer3->Add(FlexGridSizer2, 1, wxEXPAND, 2);
	FlexGridSizer4 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer4->AddGrowableCol(0);
	FlexGridSizer5 = new wxFlexGridSizer(0, 2, 0, 0);
	FlexGridSizer5->AddGrowableCol(1);
	StaticText6 = new wxStaticText(this, ID_STATICTEXT1, _("Duration"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	FlexGridSizer5->Add(StaticText6, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
	TextCtrl2 = new wxTextCtrl(this, ID_TEXTCTRL_Duration, _("0:00:00.000"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RIGHT, wxDefaultValidator, _T("ID_TEXTCTRL_Duration"));
	TextCtrl2->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_3DLIGHT));
	FlexGridSizer5->Add(TextCtrl2, 1, wxALL|wxEXPAND, 2);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT_Video_DurationTreatment, _("Duration Treatment"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT_Video_DurationTreatment"));
	FlexGridSizer5->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
	Choice_Video_DurationTreatment = new BulkEditChoice(this, ID_CHOICE_Video_DurationTreatment, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Video_DurationTreatment"));
	Choice_Video_DurationTreatment->SetSelection( Choice_Video_DurationTreatment->Append(_("Normal")) );
	Choice_Video_DurationTreatment->Append(_("Loop"));
	Choice_Video_DurationTreatment->Append(_("Slow/Accelerate"));
	Choice_Video_DurationTreatment->Append(_("Manual"));
	FlexGridSizer5->Add(Choice_Video_DurationTreatment, 1, wxALL|wxEXPAND, 2);
	FlexGridSizer4->Add(FlexGridSizer5, 1, wxALL|wxEXPAND, 2);
	FlexGridSizer8 = new wxFlexGridSizer(0, 4, 0, 0);
	FlexGridSizer8->AddGrowableCol(1);
	StaticText7 = new wxStaticText(this, ID_STATICTEXT2, _("Speed"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	FlexGridSizer8->Add(StaticText7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Slider_Video_Speed = new BulkEditSliderF2(this, IDD_SLIDER_Video_Speed, 100, 1, 1000, wxDefaultPosition, wxSize(200,-1), 0, wxDefaultValidator, _T("IDD_SLIDER_Video_Speed"));
	FlexGridSizer8->Add(Slider_Video_Speed, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton_Video_Speed = new BulkEditValueCurveButton(this, ID_VALUECURVE_Video_Speed, wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("xlART_valuecurve_notselected")),wxART_BUTTON), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_VALUECURVE_Video_Speed"));
	FlexGridSizer8->Add(BitmapButton_Video_Speed, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_Video_Speed = new BulkEditTextCtrlF2(this, ID_TEXTCTRL_Video_Speed, _("1.00"), wxDefaultPosition, wxDLG_UNIT(this,wxSize(40,-1)), wxTE_RIGHT, wxDefaultValidator, _T("ID_TEXTCTRL_Video_Speed"));
	FlexGridSizer8->Add(TextCtrl_Video_Speed, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer4->Add(FlexGridSizer8, 1, wxALL|wxEXPAND, 2);
	CheckBox_Video_AspectRatio = new BulkEditCheckBox(this, ID_CHECKBOX_Video_AspectRatio, _("Maintain Aspect Ratio"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Video_AspectRatio"));
	CheckBox_Video_AspectRatio->SetValue(false);
	FlexGridSizer4->Add(CheckBox_Video_AspectRatio, 1, wxALL|wxEXPAND, 2);
	CheckBox_SynchroniseWithAudio = new BulkEditCheckBox(this, ID_CHECKBOX_SynchroniseWithAudio, _("Use sequence audio file as video file and synchronise"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_SynchroniseWithAudio"));
	CheckBox_SynchroniseWithAudio->SetValue(false);
	FlexGridSizer4->Add(CheckBox_SynchroniseWithAudio, 1, wxALL|wxEXPAND, 2);
	FlexGridSizer6 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer6->AddGrowableCol(1);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT_Video_CropLeft, _("Crop Left"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT_Video_CropLeft"));
	FlexGridSizer6->Add(StaticText2, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
	Slider_Video_CropLeft = new BulkEditSlider(this, IDD_SLIDER_Video_CropLeft, 0, 0, 100, wxDefaultPosition, wxSize(200,-1), 0, wxDefaultValidator, _T("IDD_SLIDER_Video_CropLeft"));
	FlexGridSizer6->Add(Slider_Video_CropLeft, 1, wxALL|wxEXPAND, 2);
	TextCtrl_Video_CropLeft = new BulkEditTextCtrl(this, ID_TEXTCTRL_Video_CropLeft, _("0"), wxDefaultPosition, wxDLG_UNIT(this,wxSize(40,-1)), wxTE_RIGHT, wxDefaultValidator, _T("ID_TEXTCTRL_Video_CropLeft"));
	FlexGridSizer6->Add(TextCtrl_Video_CropLeft, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT_Video_CropRight, _("Crop Right"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT_Video_CropRight"));
	FlexGridSizer6->Add(StaticText3, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
	Slider_Video_CropRight = new BulkEditSlider(this, IDD_SLIDER_Video_CropRight, 100, 0, 100, wxDefaultPosition, wxSize(200,-1), 0, wxDefaultValidator, _T("IDD_SLIDER_Video_CropRight"));
	FlexGridSizer6->Add(Slider_Video_CropRight, 1, wxALL|wxEXPAND, 2);
	TextCtrl_Video_CropRight = new BulkEditTextCtrl(this, ID_TEXTCTRL_Video_CropRight, _("100"), wxDefaultPosition, wxDLG_UNIT(this,wxSize(40,-1)), wxTE_RIGHT, wxDefaultValidator, _T("ID_TEXTCTRL_Video_CropRight"));
	FlexGridSizer6->Add(TextCtrl_Video_CropRight, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT_Video_CropTop, _("Crop Top"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT_Video_CropTop"));
	FlexGridSizer6->Add(StaticText4, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
	Slider_Video_CropTop = new BulkEditSlider(this, IDD_SLIDER_Video_CropTop, 100, 0, 100, wxDefaultPosition, wxSize(200,-1), 0, wxDefaultValidator, _T("IDD_SLIDER_Video_CropTop"));
	FlexGridSizer6->Add(Slider_Video_CropTop, 1, wxALL|wxEXPAND, 2);
	TextCtrl_Video_CropTop = new BulkEditTextCtrl(this, ID_TEXTCTRL_Video_CropTop, _("100"), wxDefaultPosition, wxDLG_UNIT(this,wxSize(40,-1)), wxTE_RIGHT, wxDefaultValidator, _T("ID_TEXTCTRL_Video_CropTop"));
	FlexGridSizer6->Add(TextCtrl_Video_CropTop, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
	StaticText5 = new wxStaticText(this, ID_STATICTEXT_Video_CropBottom, _("Crop Bottom"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT_Video_CropBottom"));
	FlexGridSizer6->Add(StaticText5, 1, wxALL|wxALIGN_LEFT, 2);
	Slider_Video_CropBottom = new BulkEditSlider(this, IDD_SLIDER_Video_CropBottom, 0, 0, 100, wxDefaultPosition, wxSize(200,-1), 0, wxDefaultValidator, _T("IDD_SLIDER_Video_CropBottom"));
	FlexGridSizer6->Add(Slider_Video_CropBottom, 1, wxALL|wxEXPAND, 2);
	TextCtrl_Video_CropBottom = new BulkEditTextCtrl(this, ID_TEXTCTRL_Video_CropBottom, _("0"), wxDefaultPosition, wxDLG_UNIT(this,wxSize(40,-1)), wxTE_RIGHT, wxDefaultValidator, _T("ID_TEXTCTRL_Video_CropBottom"));
	FlexGridSizer6->Add(TextCtrl_Video_CropBottom, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
	FlexGridSizer4->Add(FlexGridSizer6, 1, wxALL|wxEXPAND, 2);
	FlexGridSizer7 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer7->AddGrowableCol(1);
	CheckBox_TransparentBlack = new BulkEditCheckBox(this, ID_CHECKBOX_Video_TransparentBlack, _("Transparent Black"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Video_TransparentBlack"));
	CheckBox_TransparentBlack->SetValue(false);
	FlexGridSizer7->Add(CheckBox_TransparentBlack, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Slider1 = new BulkEditSlider(this, IDD_SLIDER_Video_TransparentBlack, 0, 0, 300, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("IDD_SLIDER_Video_TransparentBlack"));
	FlexGridSizer7->Add(Slider1, 1, wxALL|wxEXPAND, 5);
	TextCtrl1 = new BulkEditTextCtrl(this, ID_TEXTCTRL_Video_TransparentBlack, _("0"), wxDefaultPosition, wxDLG_UNIT(this,wxSize(40,-1)), wxTE_RIGHT, wxDefaultValidator, _T("ID_TEXTCTRL_Video_TransparentBlack"));
	FlexGridSizer7->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer4->Add(FlexGridSizer7, 1, wxALL|wxEXPAND, 5);
	FlexGridSizer3->Add(FlexGridSizer4, 1, wxEXPAND, 2);
	FlexGridSizer42->Add(FlexGridSizer3, 1, wxEXPAND, 2);
	SetSizer(FlexGridSizer42);
	FlexGridSizer42->Fit(this);
	FlexGridSizer42->SetSizeHints(this);

	Connect(ID_FILEPICKERCTRL_Video_Filename,wxEVT_COMMAND_FILEPICKER_CHANGED,(wxObjectEventFunction)&VideoPanel::OnFilePicker_Video_FilenameFileChanged);
	Connect(ID_CHOICE_Video_DurationTreatment,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&VideoPanel::OnChoice_Video_DurationTreatmentSelect);
	Connect(ID_VALUECURVE_Video_Speed,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&VideoPanel::OnVCButtonClick);
	Connect(ID_CHECKBOX_SynchroniseWithAudio,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&VideoPanel::OnCheckBox_SynchroniseWithAudioClick);
	//*)

    SetName("ID_PANEL_Video");

    Connect(wxID_ANY, EVT_VC_CHANGED, (wxObjectEventFunction)&VideoPanel::OnVCChanged, 0, this);

    BitmapButton_Video_Speed->GetValue()->SetLimits(VIDEO_SPEED_MIN, VIDEO_SPEED_MAX);
    BitmapButton_Video_Speed->GetValue()->SetDivisor(VIDEO_SPEED_DIVISOR);

    Slider_Video_Starttime->SetSupportsBulkEdit(false);
    TextCtrl_Video_Starttime->SetSupportsBulkEdit(false);
    TextCtrl_Video_Starttime->SetValue("0.00");
	CheckBox_Video_AspectRatio->SetValue(false);

	ValidateWindow();
}

VideoPanel::~VideoPanel()
{
	//(*Destroy(VideoPanel)
	//*)
}

void VideoPanel::AddVideoTime(std::string fn, unsigned long ms) {
    std::unique_lock<std::mutex> locker(lock);
    videoTimeCache[fn] = ms;

	// If it is not correct then set it
	if (Slider_Video_Starttime->GetMax() != ms)
	{
		Slider_Video_Starttime->SetMax(ms / 10);
	}

    TextCtrl2->SetValue(FORMATTIME(ms));
}

PANEL_EVENT_HANDLERS(VideoPanel)

void VideoPanel::OnFilePicker_Video_FilenameFileChanged(wxFileDirPickerEvent& event) {
    std::unique_lock<std::mutex> locker(lock);
    wxFileName fn = FilePicker_Video_Filename->GetFileName();
    int i = videoTimeCache[fn.GetFullPath().ToStdString()];
    if (i > 0) {
        Slider_Video_Starttime->SetMax(i);
        TextCtrl2->SetValue(FORMATTIME(i));
    } else {
        Slider_Video_Starttime->SetMax(1);
        TextCtrl2->SetValue(FORMATTIME(0));
    }
}

void VideoPanel::OnCheckBox_SynchroniseWithAudioClick(wxCommandEvent& event)
{
    ValidateWindow();
}

void VideoPanel::SetVideoDetails(wxCommandEvent& event)
{
    AddVideoTime(event.GetString().ToStdString(), event.GetInt());
}

void VideoPanel::ValidateWindow()
{
    if (CheckBox_SynchroniseWithAudio->GetValue())
    {
        Slider_Video_Starttime->Enable(false);
        TextCtrl_Video_Starttime->Enable(false);
        Choice_Video_DurationTreatment->Enable(false);
        FilePicker_Video_Filename->Enable(false);
    }
    else
    {
        Slider_Video_Starttime->Enable(true);
        TextCtrl_Video_Starttime->Enable(true);
        Choice_Video_DurationTreatment->Enable(true);
        FilePicker_Video_Filename->Enable(true);
    }

    if (Choice_Video_DurationTreatment->GetStringSelection() == "Manual")
    {
        Slider_Video_Speed->Enable();
        TextCtrl_Video_Speed->Enable();
        BitmapButton_Video_Speed->Enable();
    }
    else
    {
        Slider_Video_Speed->Disable();
        TextCtrl_Video_Speed->Disable();
        BitmapButton_Video_Speed->Disable();
    }
}

void VideoPanel::OnChoice_Video_DurationTreatmentSelect(wxCommandEvent& event)
{
    ValidateWindow();
}
