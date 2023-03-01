#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

#pragma once
class Pet
{
public:
	Pet();
	Pet(string _pName);
	void changeHappy(int change);
	void changeHunger(int change);
	void changeSleepy(int change);
	virtual void draw() = 0;
	virtual void returnStatus() = 0;
	virtual void napTime() = 0;
	virtual void gameTime() = 0;
	virtual void eatSnack() = 0;
	virtual void specialTime() = 0;
	virtual void nextHour() = 0;
	virtual string getType() = 0;
	int getHappy();
	int getHunger();
	int getSleepy();
	string getName();
	void setHappy(int _happyStat);
	void setHunger(int _hungerStat);
	void setSleepy(int _sleepyStat);
	void setName(string _pName);
private:
	int happyStat;
	int hungerStat;
	int sleepyStat;
	string pName;
};

