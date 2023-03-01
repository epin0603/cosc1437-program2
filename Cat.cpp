#include "Cat.h"

Cat::Cat() : Pet()
{
	catBreed = "Unknown";
}

Cat::Cat(string name, string type) : Pet(name)
{
	catBreed = type;
}

void Cat::draw() {
	cout << " _._     _,-'''`-._" << endl;
	cout << "(,-.`._,'(       ||`-/|" << endl;
	cout << "    `-.-' | )-`( , + +)" << endl;
	cout << "          `-    |`_`-'-" << endl;
}

void Cat::returnStatus() {
	if (getHappy() >= 30 && getHunger() >= 30 && getSleepy() >= 30) {
		cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;
		cout << getName() << endl;
		cout << "  Happiness: " << getHappy() << endl;
		cout << "  Hunger: " << getHunger() << endl;
		cout << "  Sleepiness: " << getSleepy() << endl;
		cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;
	}
	else if (getHappy() < 30) {
		cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;
		cout << getName() << " needs to have some fun!" << endl;
		cout << "  Happiness: " << getHappy() << endl;
		cout << "  Hunger: " << getHunger() << endl;
		cout << "  Sleepiness: " << getSleepy() << endl;
		cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;
	}
	else if (getHunger() < 30) {
		cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;
		cout << getName() << " needs to eat something!" << endl;
		cout << "  Happiness: " << getHappy() << endl;
		cout << "  Hunger: " << getHunger() << endl;
		cout << "  Sleepiness: " << getSleepy() << endl;
		cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;
	}
	else if (getSleepy() < 30) {
		cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;
		cout << getName() << " needs to take a nap!" << endl;
		cout << "  Happiness: " << getHappy() << endl;
		cout << "  Hunger: " << getHunger() << endl;
		cout << "  Sleepiness: " << getSleepy() << endl;
		cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;
	}
	if ((getHappy() == 0) || (getHunger() == 0) || (getSleepy() == 0)) {
		cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;
		cout << "          .             " << endl;
		cout << "         -|-             " << endl;
		cout << "          |               " << endl;
		cout << "      __..|..__           " << endl;
		cout << "    .'         ':, " << endl;
		cout << "   /  __  _  __  ll    " << endl;
		cout << "   | |_)) || |_))||    " << endl;
		cout << "   | | ll || |   ||    " << endl;
		cout << "   |             ||     " << endl;
		cout << "   |             ||     " << endl;
		cout << "   |             ||   _,   " << endl;
		cout << "   |             ||.-(_{}  " << endl;
		cout << "   |             |/    `   " << endl;
		cout << "   |        ,_ (;|/)  " << endl;
		cout << " ll|       {}_)-,||`   " << endl;
		cout << " ll;/,,;;;;;;;,ll|//,  " << endl;
		cout << ".;;;;;;;;;;;;;;;;, " << endl;
		cout << "Game Over." << endl;
		cout << getName();
		if (getHappy() == 0) {
			cout << " has died of sadness! :(" << endl;
		}
		if (getHunger() == 0) {
			cout << " has died of hunger! :(" << endl;
		}
		if (getSleepy() == 0) {
			cout << " has died of exhaustion! :(" << endl;
		}
		cout << "x" << setfill('-') << setw(83) << "" << "x" << endl << endl;
		exit(1);
	}
}

void Cat::napTime() {
	cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;
	cout << "      |l      _,,,---,,_" << endl;
	cout << "ZZZzz /,`.-'`'    -.  ;-;;,_" << endl;
	cout << "     |,4-  ) )-,_. ,l (  `'-'" << endl;
	cout << "    '---''(_/--'  `-'l_)" << endl;
	changeSleepy(15);
	changeHunger(-10);
	changeHappy(10);
	cout << getName() << " is napping!" << endl;
	cout << "x" << setfill('-') << setw(83) << "" << "x" << endl << endl;
}

void Cat::gameTime() {
	cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;
	cout << "               )l._.,--....,'``.      " << endl;
	cout << " .b--.        /;   _.. l   _l  (`._ ,." << endl;
	cout << "`=,-,-'~~~   `----(,_..'--(,_..'`-.;.'" << endl;
	changeSleepy(-25);
	changeHunger(-15);
	changeHappy(20);
	cout << getName() << " is playing with its toy mouse!" << endl;
	cout << "x" << setfill('-') << setw(83) << "" << "x" << endl << endl;
}

void Cat::eatSnack() {
	cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;
	cout << "  |l=/|.-''' - ." << endl;
	cout << "  /6 6l       l" << endl;
	cout << " =l_Y_/=  (_  ;l" << endl;
	cout << "   _U//_/-/__///" << endl;
	cout << "  /   l      ((" << endl;
	cout << "  ^^^^^       `" << endl;
	changeSleepy(-10);
	changeHunger(20);
	changeHappy(15);
	cout << getName() << " is eating a snack!" << endl;
	cout << "x" << setfill('-') << setw(83) << "" << "x" << endl << endl;
}

void Cat::specialTime() {
	cout << "x" << setfill('-') << setw(83) << "" << "x" << endl << endl;
	cout << "           __..--''``l--....___   _..,_" << endl;
	cout << "       _.-'    .-/';  `        ``<._  ``- + '~=." << endl;
	cout << "   _.-' _..--.'_    l                    `(^) )" << endl;
	cout << "  ((..-'    (< _     ;_..__               ; `'   " << endl;
	cout << "             `-._,_)'      ``--...____..-'" << endl;
	changeSleepy(30);
	changeHunger(-10);
	changeHappy(20);
	cout << getName() << " is sunbathing!" << endl;
	cout << "x" << setfill('-') << setw(83) << "" << "x" << endl << endl;
}

void Cat::nextHour() {
	changeSleepy(-10);
	changeHunger(-5);
	changeHappy(-5);

	cout << "x" << setfill('-') << setw(83) << "" << "x" << endl << endl;
	cout << "An hour has passed for " << getName() << "!" << endl;
	cout << "x" << setfill('-') << setw(83) << "" << "x" << endl << endl;
}

string Cat::getType() {
	return "Cat";
}

string Cat::getBreed() {
	return catBreed;
}