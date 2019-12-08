#include "CreerZoneAction.h"

void CreerZoneAction::executer(batiment* bat) {
	string nom;

	cout << "Merci d'entrer le nom de la nouvelle zone : " << endl << endl << "> ";
	cin >> nom;
	cout << endl;

	bat->creerZone(nom);
	cout << "La zone '" + nom + "' est bien cr\202\202e" << endl;
}
