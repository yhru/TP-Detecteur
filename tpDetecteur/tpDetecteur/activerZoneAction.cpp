#include "activerZoneAction.h"

void activerZoneAction::executer(batiment* bat) {
	string nom;

	cout << "Merci d'entrer le nom de la zone \205 activer : "<< endl << endl << "> ";
	cin >> nom;

	bat->activerZone(nom);
	cout << "L'alarme de la zone '" + nom + "' est maintenant active" << endl;
}
