/***************************************************************
 * Name:      ClientMain.h
 * Purpose:   Defines Application Frame
 * Author:    wang_yu_song (wang_yu_song@yeah.net)
 * Created:   2020-11-26
 * Copyright: wang_yu_song (https://github.com/walkerwyl)
 * License:
 **************************************************************/

#ifndef CLIENTMAIN_H
#define CLIENTMAIN_H



#include "ClientApp.h"


#include "GUIFrame.h"

class ClientFrame: public GUIFrame
{
    public:
        ClientFrame(wxFrame *frame);
        ~ClientFrame();
    private:
        virtual void OnClose(wxCloseEvent& event);
        virtual void OnQuit(wxCommandEvent& event);
        virtual void OnAbout(wxCommandEvent& event);
};

#endif // CLIENTMAIN_H
