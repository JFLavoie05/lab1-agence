#include <string>
#include <iostream>
#include "Transport.h"
#include "Faction.h"
using namespace std;

Transport::~Transport() 
{

}

Transport::Transport(Faction* _faction) : Vaisseau(0, 250, 500, 1500, faction, "Baguette")
{
	faction = _faction;
	nom = "Baguette";
}

Transport:: Transport() : Vaisseau(0,250,500,1500, faction, "Baguette")
{

}


string Transport::to_string()
{
	string info = Vaisseau::to_string();
	info.append("Je suis pour le transport");

	return info;
}
