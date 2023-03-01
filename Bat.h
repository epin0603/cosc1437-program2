#include "Pet.h"
#pragma once
class Bat : public Pet
{
public:
	Bat();
	Bat(string name, string type);
	void draw();
	void returnStatus();
	string getType();
	string getBreed();

	void napTime();
	void gameTime();
	void eatSnack();
	void specialTime();

	void nextHour();
private:
	string batSpecies;
};


