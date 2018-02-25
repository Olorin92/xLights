#ifndef SEQUENCEVIDEOPANEL_H
#define SEQUENCEVIDEOPANEL_H

#include <memory>
#include <string>

class SequenceVideoPreview;
class VideoReader;

//(*Headers(SequenceVideoPanel)
#include <wx/panel.h>
//*)

class SequenceVideoPanel: public wxPanel
{
	public:

		SequenceVideoPanel(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~SequenceVideoPanel();

		//(*Declarations(SequenceVideoPanel)
		//*)

      void SetMediaPath( const std::string& path );
      void UpdateVideo( int currentTime );

	protected:

		//(*Identifiers(SequenceVideoPanel)
		//*)

	private:

		//(*Handlers(SequenceVideoPanel)
		//*)

		DECLARE_EVENT_TABLE()

      void Resized( wxSizeEvent& evt );

      std::string                   _Path;
      std::unique_ptr<VideoReader>  _VideoReader;
      bool                          _IsValidVideo;
      int                           _VideoWidth;
      int                           _VideoHeight;
      int                           _VideoLength;
      SequenceVideoPreview *        _VideoPreview;
};

#endif