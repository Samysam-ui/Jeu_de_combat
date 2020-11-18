#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>

#ifndef personnage_h
#define personnage_h

using namespace std;

#include "Arme.h"


class CCharacter {

public:
	string nom;
	int vitesse;
	int attaque;
	int intelligence;
	int HP;
	int defense;
	float dodge;
	int agilite;

	CWeapon *arme;

	bool isDead;

public:
	//constructor
	CCharacter();

	//destructeur
	~CCharacter();

	//méthode
	void affichageCaracPersonnage();
	void affichageNomPersonnage(int *cpt);

	void creationClasse(string classe);

	virtual void uneFonction(){}

};


#endif