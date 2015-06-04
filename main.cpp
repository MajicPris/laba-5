#include<iostream>
#include<conio.h>
#include"LA.h"

using namespace std;

int main()
{
	//LA l("Boing 777", 8, 512);
	Chopper c("Raptor", 2, 300, 5);
	c.ShowChopper();
	c.SetModelAndNumber();
	c.SetPowerandaEngines();
	c.ShowLA();
	Airplane a("Boing 777", 8, 512, 5);
	a.ShowAirplane();
	a.SetModelAndNumber();
	a.SetPowerandaEngines();
	a.ShowLA();
	_getch();
	return 0;
}
