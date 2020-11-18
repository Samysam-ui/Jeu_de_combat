#include "Personnage.h"
#include "Arme.h"

//constructeur
CWeapon::CWeapon() {}

CWeapon::CWeapon(int ArmeSelectionner) {

	


}



//destructeur
CWeapon::~CWeapon() {};


void CWeapon::affichageCaracArmes()
{
	cout << "arme" << endl
		<< "nom : " << nom << endl
		<< "degat : " << degat << endl
		<< "crit : " << critique << endl
		<< "HP : " << BonusHP << endl
		<< "Int : " << BonusInt << endl
		<< "Agl : " << BonusAgl << endl;

}
