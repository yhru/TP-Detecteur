#pragma once
#include <iostream>
#include "Detecteur.h"
#include "batiment.h"

using namespace std;

class Action
{
public:
	virtual void executer(batiment* bat) = 0;
};

