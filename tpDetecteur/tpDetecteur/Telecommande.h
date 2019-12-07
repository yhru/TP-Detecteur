#pragma once
#include <iostream>
#include <map>
#include "batiment.h"
#include "Action.h"


using namespace std;

class Telecommande
{
public:
	Telecommande(batiment* bat);
	void ajouterAction(string nom, Action* action);
	void demarrer();
	map<string, Action*> actions;
	batiment* bat;
};

