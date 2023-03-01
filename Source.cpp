#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "Dog.h"
#include "Cat.h"
#include "Bat.h"
using namespace std;

void welcomeMsg();
void usrMenu(string usrChoice);
void gameMenu(string gameChoice, string usrChoice);
template<typename T>
void saveFile(T animal, ofstream& outFS) {
	outFS << animal->getType() << endl;
	outFS << animal->getName() << endl;
	outFS << animal->getBreed() << endl;
	outFS << animal->getHappy() << endl;
	outFS << animal->getHunger() << endl;
	outFS << animal->getSleepy() << endl;
}
//Failed attempt at load function
/*template<typename X>
X loadFile(ifstream& inFS) {
	if (!inFS.is_open) {
		cout << "A save file does not exist!" << endl;
		exit(1);
	}
	string animalType;
	string animalName;
	string animalBreed;
	int animalHappy;
	int animalHunger;
	int animalSleepy;
	getline(inFS, animalType);
	getline(inFS, animalName);
	getline(inFS, animalBreed);
	inFS >> animalHappy >> animalHunger >> animalSleepy;
	
	if (animalType == "Dog") {
		Dog* doggy = new Dog(animalName, animalBreed);
		doggy->setHappy(animalHappy);
		doggy->setHunger(animalHunger);
		doggy->setSleepy(animalSleepy);

		return doggy;
	}
	else if (animalType == "Cat") {
		Cat* kitty = new Cat(animalName, animalBreed);
		kitty->setHappy(animalHappy);
		kitty->setHunger(animalHunger);
		kitty->setSleepy(animalSleepy);

		return kitty;
	}
	else if (animalType == "Bat") {
		Bat* batty = new Bat(animalName, animalBreed);
		batty->setHappy(animalHappy);
		batty->setHunger(animalHunger);
		batty->setSleepy(animalSleepy);

		return batty;
	}
}*/

int main() {
	string usrChoice = "999";
	string gameChoice = "999";
	string petName;
	string petType;
	string newType;
	int changeStat = 0;
	int hapStat;
	int hunStat;
	int sleStat;

	welcomeMsg();

	while (usrChoice != "0") {
		usrMenu(usrChoice);
		cin >> usrChoice;

		if(usrChoice == "1") {
			usrMenu(usrChoice);
			cin >> usrChoice;
			if (usrChoice == "A") {
				std::cout << "Write a name for your dog:" << endl;
				cin.ignore();
				getline(cin, petName);
				std::cout << "What breed of dog is it?" << endl;
				getline(cin, petType);
				Dog* doggy = new Dog(petName, petType);

				while (gameChoice != "Q") {
					doggy->draw();
					doggy->returnStatus();
					gameMenu(gameChoice, usrChoice);
					cin >> gameChoice;

					if (gameChoice == "A") {
						doggy->napTime();
					}
					else if (gameChoice == "B") {
						doggy->gameTime();
					}
					else if (gameChoice == "C") {
						doggy->eatSnack();
					}
					else if (gameChoice == "D") {
						doggy->specialTime();
					}
					++changeStat;

					if (changeStat % 3 == 0) {
						doggy->nextHour();
					}
				}
				ofstream outFS("saveData.txt");
				saveFile(doggy, outFS);
				std::cout << "Successfully saved the game!" << endl;

				usrChoice = "999";
				gameChoice = "999";
				changeStat = 0;
				outFS.close();
				delete doggy;
			}
			else if (usrChoice == "B") {
				std::cout << "Write a name for your cat:" << endl;
				cin.ignore();
				getline(cin, petName);
				std::cout << "What breed of cat is it?" << endl;
				getline(cin, petType);
				Cat* kitty = new Cat(petName, petType);

				while (gameChoice != "Q") {
					kitty->draw();
					kitty->returnStatus();
					gameMenu(gameChoice, usrChoice);
					cin >> gameChoice;

					if (gameChoice == "A") {
						kitty->napTime();
					}
					else if (gameChoice == "B") {
						kitty->gameTime();
					}
					else if (gameChoice == "C") {
						kitty->eatSnack();
					}
					else if (gameChoice == "D") {
						kitty->specialTime();
					}
					++changeStat;

					if (changeStat % 3 == 0) {
						kitty->nextHour();
					}
				}
				ofstream outFS("saveData.txt");
				saveFile(kitty, outFS);
				std::cout << "Successfully saved the game!" << endl;

				usrChoice = "999";
				gameChoice = "999";
				changeStat = 0;
				outFS.close();
				delete kitty;
			}
			else if (usrChoice == "C") {
				std::cout << "Write a name for your bat:" << endl;
				cin.ignore();
				getline(cin, petName);
				std::cout << "What species of bat is it?" << endl;
				getline(cin, petType);
				Bat* batty = new Bat(petName, petType);

				while (gameChoice != "Q") {
					batty->draw();
					batty->returnStatus();
					gameMenu(gameChoice, usrChoice);
					cin >> gameChoice;

					if (gameChoice == "A") {
						batty->napTime();
					}
					else if (gameChoice == "B") {
						batty->gameTime();
					}
					else if (gameChoice == "C") {
						batty->eatSnack();
					}
					else if (gameChoice == "D") {
						batty->specialTime();
					}
					++changeStat;

					if (changeStat % 3 == 0) {
						batty->nextHour();
					}
				}
				
				ofstream outFS("saveData.txt");
				saveFile(batty, outFS);
				std::cout << "Successfully saved the game!" << endl;

				usrChoice = "999";
				gameChoice = "999";
				changeStat = 0;
				outFS.close();
				delete batty;
			}
		}

		if (usrChoice == "2") {
			ifstream inFS("saveData.txt");
			getline(inFS, newType);
			cout << "Successfully loaded the saved data!" << endl;
			if (newType == "Dog") {
				usrChoice = "A";
				getline(inFS, petName);
				getline(inFS, petType);
				inFS >> hapStat >> hunStat >> sleStat;
				Dog* doggy = new Dog(petName, petType);
				doggy->setHappy(hapStat);
				doggy->setHunger(hunStat);
				doggy->setSleepy(sleStat);

				while (gameChoice != "Q") {
					doggy->draw();
					doggy->returnStatus();
					gameMenu(gameChoice, usrChoice);
					cin >> gameChoice;

					if (gameChoice == "A") {
						doggy->napTime();
					}
					else if (gameChoice == "B") {
						doggy->gameTime();
					}
					else if (gameChoice == "C") {
						doggy->eatSnack();
					}
					else if (gameChoice == "D") {
						doggy->specialTime();
					}
					++changeStat;

					if (changeStat % 3 == 0) {
						doggy->nextHour();
					}
				}

				ofstream outFS("saveData.txt");
				saveFile(doggy, outFS);
				std::cout << "Successfully saved the game!" << endl;

				usrChoice = "999";
				gameChoice = "999";
				changeStat = 0;
				outFS.close();
				delete doggy;
			}
			else if (newType == "Cat") {
				usrChoice = "B";
				getline(inFS, petName);
				getline(inFS, petType);
				inFS >> hapStat >> hunStat >> sleStat;
				Cat* kitty = new Cat(petName, petType);
				kitty->setHappy(hapStat);
				kitty->setHunger(hunStat);
				kitty->setSleepy(sleStat);

				while (gameChoice != "Q") {
					kitty->draw();
					kitty->returnStatus();
					gameMenu(gameChoice, usrChoice);
					cin >> gameChoice;

					if (gameChoice == "A") {
						kitty->napTime();
					}
					else if (gameChoice == "B") {
						kitty->gameTime();
					}
					else if (gameChoice == "C") {
						kitty->eatSnack();
					}
					else if (gameChoice == "D") {
						kitty->specialTime();
					}
					++changeStat;

					if (changeStat % 3 == 0) {
						kitty->nextHour();
					}
				}

				ofstream outFS("saveData.txt");
				saveFile(kitty, outFS);
				std::cout << "Successfully saved the game!" << endl;

				usrChoice = "999";
				gameChoice = "999";
				changeStat = 0;
				outFS.close();
				delete kitty;
			}
			else if (newType == "Bat") {
				usrChoice = "C";
				getline(inFS, petName);
				getline(inFS, petType);
				inFS >> hapStat >> hunStat >> sleStat;
				Bat* batty = new Bat(petName, petType);
				batty->setHappy(hapStat);
				batty->setHunger(hunStat);
				batty->setSleepy(sleStat);

				while (gameChoice != "Q") {
					batty->draw();
					batty->returnStatus();
					gameMenu(gameChoice, usrChoice);
					cin >> gameChoice;

					if (gameChoice == "A") {
						batty->napTime();
					}
					else if (gameChoice == "B") {
						batty->gameTime();
					}
					else if (gameChoice == "C") {
						batty->eatSnack();
					}
					else if (gameChoice == "D") {
						batty->specialTime();
					}
					++changeStat;

					if (changeStat % 3 == 0) {
						batty->nextHour();
					}
				}

				ofstream outFS("saveData.txt");
				saveFile(batty, outFS);
				std::cout << "Successfully saved the game!" << endl;

				usrChoice = "999";
				gameChoice = "999";
				changeStat = 0;
				outFS.close();
				delete batty;
			}
			inFS.close();
		}
	}

	return 0;
}
void welcomeMsg() {
	std::cout << setfill('-') << setw(85) << "" << endl;
	std::cout << "d888888P                                                  dP            dP       oo " << endl;
	std::cout << "   88                                                     88            88          " << endl;
	std::cout << "   88    .d8888b. 88d8b.d8b. .d8888b. .d8888b. .d8888b. d8888P .d8888b. 88d888b. dP " << endl;
	std::cout << "   88    88'  `88 88'`88'`88 88'  `88 88'  `88 88'  `88   88   88'  `'' 88'  `88 88 " << endl;
	std::cout << "   88    88.  .88 88  88  88 88.  .88 88.  .88 88.  .88   88   88.  ... 88    88 88 " << endl;
	std::cout << "   dP    `88888P8 dP  dP  dP `88888P8 `8888P88 `88888P'   dP   `88888P' dP    dP dP " << endl;
	std::cout << "ooooooooooooooooooooooooooooooooooooooo~~~~.88~ooooooooooooooooooooooooooooooooooooo" << endl;
	std::cout << "                                       d8888P                                       " << endl;
	std::cout << setw(85) << "" << endl;
}
void usrMenu(string usrChoice) {
	if (usrChoice == "999") {
		std::cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;
		std::cout << "  Please choose any of the following options!" << endl;
		std::cout << "    1: New game." << endl;
		std::cout << "    2: Load game." << endl;
		std::cout << "    0: End the game." << endl;
		std::cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;
	}
	else if (usrChoice == "1") {
		std::cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;
		std::cout << "  Please choose your pet:" << endl;
		std::cout << "    A: Dog; The loyal companion." << endl;
		std::cout << "       -Needs more food." << endl;
		std::cout << "       -Needs more fun than other pets." << endl;
		std::cout << "    B: Cat; Your lazy pal." << endl;
		std::cout << "       -Easy to keep happy." << endl;
		std::cout << "       -Needs more sleep than other pets." << endl;
		std::cout << "    C: Bat; Venture into the night." << endl;
		std::cout << "       -Needs constant attention." << endl;
		std::cout << "       -Can eat bugs while out on a flight." << endl;
		std::cout << "    0: End the game." << endl;
		std::cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;

	}
	else if (usrChoice == "2") {
		std::cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;
	}
	else {
		std::cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;
		std::cout << "  Invalid choice! Please choose any of the following options!" << endl;
		std::cout << "    1: New game." << endl;
		std::cout << "    2: Load game." << endl;
		std::cout << "    0: End the game." << endl;
		std::cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;
	}
}

void gameMenu(string gameChoice, string usrChoice) {
	if (usrChoice == "A") {
		std::cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;
		std::cout << "  What would you like to do with your pet?" << endl;
		std::cout << "    A: Take a nap." << endl;
		std::cout << "    B: Play some games." << endl;
		std::cout << "    C: Eat a snack." << endl;
		std::cout << "    D: Participate in a race." << endl;
		std::cout << "    Q: Quit and save." << endl;
		std::cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;
	}
	else if (usrChoice == "B") {
		std::cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;
		std::cout << "  What would you like to do with your pet?" << endl;
		std::cout << "    A: Take a nap." << endl;
		std::cout << "    B: Play some games." << endl;
		std::cout << "    C: Eat a snack." << endl;
		std::cout << "    D: Sunbathe." << endl;
		std::cout << "    Q: Quit and save." << endl;
		std::cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;
	}
	else if (usrChoice == "C") {
		std::cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;
		std::cout << "  What would you like to do with your pet?" << endl;
		std::cout << "    A: Take a nap." << endl;
		std::cout << "    B: Play some games." << endl;
		std::cout << "    C: Eat a snack." << endl;
		std::cout << "    D: Go for a flight." << endl;
		std::cout << "    Q: Quit and save." << endl;
		std::cout << "x" << setfill('-') << setw(83) << "" << "x" << endl;
	}
}