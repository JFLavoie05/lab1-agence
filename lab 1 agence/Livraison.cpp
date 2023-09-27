#include <string>
#include <iostream>
#include "livraison.h"
#include "Faction.h"
using namespace std;


Livraison::~Livraison() 
{

}

Livraison::Livraison(Faction* _faction)
{
	faction = _faction;
	nom = "Baguette";
}

Livraison::Livraison() : Vaisseau(10,250,100,1000, faction, "Baguette")
{
	nom = "Baguette";
}

string Livraison::to_string()
{
	string info = Vaisseau::to_string();
	info.append("Je suis pour la livraison");

	return info;
}
