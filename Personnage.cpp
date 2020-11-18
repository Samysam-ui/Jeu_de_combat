#include "Personnage.h"
#include "Mage.h"
#include "Warrior.h"
#include "Archer.h"
#include "Rogue.h"
#include <sstream>

//constructeur
CCharacter::CCharacter()
{


}

//destructeur
CCharacter::~CCharacter(){}


void CCharacter::affichageCaracPersonnage()
{

	cout << "nom : " << nom << endl
		<< "vitesse : " << vitesse << endl
		<< "dodge : " << dodge << endl
		<< "attak : " << attaque << endl
		<< "HP : " << HP << endl
		<< "defense : " << defense << endl
		<< "intellingence : " << intelligence << endl
		<< "agilite : " << agilite << endl;

}

void CCharacter::affichageNomPersonnage(int *cpt)
{
	cout << "personnage " << *cpt << " : " << nom << endl;

}

