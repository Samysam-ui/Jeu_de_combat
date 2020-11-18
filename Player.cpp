#include "Player.h"

//constructeur
CPlayer::CPlayer() {}

CPlayer::CPlayer(int ID_Joueur) {

	ID_player = ID_Joueur;
}


//destructeur
CPlayer::~CPlayer() {}


void CPlayer::ajoutEquipier(CCharacter P)
{
	team.push_back(P);
}


void CPlayer::affichageListMembreEquipe()
{
	int cpt = 1; //permet de savoir à quel position se trouve le personnage
	if (this->ID_player == 1)
	{
		cout << "--------------------Team 1-----------------------" << endl;
	}
	else
		cout << "--------------------Team 2-----------------------" << endl;

	for (vector<CCharacter>::iterator it = team.begin(); it != team.end(); ++it)
	{
		it->affichageNomPersonnage(&cpt);
		cout << endl;
		cpt++;
	}

	cout << "-------------------------------------------------" << endl;

}


