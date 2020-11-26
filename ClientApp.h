/***************************************************************
 * Name:      ClientApp.h
 * Purpose:   Defines Application Class
 * Author:    wang_yu_song (wang_yu_song@yeah.net)
 * Created:   2020-11-26
 * Copyright: wang_yu_song (https://github.com/walkerwyl)
 * License:
 **************************************************************/

#ifndef CLIENTAPP_H
#define CLIENTAPP_H

#include <wx-3.1/wx/app.h>

class ClientApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // CLIENTAPP_H
