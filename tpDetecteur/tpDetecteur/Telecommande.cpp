#include "Telecommande.h"

Telecommande::Telecommande(batiment* bat)
{
	this->bat = bat;
}

void Telecommande::ajouterAction(string nom, Action* action)
{
	this->actions[nom] = action;
}

void Telecommande::demarrer()
{
	cout << "[TP DETECTEUR]" << endl;
	cout << endl;
	string nomAction;
	while (nomAction != "stop")
	{
		cout << "*****" << endl;
		cout << "Mot clef de l'action : " << endl << "[creer / entrer / activer / desactiver]" << endl << endl;
		cout << "> ";
		cin >> nomAction;
		actions[nomAction]->executer(this->bat);
	}
}
