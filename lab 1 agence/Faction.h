#pragma once
#include <string>
using namespace std;

class Faction
{

protected:

	int attaque;
	int defense;
	int vie;
	int capacite;
	string nom;


public:

	Faction();

	Faction(int attaque, int defense, int vie, int capacite);

	string getNom();

	~Faction();
};

