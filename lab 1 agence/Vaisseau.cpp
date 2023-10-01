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

int Vaisseau::getAtt()
{
	return attaque;
}

int Vaisseau::getDeff()
{
	return defense;
}

int Vaisseau::getVie()
{
	return vie;
}

int Vaisseau::getExp()
{
	return exp;
}

int Vaisseau::getArgent()
{
	return argent;
}

void Vaisseau::setAtt(int _attaque)
{
	attaque = _attaque;
}

void Vaisseau::setDeff(int _defense)
{
	defense = _defense;
}

void Vaisseau::setVie(int _vie)
{
	vie = _vie;
}

void Vaisseau::setExp(int _exp)
{
	exp = _exp;
}

void Vaisseau::setArgent(int _argent)
{
	argent = _argent;
}

string Vaisseau::getFaction()
{
	return faction->getNom();
}

string Vaisseau::getNom()
{
	return nom;
}

Vaisseau::Vaisseau() 
{

}

Vaisseau::Vaisseau(Faction* _faction)
{
	faction = _faction;
}

Vaisseau::Vaisseau(int _argent)
{
	argent = _argent;
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


