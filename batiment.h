#pragma once
#include <string>
#include <map>
#include "Detecteur.h"

using namespace std;

class batiment
{
public:
	batiment();
	std::map <string, Detecteur* > zones;
	void creerZone(string nom);
	void activerZone(string nom);
	void desactiverZone(string nom);
	void entrerZone(string nom);
};

