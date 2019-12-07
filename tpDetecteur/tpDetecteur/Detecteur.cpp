#include "Detecteur.h"
#include <string>
#include <iostream>


void Detecteur::activer()
{
	this->onOff = true;
}

void Detecteur::desactiver()
{
	this->onOff = false;
}

void Detecteur::detecter()
{
	if (this->onOff == true) { 
		cout << "Le d\202tecteur sonne !" << endl;
	}
	else {
		cout << "Le d\202tecteur ne sonne pas." << endl;
	}
}
