#include "livraison.h"
#include "Transport.h"
#include "guerre.h"
#include <iostream>
#include "Faction.h"
#include "Vaisseau.h"
#include "Empire.h"
#include "Rebellion.h"
using namespace std;

int main()
{
    guerre* vaisseauGuerre = new guerre();
    livraison* vaisseauLivraison = new livraison();
    Transport* vaisseauTransport = new Transport();

    cout << vaisseauGuerre->to_string() << endl;
    cout << vaisseauLivraison->to_string() << endl;
    cout << vaisseauTransport->to_string() << endl;
}


