#include "Station.h"
#include "FactoryVaisseau.h"

Station::Station()
{

}

Station::~Station()
{

}

vector<Vaisseau*> Station::getVaisseauDispo()
{
	return vecVaisseau;
}

void Station::init()
{
	for (int i = 0; i < 3; i++)
	{
		vecVaisseau.push_back(FactoryVaisseau::getRandomVaisseau());
	}
}

void Station::ajouterVaisseau(Vaisseau* vaisseau)
{
	vecVaisseau.push_back(vaisseau);
}