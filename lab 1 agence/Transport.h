#pragma once
#include <string>
#include "Vaisseau.h"
using namespace std;

class Transport :

	public Vaisseau
{

public:
	Transport(Faction* faction);
	Transport();
	~Transport();

	string to_string();
};