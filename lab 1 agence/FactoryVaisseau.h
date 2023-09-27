#pragma once
#include <string>
#include <iostream>
using namespace std;
class Vaisseau;
class Faction;


class FactoryVaisseau
{
public : 
	static Vaisseau* getRandomVaisseau();


private:
	static Faction* getRandomFaction();

};

