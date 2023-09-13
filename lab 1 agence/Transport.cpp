#include <string>
#include <iostream>
#include "Transport.h"
using namespace std;

Transport::~Transport() 
{

}

Transport:: Transport() : Vaisseau(0,250,500,1500)
{

}


string Transport::to_string()
{
	string info = Vaisseau::to_string();
	info.append("Je suis pour le transport");

	return info;
}
