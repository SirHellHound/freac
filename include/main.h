 /* BonkEnc Audio Encoder
  * Copyright (C) 2001-2003 Robert Kausch <robert.kausch@gmx.net>
  *
  * This program is free software; you can redistribute it and/or
  * modify it under the terms of the "GNU General Public License".
  *
  * THIS PACKAGE IS PROVIDED "AS IS" AND WITHOUT ANY EXPRESS OR
  * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
  * WARRANTIES OF MERCHANTIBILITY AND FITNESS FOR A PARTICULAR PURPOSE. */

#ifndef _H_MAIN_
#define _H_MAIN_

#include <smooth.h>
#include "bonkenc.h"

using namespace smooth;
using namespace smooth::GUI;

class bonkEncGUI : public bonkEnc
{
	private:
		Menu		*menu_file;
		Menu		*menu_options;
		Menu		*menu_addsubmenu;
		Menu		*menu_encode;
		Menu		*menu_drives;
		Menu		*menu_seldrive;
		Menu		*menu_database;

		Menubar		*mainWnd_menubar;
		Menubar		*mainWnd_iconbar;
		Titlebar	*mainWnd_titlebar;

		Bool		 ExitProc();
		Void		 DrawProc();
		Void		 Close();
		Void		 About();
		Void		 ConfigureEncoder();
		Void		 ConfigureGeneral();
		Void		 AddFile();
		Void		 AddDragDropFile(String *);
		Void		 RemoveFile();
		Void		 SelectJoblistEntry();
		Void		 ShowHideTitleInfo();
		Void		 UpdateTitleInfo();
		Void		 ReadSpecificCD();
		Void		 SubmitCDDBData();
		Void		 ToggleCDDB();

		Bool		 SetLanguage(String);
	public:
				 bonkEncGUI();
				~bonkEncGUI();
};

#endif
