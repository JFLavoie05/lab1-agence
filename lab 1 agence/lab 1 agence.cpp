#include "livraison.h"
#include "Transport.h"
#include "guerre.h"
#include <iostream>
#include "Faction.h"
#include "Vaisseau.h"
#include "Empire.h"
#include "Rebellion.h"
#include "FactoryVaisseau.h"
#include "Mission.h"
#include <vector>
using namespace std;

vector<Mission*> CreerMission()
{
    vector<Mission*> listeMission;
    // ;)
    Mission* mission1 = new Mission(0, 200, 1);
    Mission* mission2 = new Mission(1, 400, 9);
    Mission* mission3 = new Mission(1, 450, 10);
    Mission* mission4 = new Mission(20, 500, 16);
    Mission* mission5 = new Mission(35, 700, 20);
    Mission* mission6 = new Mission(37, 750, 25);
    Mission* mission7 = new Mission(54, 1200, 30);
    Mission* mission8 = new Mission(56, 1250, 32);
    Mission* mission9 = new Mission(86, 3000, 56);
    Mission* mission10 = new Mission(95, 4000, 58);

    listeMission.push_back(mission1);
    listeMission.push_back(mission2);
    listeMission.push_back(mission3);
    listeMission.push_back(mission4);
    listeMission.push_back(mission5);
    listeMission.push_back(mission6);
    listeMission.push_back(mission7);
    listeMission.push_back(mission8);
    listeMission.push_back(mission9);
    listeMission.push_back(mission10);
    // ;)

    return listeMission;
}
Vaisseau* AmeliorerAttaque(Vaisseau* vaisseau)
{
    int choix;
    
    int pointsAttaque(0);
    int attaqueOriginal(vaisseau->getAtt());
    int attaqueAjouter(0);

    
    int argentOriginal(vaisseau->getArgent());
    int argentRetirer(0);
    
    bool valide(false);

    do
    {
        cout << "*************Liste des Ameliorations de l'attaque************" << endl;
        cout << "1. 10 d'attaque pour 200 $" << endl;
        cout << "2. 50 d'attaque pour 1000 $" << endl;
        cout << "3. 100 d'attaque pour 2300 $" << endl;
        cout << "4. Quitter" << endl;
        cin >> choix;
        switch (choix)
        {
        case 1:
            if (vaisseau->getArgent() >= 200)
            {
                pointsAttaque = 10;
                cout << "Attaque ajouter\n" << endl;
                attaqueAjouter = attaqueOriginal + pointsAttaque;
                argentRetirer = argentOriginal - 200;

                vaisseau->setArgent(argentRetirer);
                vaisseau->setAtt(attaqueAjouter);
                valide = true;
            }
            else
            {
                cout << "Argent insuffisant\n" << endl;
            }
            break;
        case 2:
            if (vaisseau->getArgent() >= 1000)
            {
                pointsAttaque = 50;
                cout << "Attaque ajouter\n" << endl;
                attaqueAjouter = attaqueOriginal + pointsAttaque;
                argentRetirer = argentOriginal - 1000;

                vaisseau->setArgent(argentRetirer);
                vaisseau->setAtt(attaqueAjouter);
                valide = true;
            }
            else
            {
                cout << "Argent insuffisant\n" << endl;
            }
            break;
        case 3:
            if (vaisseau->getArgent() >= 2300)
            {
                pointsAttaque = 100;
                cout << "Attaque ajouter\n" << endl;
                attaqueAjouter = attaqueOriginal + pointsAttaque;
                argentRetirer = argentOriginal - 2300;

                vaisseau->setArgent(argentRetirer);
                vaisseau->setAtt(attaqueAjouter);
                valide = true;
            }
            else
            {
                cout << "Argent insuffisant\n" << endl;
            }
            break;
        case 4:
            valide = true;
            break;
        }
    } while (valide != true);

    return vaisseau;
}
Vaisseau* AmeliorerDefense(Vaisseau* vaisseau)
{
    int choix;
    bool valide(false);
    int pointsDefense(0);

    int defenseOriginal(vaisseau->getDeff());
    int defenseAjouter(0);

    int argentOriginal(vaisseau->getArgent());
    int argentRetirer(0);
    
    do
    {
        cout << "*************Liste des Ameliorations de la defense************" << endl;
        cout << "1. 10 de defense pour 200 $" << endl;
        cout << "2. 50 de defense pour 1000 $" << endl;
        cout << "3. 100 de defense pour 2300 $" << endl;
        cout << "4. Quitter" << endl;
        cin >> choix;
        switch (choix)
        {
        case 1:
            if (vaisseau->getArgent() >= 200)
            {
                pointsDefense = 10;
                defenseAjouter = defenseOriginal + pointsDefense;
                argentRetirer = argentOriginal - 200;

                vaisseau->setArgent(argentRetirer);
                vaisseau->setDeff(defenseAjouter);
                cout << "Defense ajouter\n" << endl;
                valide = true;
            }
            else
            {
                cout << "Argent insuffisant\n" << endl;
            }
            break;
        case 2:
            if (vaisseau->getArgent() >= 1000)
            {
                pointsDefense = 50;
                defenseAjouter = defenseOriginal + pointsDefense;
                argentRetirer = argentOriginal - 200;

                vaisseau->setArgent(argentRetirer);
                vaisseau->setAtt(defenseAjouter);
                cout << "Defense ajouter\n" << endl;
                valide = true;
            }
            else
            {
                cout << "Argent insuffisant\n" << endl;
            }
            break;
        case 3:
            if (vaisseau->getArgent() >= 2300)
            {
                pointsDefense = 100;
                defenseAjouter = defenseOriginal + pointsDefense;
                argentRetirer = argentOriginal - 200;

                vaisseau->setArgent(argentRetirer);
                vaisseau->setAtt(defenseAjouter);
                cout << "Defense ajouter\n" << endl;
                valide = true;
            }
            else
            {
                cout << "Argent insuffisant\n" << endl;
            }
            break;
        case 4:
            valide = true;
            break;
        }
    } while (valide != true);

    return vaisseau;
}

Vaisseau* AmeliorerVie(Vaisseau* vaisseau)
{
    int choix;

    int pointsVie(0);
    int vieOriginal(vaisseau->getVie());
    int vieAjouter(0);


    int argentOriginal(vaisseau->getArgent());
    int argentRetirer(0);

    bool valide(false);

    do
    {
        cout << "*************Liste des Ameliorations de la vie************" << endl;
        cout << "1. 10 de vie pour 200 $" << endl;
        cout << "2. 50 de vie pour 1000 $" << endl;
        cout << "3. 100 de vie pour 2300 $" << endl;
        cout << "4. Quitter" << endl;
        cin >> choix;
        switch (choix)
        {
        case 1:
            if (vaisseau->getArgent() >= 200)
            {
                pointsVie = 10;
                cout << "Attaque ajouter\n" << endl;
                vieAjouter = vieOriginal + pointsVie;
                argentRetirer = argentOriginal - 200;

                vaisseau->setArgent(argentRetirer);
                vaisseau->setVie(vieAjouter);
                valide = true;
            }
            else
            {
                cout << "Argent insuffisant\n" << endl;
            }
            break;
        case 2:
            if (vaisseau->getArgent() >= 1000)
            {
                pointsVie = 50;
                cout << "Attaque ajouter\n" << endl;
                vieAjouter = vieOriginal + pointsVie;
                argentRetirer = argentOriginal - 1000;

                vaisseau->setArgent(argentRetirer);
                vaisseau->setVie(vieAjouter);
                valide = true;
            }
            else
            {
                cout << "Argent insuffisant\n" << endl;
            }
            break;
        case 3:
            if (vaisseau->getArgent() >= 2300)
            {
                pointsVie = 100;
                cout << "Attaque ajouter\n" << endl;
                vieAjouter = vieOriginal + pointsVie;
                argentRetirer = argentOriginal - 2300;

                vaisseau->setArgent(argentRetirer);
                vaisseau->setVie(vieAjouter);
                valide = true;
            }
            else
            {
                cout << "Argent insuffisant\n" << endl;
            }
            break;
        case 4:
            valide = true;
            break;
        }
    } while (valide != true);

    return vaisseau;
}

Vaisseau* ChoisirMissions(vector<Mission*> listeMission, Vaisseau* vaisseau)
{
    int choix;
    bool valide(false);
    int argentOriginal(vaisseau->getArgent());
    int expOriginal(vaisseau->getExp());
    int expMission;
    int argentMission;
    int argentAjouter(0);
    int expAjouter(0);
    int expRequis(0);
    do
    {
        cout << "*************Liste des Missions************" << endl;
        for (int i = 0; i < listeMission.size(); i++)
        {
            cout << "Mission " << i + 1 << " Experience Requis " << listeMission[i]->getExpRequise() << " Experience Donne " << listeMission[i]->getExpDonne() << " Argent Donne " << listeMission[i]->getArgentDonne() << endl;
        }
        
        cout << "\nChoisir une mission" << endl;
        cin >> choix;
        if (listeMission[choix - 1]->getExpRequise() <= vaisseau->getExp())
        {
            argentMission = listeMission[choix - 1]->getArgentDonne();
            expMission = listeMission[choix - 1]->getExpDonne();
            expAjouter = expOriginal + expMission;
            argentAjouter = argentOriginal + argentMission;
            vaisseau->setArgent(argentAjouter);
            vaisseau->setExp(expAjouter);
            cout << "Mission completer" << endl;
            valide = true;
        }
        else
        {
            cout << "Experience insuffisante" << endl;
        }
    } while (valide != true);

    return vaisseau;
}

int main()
{
    srand(time(NULL));
    
    
    cout << "\n... production d'un vaisseau\n" << endl;
    Vaisseau* monVaisseau = FactoryVaisseau::getRandomVaisseau();
    cout << "Votre vaisseau s'appelle : " << monVaisseau->getNom() << " et sa faction est : " << monVaisseau->getFaction()<< endl;

    bool valide(false);
    int attaqueDemander(0);
    int attaqueOriginal(monVaisseau->getAtt());
    int attaqueAjouter(0);
    int defenseDemander(0);
    int defenseOriginal(monVaisseau->getDeff());
    int defenseAjouter(0);
    int choix;
    vector<Mission*> listeMission = CreerMission();

    do
    {
    cout << "\n*************Menu************" << endl;
    cout << "* 1 - Ameliorer Attaque     * " << endl;
    cout << "* 2 - Ameliorer Defense     * " << endl;
    cout << "* 3 - Ameliorer Vie         * " << endl;
    cout << "* 4 - Montrer stats         * " << endl;
    cout << "* 5 - Faire une Mission     * " << endl;
    cout << "* 6 - Quitter               * \n" << endl;

    cin >> choix;

        switch (choix)
        {
        case 1:
            monVaisseau = AmeliorerAttaque(monVaisseau);
            break;
        case 2:
            monVaisseau = AmeliorerDefense(monVaisseau);
            break;
        case 3:
            monVaisseau = AmeliorerVie(monVaisseau);
            break;
        case 4:
            cout << "Attaque : " << monVaisseau->getAtt() << endl;
            cout << "Defense : " << monVaisseau->getDeff() << endl;
            cout << "Vie : " << monVaisseau->getVie() << endl;
            cout << "Argent : " << monVaisseau->getArgent() << endl;
            cout << "Experience : " << monVaisseau->getExp() << endl;
            break;
        case 5:
            monVaisseau = ChoisirMissions(listeMission, monVaisseau);
            break;
        case 6:
            valide = true;
            break;
        }

    } while (valide != true);
     
    
    

    delete monVaisseau;
}
