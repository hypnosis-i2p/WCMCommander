#ifndef DIRCALC_H
#define DIRCALC_H

#include "fileopers.h"
#include "ncdialogs.h"
#include "operwin.h"

bool DirCalc( clPtr<FS> f, FSPath& path, clPtr<FSList> list, NCDialogParent* parent );

#endif
