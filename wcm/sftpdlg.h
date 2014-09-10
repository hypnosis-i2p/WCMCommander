#pragma once

#include "vfs-sftp.h"

struct PromptCBData
{
	const unicode_t* header;
	const unicode_t* message;
	FSPromptData* prompts;
	int count;
	NCDialogParent* parent;
};

bool GetPromptAnswer( PromptCBData* data );
bool GetSftpLogon( NCDialogParent* parent, FSSftpParam& params );
