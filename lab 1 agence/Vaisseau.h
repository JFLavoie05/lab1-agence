#pragma once
#include <string>
#include <iostream>

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


public :
	Vaisseau();
	Vaisseau(int attaque, int defense, int vie, int capacite);
	
	int getAtt();
	int getDeff();
	int getVie();

	string to_string();
	~Vaisseau();

};

