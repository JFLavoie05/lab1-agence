#pragma once
#include "Vaisseau.h"
class Livraison :

	public Vaisseau
{
public:
	Livraison();
	Livraison(Faction* faction);
	~Livraison();

	string to_string();
};
