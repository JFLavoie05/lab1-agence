#include <string>
#include <iostream>
#include "Guerre.h"
#include "Faction.h"
using namespace std;

Guerre::~Guerre() 
{

}

Guerre::Guerre(Faction* _faction) : Vaisseau(50, 50, 10, 250, faction, "Baguette")
{
	faction = _faction;
	nom = "Baguette";
}

Guerre::Guerre() : Vaisseau(50, 50, 10, 250, faction, "Baguette")
{
	nom = "Baguette";
}

string Guerre::to_string()
{
	string info = Vaisseau::to_string();
	info.append("Je suis pour la guerre");

	return info;
}


