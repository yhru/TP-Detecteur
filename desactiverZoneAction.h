#pragma once
#include "Action.h"

class desactiverZoneAction :public Action
{
public:
	virtual void executer(batiment* bat);
};

