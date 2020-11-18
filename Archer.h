#pragma once


#include "Personnage.h"


class CArcher : public CCharacter {

protected:

	int viser; //capacité de l'archer de multiplier son agilité ssi equipé d'un arc
	int guérison; //capacité a guérir du poison, utilisable 3x max par combat


public:
	CArcher();
	CArcher(string nomP, int vitesseP, int attaqueP, int intelligenceP, int HPP, int defenseP, float dodgeP, int agiliteP);


	~CArcher();

};