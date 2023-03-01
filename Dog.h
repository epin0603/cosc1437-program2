#include "Pet.h"
#pragma once
class Dog : public Pet
{
public:
	Dog();
	Dog(string name, string type);
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
	string dogBreed;
};

