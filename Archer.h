#pragma once


#include "Personnage.h"


class CArcher : public CCharacter {

protected:

	int viser; //capacit� de l'archer de multiplier son agilit� ssi equip� d'un arc
	int gu�rison; //capacit� a gu�rir du poison, utilisable 3x max par combat


public:
	CArcher();
	CArcher(string nomP, int vitesseP, int attaqueP, int intelligenceP, int HPP, int defenseP, float dodgeP, int agiliteP);


	~CArcher();

};