#include "desactiverZoneAction.h"

void desactiverZoneAction::executer(batiment* bat) {
	string nom;

	cout << "Merci d'entrer le nom de la zone \205 d\202sactiver : ";
	cin >> nom;

	bat->desactiverZone(nom);
	cout << "L'alarme de la zone '" + nom + "' est maintenant inactive" << endl;

}
