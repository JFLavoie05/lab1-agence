#include "FactoryVaisseau.h"
#include <string>
#include <iostream>
#include "Guerre.h"
#include "Livraison.h"
#include "Transport.h"
#include "Empire.h"
#include "Rebellion.h"
using namespace std;

	inline int genererNb(int min, int max)
	{
		return(rand() % (max - min + 1)) + max;
	}

Vaisseau* FactoryVaisseau::getRandomVaisseau()
{

	Vaisseau* vaisseau(0);

	Faction* maFaction = getRandomFaction();

	int nbRandom = genererNb(1, 3);

	if (nbRandom == 1)
	{
		vaisseau = new Guerre(maFaction);
	}
	else if (nbRandom == 2)
	{
		vaisseau = new Transport(maFaction);
	}
	else
	{
		vaisseau = new Livraison(maFaction);
	}

	return vaisseau;
}


Faction* FactoryVaisseau::getRandomFaction()
{

	Faction* faction(0);

	

	int nbRandom = genererNb(1, 2);

	if (nbRandom == 1)
	{
		faction = new Empire();
	}
	else if (nbRandom == 2)
	{
		faction = new Rebellion();
	}
	return faction;
}

