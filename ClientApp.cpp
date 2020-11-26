/***************************************************************
 * Name:      ClientApp.cpp
 * Purpose:   Code for Application Class
 * Author:    wang_yu_song (wang_yu_song@yeah.net)
 * Created:   2020-11-26
 * Copyright: wang_yu_song (https://github.com/walkerwyl)
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "ClientApp.h"
#include "ClientMain.h"

IMPLEMENT_APP(ClientApp);

bool ClientApp::OnInit()
{
    ClientFrame* frame = new ClientFrame(0L);

    frame->Show();

    return true;
}
