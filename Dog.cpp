#include "Dog.h"

Dog::Dog() : Pet()
{
	dogBreed = "Unknown";
}

Dog::Dog(string name, string type) : Pet(name)
{
	dogBreed = type;
}

void Dog::draw() {
	cout << "          __" << endl;
	cout << " ) ______/ V`-," << endl;
	cout << "  }        /~~" << endl;
	cout << " /_)^ --,r'" << endl;
	cout << "|b      |b" << endl;
}

void Dog::returnStatus() {
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

void Dog::napTime() {
	cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;
	cout << "                __" << endl;
	cout << "               /l/`-," << endl;
	cout << "       ,--'''''   /'" << endl;
	cout << " ____,'.  )       l___" << endl;
	cout << "''''''------''''`-----'" << endl << endl;
	changeSleepy(10);
	changeHunger(-15);
	changeHappy(-5);
	cout << getName() << " is napping!" << endl;
	cout << "x" << setfill('-') << setw(83) << "" << "x" << endl << endl;
}

void Dog::gameTime() {
	cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;
	cout << "                                   _" << endl;
	cout << "                                (l l)" << endl;
	cout << "                              o__^l/     ," << endl;
	cout << "                               l ' l    <   _  _" << endl;
	cout << "' '  .                          `|  l____l   -   -" << endl;
	cout << "       '      . .      ()        |        )  _   _" << endl;
	cout << "         `.'       `.'         .//---_/-_/ _  _" << endl;
	changeSleepy(-20);
	changeHunger(-20);
	changeHappy(20);
	cout << getName() << " is playing fetch!" << endl;
	cout << "x" << setfill('-') << setw(83) << "" << "x" << endl << endl;
}

void Dog::eatSnack() {
	cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;
	cout << "    ,    /-." << endl;
	cout << "   ((___/ __>" << endl;
	cout << "   /      }" << endl;
	cout << "   l .--.(   ___" << endl;
	cout << "   ll   ll  /___l" << endl;
	changeSleepy(-5);
	changeHunger(20);
	changeHappy(10);
	cout << getName() << " is eating a snack!" << endl;
	cout << "x" << setfill('-') << setw(83) << "" << "x" << endl << endl;
}

void Dog::specialTime() {
	cout << "x" << setfill('-') << setw(83) << "" << "x" << endl << endl;
	cout << "              .--~~,__" << endl;
	cout << " :-....,-------`~~'._.'" << endl;
	cout << "  `-,,,  ,_      ;'" << endl;
	cout << "   _,-' ,'`-__; '--." << endl;
	cout << "  (_/'~~      ''''(;" << endl;
	changeSleepy(-25);
	changeHunger(-10);
	changeHappy(35);
	cout << getName() << " is racing!" << endl;
	cout << "x" << setfill('-') << setw(83) << "" << "x" << endl << endl;
}

void Dog::nextHour() {
	changeSleepy(-5);
	changeHunger(-10);
	changeHappy(-5);

	cout << "x" << setfill('-') << setw(83) << "" << "x" << endl << endl;
	cout << "An hour has passed for " << getName() << "!" << endl;
	cout << "x" << setfill('-') << setw(83) << "" << "x" << endl << endl;
}

string Dog::getType() {
	return "Dog";
}

string Dog::getBreed() {
	return dogBreed;
}