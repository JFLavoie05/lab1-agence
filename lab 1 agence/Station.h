#pragma once
#include <string>
#include <vector>
#include "Vaisseau.h"
using namespace std;
class Station
{
protected :
	int platinumDisponible;
	int vieStation;
	vector<Vaisseau*> vecVaisseau;


public :
	Station();
	~Station();
	vector<Vaisseau*> getVaisseauDispo();
	void init();
	void ajouterVaisseau(Vaisseau* vaisseau);
};

