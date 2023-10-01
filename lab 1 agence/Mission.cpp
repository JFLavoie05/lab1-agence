#include "Mission.h"

Mission::Mission()
{

}

Mission::Mission(int _expRequise, int _argentDonne, int _expDonne)
{
	expRequise = _expRequise;
	argentDonne = _argentDonne;
	expDonne = _expDonne;
}

Mission::~Mission()
{

}

string Mission::to_string()
{
	return string();
}

int Mission::getExpRequise()
{
	return expRequise;
}

int Mission::getArgentDonne()
{
	return argentDonne;
}

int Mission::getExpDonne()
{
	return expDonne;
}
