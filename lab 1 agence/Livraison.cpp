#include <string>
#include <iostream>
#include "livraison.h"
using namespace std;


livraison::~livraison() 
{

}

livraison::livraison() : Vaisseau(10,250,100,1000)
{

}

string livraison::to_string()
{
	string info = Vaisseau::to_string();
	info.append("Je suis pour la livraison");

	return info;
}
