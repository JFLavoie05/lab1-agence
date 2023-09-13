#include <string>
#include <iostream>
#include "Vaisseau.h"
#include <string>
using namespace std;


Vaisseau::Vaisseau(int _attaque, int _defense, int _vie, int _capacite)
{
	attaque = _attaque;
	defense = _defense;
	vie = _vie;
	capacite = _capacite;
}

Vaisseau::~Vaisseau()
{

}

string Vaisseau::to_string()
{
	string info;
	info.append("Le nom du vaisseau est : " + nom);

	return info;
}


