#include <string>
#include <iostream>
#include "Vaisseau.h"
using namespace std;


Vaisseau::Vaisseau(int _attaque, int _defense, int _vie, int _capacite, Faction* _faction, string _nom)
{
	attaque = _attaque;
	defense = _defense;
	vie = _vie;
	capacite = _capacite;
	faction = _faction;
	nom = _nom;
}

Vaisseau::Vaisseau() 
{

}

Vaisseau::Vaisseau(Faction* _faction)
{
	faction = _faction;
}

Vaisseau::~Vaisseau()
{
	delete faction;
}

string Vaisseau::to_string()
{
	string info = "";
	info.append("Le nom du vaisseau est : " + nom + "\n ");
	

	return info;
}


