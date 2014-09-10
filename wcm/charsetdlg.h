#pragma once

#include "ncdialogs.h"

bool SelectCharset( NCDialogParent* parent, int* pCharsetId, int currentId = 0 );
bool SelectOperCharset( NCDialogParent* parent, int* pCharsetId, int currentId = 0 );

void InitOperCharsets();
int GetFirstOperCharsetId();
int GetNextOperCharsetId( int id );
