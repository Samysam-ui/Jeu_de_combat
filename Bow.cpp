#include "Bow.h"


CBow::CBow(){}

CBow::CBow(string nomA, int degatA, float critiqueA, int bonusIntA, int bonusHPA, int bonusAglA, int durabiliteA, int nbFlecheA, int coutManaA)
{
	
	nom = nomA;
	degat = degatA;
	critique = critiqueA;
	BonusInt = bonusIntA;
	BonusHP = bonusHPA;
	BonusAgl = bonusAglA;
	nbFleche = nbFlecheA;
	
}

CBow::~CBow(){}