#include "entrerZoneAction.h"
#include "Detecteur.h"


void entrerZoneAction::executer(batiment* bat) {
	string nom;

	cout << "Merci d'entrer le nom de la zone ou vous entrez : " << endl << endl;
	cout << "> ";
	cin >> nom;

	bat->entrerZone(nom);
	
	cout << "Vous \210tes bien rentr\202 dans la zone : '" + nom + "'"<< endl;

}
