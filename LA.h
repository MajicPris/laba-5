#include<iostream>
#include<conio.h>

using namespace std;

class LA
{
protected:
	char model[64];
	int aEngine;
	int power;
public:
	LA(char *, int, int);
	virtual void ShowLA(void);
	void SetPowerandaEngines();
};

LA::LA(char *model, int aEngine, int power)
{
	strcpy_s(LA::model, model);
	LA::aEngine = aEngine;
	LA::power = power;
}

void LA::ShowLA()
{
	cout << endl;
	cout << "Model: " << model << endl;
	cout << "Number of air-Engines: " << aEngine << endl;
	cout << "power: " << power << endl;
}

void LA::SetPowerandaEngines()
{
	cout << "Enter a power: ";
	cin >> power;
	cout << "Enter a number of air-Engines: ";
	cin >> aEngine;
}
//AIRPLANE
class Airplane : public LA
{
	int Number;
public:
	Airplane(char *, int, int, int);
	virtual void ShowLA();
	void SetModelAndNumber(void);
};

Airplane::Airplane(char *model, int aEngine, int power, int Number) : LA(model, aEngine, power)
{
Airplane:Number = Number;
}

void Airplane::ShowLA(void)
{
	cout << endl;
	LA::ShowLA();
	cout << "Number of places in Airplane: " << Number << endl;
}

void Airplane::SetModelAndNumber(void)
{
	cout << endl << "Enter a model of Airplane: ";
	cin.get();
	cin.getline(model, 64);
	//gets(model);
	cout << "Enter a number of places: ";
	cin >> Number;
}
//CHOPPER
class Chopper : public LA
{
	int Number;
public:
	Chopper(char *, int, int, int);
	virtual void ShowLA(void);
	void SetModelAndNumber(void);
};

Chopper::Chopper(char *model, int aEngine, int power, int Number) : LA(model, aEngine, power)
{
	Chopper::Number = Number;
}

void Chopper::SetModelAndNumber(void)
{
	cout << endl << "Enter a model of Chopper: ";
	cin.get();
	cin.getline(model, 64);
	//gets(model);
	cout << "Enter a number of places: ";
	cin >> Number;
}
void Chopper::ShowLA(void)
{
	cout << endl;
	LA::ShowLA();
	cout << "Number of places in Chopper: " << Number << endl;
}
