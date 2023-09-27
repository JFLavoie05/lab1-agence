#pragma once
#include <string>
#include <iostream>
#include "Faction.h"

using namespace std;


class Vaisseau
{
	protected:
		int attaque;
		int defense;
		int vie;
		int capacite;
		string nom;
		int niveau;
		int exp;
		Faction* faction;


public :
	Vaisseau();
	Vaisseau(Faction* faction);
	Vaisseau(int _attaque, int _defense, int _vie, int _capacite, Faction* _faction, string _nom);
	
	int getAtt();
	int getDeff();
	int getVie();

	string to_string();
	~Vaisseau();

};

