#pragma once
#include <string>
#include "Vaisseau.h"
class Guerre :

	public Vaisseau
{
public:
	Guerre();
	Guerre(Faction* faction);
	~Guerre();
	string to_string();
};
