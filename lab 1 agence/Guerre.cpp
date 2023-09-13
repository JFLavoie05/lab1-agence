#include <string>
#include <iostream>
#include "Guerre.h"
using namespace std;

guerre::~guerre() 
{

}

guerre::guerre() : Vaisseau(50, 50, 10, 250)
{

}

string guerre::to_string()
{
	string info = Vaisseau::to_string();
	info.append("Je suis pour la guerre");

	return info;
}


