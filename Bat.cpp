#include "Bat.h"

Bat::Bat() : Pet()
{
	batSpecies = "Unknown";
}

Bat::Bat(string name, string type) : Pet(name)
{
	batSpecies = type;
}

void Bat::draw() {
	cout << " /                  / " << endl;
	cout << "/ l'._   (l_/)   _.'/ l" << endl;
	cout << "|.''._'--(o.o)--'_.''.|" << endl;
	cout << " l_ / `;=/ ' l=; ` l _/ " << endl;
	cout << "   `l__| l___/ |__/`" << endl;
	cout << "        l(_|_)/" << endl;
	cout << "         ' ` '" << endl;
}

void Bat::returnStatus() {
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

void Bat::napTime() {
	cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;
	cout << "         mm" << endl;
	cout << "      /^(  )^l" << endl;
	cout << "      l,(__),/" << endl;
	cout << "        V~~V" << endl;
	changeSleepy(10);
	changeHunger(-15);
	changeHappy(-5);
	cout << getName() << " is napping!" << endl;
	cout << "x" << setfill('-') << setw(83) << "" << "x" << endl << endl;
}

void Bat::gameTime() {
	cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;
	cout << "     _..__.          .__.._" << endl;
	cout << " .^' - .._ '-(l__/)-' _.. - '^." << endl;
	cout << "          '-.' oo '.-'" << endl;
	cout << "             `-..-'" << endl;
	changeSleepy(-20);
	changeHunger(-20);
	changeHappy(20);
	cout << getName() << " is playing around!" << endl;
	cout << "x" << setfill('-') << setw(83) << "" << "x" << endl << endl;
}

void Bat::eatSnack() {
	cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;
	cout << " _     __" << endl;
	cout << "|(    /_(" << endl;
	cout << "`.lV)/.'" << endl;
	cout << "  `Ö-'" << endl;
	changeSleepy(-5);
	changeHunger(20);
	changeHappy(10);
	cout << getName() << " is eating a snack!" << endl;
	cout << "x" << setfill('-') << setw(83) << "" << "x" << endl << endl;
}

void Bat::specialTime() {
	cout << "x" << setfill('-') << setw(83) << "" << "x" << endl << endl;
	cout << "....._      " << endl;
	cout << " `.   ``-.                               .-----.._" << endl;
	cout << "   `,     `-.                          .:      /`" << endl;
	cout << "     :       `'..                 .. - ``       :" << endl;
	cout << "     /   ...--:::`n            n.`::...       :" << endl;
	cout << "     `:``      .` ::          /  `.     ``---..:." << endl;
	cout << "       `l    .`  ._:   .-:   ::    `.     .-``" << endl;
	cout << "         :  :    :_ll_/: :  .::      `.  /" << endl;
	cout << "         : /      l-../:/_.`-`         l :" << endl;
	cout << "         :: _.._  q` p ` /`             l|" << endl;
	cout << "         :-`    ``(_. ..-----hh``````/-._:" << endl;
	cout << "                     `:      ``     /     `" << endl;
	cout << "                     E:            /" << endl;
	cout << "                      :          _/" << endl;
	cout << "                      :    _..-``" << endl;
	cout << "                      l--``" << endl;
	changeSleepy(-25);
	changeHunger(10);
	changeHappy(35);
	cout << getName() << " is going out for a flight!" << endl;
	cout << "x" << setfill('-') << setw(83) << "" << "x" << endl << endl;
}

void Bat::nextHour() {
	changeSleepy(-10);
	changeHunger(-10);
	changeHappy(-10);

	cout << "x" << setfill('-') << setw(83) << "" << "x" << endl << endl;
	cout << "An hour has passed for " << getName() << "!" << endl;
	cout << "x" << setfill('-') << setw(83) << "" << "x" << endl << endl;
}

string Bat::getType() {
	return "Bat";
}

string Bat::getBreed() {
	return batSpecies;
}