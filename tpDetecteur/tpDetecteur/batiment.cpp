#include "batiment.h"
#include "Detecteur.h"
#include <iostream>

batiment::batiment()
{
}

void batiment::creerZone(string nom)
{
	zones[nom] = new Detecteur();
}

void batiment::activerZone(string nom)
{
	zones[nom]->activer();
}

void batiment::desactiverZone(string nom)
{
	zones[nom]->desactiver();
}

void batiment::entrerZone(string nom)
{
	zones[nom]->detecter();
}
