#include "Faction.h"

Faction::Faction() : attaque(5), defense(2), vie(3), capacite(1)
{

}

Faction::~Faction()
{

}

Faction::Faction(int _attaque, int _defense, int _vie, int _capacite)
{
	attaque = _attaque;
	defense = _defense;
	vie = _vie;
	capacite = _capacite;
}

std::string Faction::getNom()
{
	string info;
	info.append(nom);


	return info;
}
