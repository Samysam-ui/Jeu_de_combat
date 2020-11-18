#include "Archer.h"




CArcher::CArcher()
{}


CArcher::CArcher(string nomP, int vitesseP, int attaqueP, int intelligenceP, int HPP, int defenseP, float dodgeP, int agiliteP)
{
	nom = nomP;
	vitesse = vitesseP;
	attaque = attaqueP;
	intelligence = intelligenceP;
	HP = HPP;
	defense = defenseP;
	dodge = dodgeP;
	agilite = agiliteP;

}

CArcher::~CArcher(){}