#include "Pet.h"

Pet::Pet() {
	pName = "";
	happyStat = 100;
	hungerStat = 100;
	sleepyStat = 100;
}

Pet::Pet(string _pName) {
	pName = _pName;
	happyStat = 100;
	hungerStat = 100;
	sleepyStat = 100;
}

string Pet::getName() {
	return pName;
}

int Pet::getHappy() {
	return happyStat;
}

int Pet::getHunger() {
	return hungerStat;
}

int Pet::getSleepy() {
	return sleepyStat;
}

void Pet::changeHappy(int change) {
	happyStat += change;
	if (happyStat > 100) {
		happyStat = 100;
	}
	else if (happyStat < 0) {
		happyStat = 0;
	}
}

void Pet::changeHunger(int change) {
	hungerStat += change;
	if (hungerStat > 100) {
		hungerStat = 100;
	}
	else if (hungerStat < 0) {
		hungerStat = 0;
	}
}

void Pet::changeSleepy(int change) {
	sleepyStat += change;
	if (sleepyStat > 100) {
		sleepyStat = 100;
	}
	else if (sleepyStat < 0) {
		sleepyStat = 0;
	}
}

void Pet::setHappy(int _happyStat) {
	happyStat = _happyStat;
}

void Pet::setHunger(int _hungerStat) {
	hungerStat = _hungerStat;
}

void Pet::setSleepy(int _sleepyStat) {
	sleepyStat = _sleepyStat;
}

void Pet::setName(string _pName) {
	pName = _pName;
}