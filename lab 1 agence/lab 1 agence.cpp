#include "livraison.h"
#include "Transport.h"
#include "guerre.h"
#include <iostream>
#include "Faction.h"
#include "Vaisseau.h"
#include "Empire.h"
#include "Rebellion.h"
#include "FactoryVaisseau.h"
using namespace std;

int main()
{
    srand(time(NULL));
    Guerre* vaisseauGuerre = new Guerre();
    Livraison* vaisseauLivraison = new Livraison();
    Transport* vaisseauTransport = new Transport();

    cout << vaisseauGuerre->to_string() << endl;
    cout << vaisseauLivraison->to_string() << endl;
    cout << vaisseauTransport->to_string() << endl;


    cout << "\n... production d'un vaisseau\n" << endl;
    Vaisseau* monVaisseau = FactoryVaisseau::getRandomVaisseau();
     
    cout << monVaisseau->to_string();
    

    delete monVaisseau;
}


