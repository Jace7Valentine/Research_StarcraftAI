#pragma once
#include <BWAPI.h>
#include "PlayerState.h"

class Production
{
public:
	Production();
	Production(char *bo);
	virtual void update(PlayerState *state);
	virtual void predetermineTasks(PlayerState *state);
	virtual void determineTasks(PlayerState *state);
	virtual void showTask();
};

