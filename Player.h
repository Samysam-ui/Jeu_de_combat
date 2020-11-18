#pragma once
#ifndef player_h
#define player_h


//include de la classe Arme
#include "Personnage.h"


class CPlayer {


protected:
	//Attribut
	vector<CCharacter> team;//tableau contenant les personnages d'une �quipe
	int ID_player;//pour savoir le tour du joueur
	int teamMax;//pour savoir le nombre total de personne dans une �quipe




public:
	//constructor
	CPlayer();
	CPlayer(int ID_joueur);
	//destructeur
	~CPlayer();

	//m�thode
	void affichageListMembreEquipe();
	void ajoutEquipier(CCharacter P);
};


#endif