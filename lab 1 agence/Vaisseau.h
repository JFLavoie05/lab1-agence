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
		int argent;
		Faction* faction;


public :
	Vaisseau();
	Vaisseau(Faction* faction);
	Vaisseau(int _argent);
	Vaisseau(int _attaque, int _defense, int _vie, int _capacite, Faction* _faction, string _nom);
	
	int getAtt();
	int getDeff();
	int getVie();
	int getExp();
	int getArgent();
	void setAtt(int _attaque);
	void setDeff(int _defense);
	void setVie(int _vie);
	void setExp(int _exp);
	void setArgent(int _argent);
	string getFaction();
	string getNom();

	string to_string();
	~Vaisseau();

};

