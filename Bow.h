#pragma once
#ifndef bow_h
#define bow_h

#include "Ranged.h"


class CBow : public CRanged {

protected:
	//Attribut
	int nbFleche;

public:
	CBow();
	CBow(string nomA, int degatA,	float critiqueA, int bonusIntA, int bonusHPA, int bonusAglA, int durabiliteA, int nbFlecheA,	int coutManaA);

	~CBow();

};


#endif#pragma once
