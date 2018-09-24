//Authors: Group-17

#include <iostream>
#include <string>
#include <stack>
#include <winsock2.h>
#include <windows.h>
#include <locale>
#include "continent.h"
using namespace std;

Player::Player() {
	//fills new array when player is initialized
	completed = new bool[7];
	for (int i = 0; i < 7; i++) {
		completed[i] = false;
	}
}
//when a player has completed a continent
void Player::changeCompleted(int choice) {
	completed[choice] = true;
}

string Player::getName() {
	cout << "NAME: ";
	cin >> name;
	cout << endl;
	return name;
}

bool* Player::getCompleted() {
	return completed;
}

//conditionally increments lives when questions are
//answered correctly
void Player::gain_life()
{
	if(life < 5)
        life++;
}

//conditionally decrements life when
//questions are answered incorrectly
int Player:: lose_life()
{
	if (life > 0)
		life--;
	return life;
}

//refills player lives at the top of each round
void Player:: life_refill()
{
	life = 5;
}


void printMenu() {

	cout << "Choose your adventure!\n";
	cout << "1. Africa\n";
	cout << "2. Asia\n";
	cout << "3. Antarctica\n";
	cout << "4. Europe\n";
	cout << "5. Australia\n";
	cout << "6. North America\n";
	cout << "7. South America\n";
	cout << "8. Print Instructions\n";
	cout << "9. Exit Adventure\n";
	cout << endl;
}

int main() {

	cout<<"Please open terminal to full screen for optimal playing.\n"<<endl;

	int totalComplete = 0;
	int selection = 0;
	Player q;
	Continent c(&q);
	string name = q.getName();
	bool* completed = q.getCompleted();

	cout << "Hello Adventurer " << name << "\n" << endl;
	cout<< "Playing Instructions: \n"
	"The player has 5 lives per continent to answer all the trivia correctly.\n"
	"if you answer a question incorrectly, you will lose 1 life. If you answer\n"
	"a question correctly, you will gain 1 life. If you at some point get to zero\n"
	"lives, you will be returned to the adventure selection menu and your progress\n"
	"in that respective continent will be lost and restarted. The objective of this\n"
	"game is to successfully complete all the continents.\n"<< endl;

//asks to select adventure
	while (true) {
		printMenu();
		cout << "Adventure Selection: ";
		cin >> selection;
		cout << endl;

		if (cin.fail()) {
			cout << "Please enter an integer option.\n" << endl;
			cin.clear();
			cin.ignore();
			continue;
		}

		if(selection == 8) {
			cout<< "Playing Instructions: \n"
			"The player has 5 lives per continent to answer all the trivia correctly.\n"
			"If you answer a question incorrectly, you will lose 1 life. If you answer\n"
			"a question correctly, you will gain 1 life. If you at some point get to zero\n"
			"lives, you will be returned to the adventure selection menu and your progress\n"
			"in that respective continent will be lost and restarted. The objective of this\n"
			"game is to successfully complete all the continents.\n";
		}

		if (selection == 9) {
			break;
		}

		//if player chooses number not on the list
		if (!(selection <= 9 && selection >= 1)) {
			cout << "Please select a valid option.\n" << endl;
			continue;
		}
		//if player chooses an option that has been completed
		if (selection != 8 && completed[selection - 1] == true) {
			cout
			<< "This adventure has already been completed. Please choose a new option.\n"
			<< endl;
			continue;
		}

		switch (selection) {
			case 1:
			if (c.africa() == true) {
				q.changeCompleted(0);
				totalComplete++;
			}
			break;
			case 2:
			if (c.asia() == true) {
				q.changeCompleted(1);
				totalComplete++;
			}
			break;
			case 3:
			if (c.antarctica() == true) {
				q.changeCompleted(2);
				totalComplete++;
			}
			break;
			case 4:
			if (c.europe() == true) {
				q.changeCompleted(3);
				totalComplete++;
			}
			break;
			case 5:
			if (c.australia() == true) {
				q.changeCompleted(4);
				totalComplete++;
			}
			break;
			case 6:
			if (c.northAmerica() == true) {
				q.changeCompleted(5);
				totalComplete++;
			}
			break;
			case 7:
			if (c.southAmerica() == true) {
				q.changeCompleted(6);
				totalComplete++;
			}
			break;
			default:
			cout << "That was not a valid selection, please try again.\n"<<endl;
			break;
		} //switch

		//if all adventures are completed, music plays
		if (totalComplete == 7) {
			cout << "Congratulations, you completed all the Adventures!\n"<< endl;
			//opens up URL and plays celebration youtube video
			string link = "www.youtube.com/watch?v=UWLIgjB9gGw";
			ShellExecute(NULL, "open", link.c_str(), NULL, NULL, SW_SHOWNORMAL);
			break;
		}

	} //while loop
	cout << "Goodbye!" << endl;
	return 0;
}
