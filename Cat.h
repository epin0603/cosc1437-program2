#include "Pet.h"
#pragma once
class Cat : public Pet
{
public:
	Cat();
	Cat(string name, string type);
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
	string catBreed;
};


