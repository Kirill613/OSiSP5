#pragma once

#include "Common.h"

struct ProcessEventItem {
	ProcessEventInfo eventInfo;
	LIST_ENTRY readListEntry;
	LIST_ENTRY toSearchListEntry;
	int linksCount;
};

struct Globals {
	LIST_ENTRY readListHead;
	LIST_ENTRY SearchListHead;
	FAST_MUTEX mutex;
};