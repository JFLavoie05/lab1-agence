#pragma once
#include <string>
#include "Vaisseau.h"
using namespace std;

class Transport :

	public Vaisseau
{

public:

	Transport();
	~Transport();

	string to_string();
};