#pragma once
#ifndef arme_h
#define arme_h


#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;


class CWeapon {

protected:
	//Attribut
	string nom;
	int degat;
	float critique;

	int BonusHP;
	int BonusInt;
	int BonusAgl;

public:
	CWeapon();
	CWeapon(int ArmeSelectionner);

	~CWeapon();

	void affichageCaracArmes();
	void typeArme(CWeapon weapon);//todo

};


#endif