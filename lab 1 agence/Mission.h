#pragma once
#include <string>
#include <iostream>
using namespace std;
class Mission
{
protected:
	int expRequise;
	int argentDonne;
	int expDonne;

public :
	Mission();
	Mission(int _expRequise, int _argentDonne, int _expDonne);
	~Mission();
	string to_string();

	int getExpRequise();
	int getArgentDonne();
	int getExpDonne();
};

