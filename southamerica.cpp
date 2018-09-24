
//Author: Juan Leguizamon

#include <iostream>
#include <string>
#include "continent.h"

using namespace std;

bool Continent::southAmerica() {
	int response;
	//refills lives before game
	currentPlayer->life_refill();
	while (true) {
		cout << "Welcome to the continent of South America!\n"
		"During your time here, we will learn about the\n"
		"culture and geography of the many countries.\n"
		"Let us see how well you know about South America.\n"
		"How many countries are in this continent?\n"
		"1. 20\n"
		"2. 12\n"
		"3. 9\n"
		"4. 15\n"
		"5. Exit Adventure\n";
		cout << endl;
		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";
		switch (response) {
			case 1:
            //condition if answer is wrong
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 2:
            //condition is answer is right
			cout << "Correct!\n" << endl;
			currentPlayer->gain_life();
			cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
			break;
			case 3:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 4:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 5:
			return false;
			break;
			default:
			if(cin.fail()){
				cin.clear();
				cin.ignore();
				cout << "Please enter a valid option.\n" << endl;
				continue;
			}
			else
				cout << "Please enter a valid option.\n" << endl;
			continue;

		} //switch
		break;
	} //while
	while (true) {
		cout << "Now that we have established that there are 13\n"
		"countries in South America, we can start exploring\n"
		"things more in depth. Many languages are spoken\n"
		"within the respective languages but they all have\n"
		"a main language. Of the 13 Countries, 9 of them have\n"
		"Spanish as their principle language, 1 is English,\n"
		"1 is Dutch, 1 is French, and the last one is Portuguese.\n"
		"Which of the following country is the Dutch speaking country?\n"
		"1. Uruguay\n"
		"2. Guyana\n"
		"3. Suriname\n"
		"4. Bolivia\n"
		"5. Exit Adventure\n";
		cout << endl;
		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";
		switch (response) {
			case 1:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 2:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 3:
			cout << "Correct!\n" << endl;
			currentPlayer->gain_life();
			cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
			break;
			case 4:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 5:
			return false;
			break;
			default:
			if(cin.fail()){
				cin.clear();
				cin.ignore();
				cout << "Please enter a valid option.\n" << endl;
				continue;
			}
			else
				cout << "Please enter a valid option.\n" << endl;
			continue;

		} //switch
		break;
	} //while
	while (true) {
		cout << "Suriname is indeed the smallest country in South America with\n"
		"a population of 490,000. It was formally a Dutch and British\n"
		"colony which explains why their main language is Dutch. Suriname\n"
		"is considered to be a culturally Caribbean country and it is\n"
		"rather unexplored by tourist. The majority of Suriname (80 percent) is\n"
		"1. City(Infrastructure)\n"
		"2. Lakes and Rivers\n"
		"3. Islands\n"
		"4. Rainforests\n"
		"5. Exit Adventure\n";
		cout << endl;
		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";
		switch (response) {
			case 1:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 2:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 3:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 4:
			cout << "Correct!\n" << endl;
			currentPlayer->gain_life();
			cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
			break;
			case 5:
			return false;
			break;
			default:
			if(cin.fail()){
				cin.clear();
				cin.ignore();
				cout << "Please enter a valid option.\n" << endl;
				continue;
			}
			else
				cout << "Please enter a valid option.\n" << endl;
			continue;

		} //switch
		break;
	} //while
	while (true) {
		cout << "While we are on the topic of rainforest, there is a\n"
		"rainforest in South America that covers around 40 percent of\n"
		"the continent and it goes into 9 countries including: Colombia,\n"
		"Brazil, Peru, and Guyana. This rainforest is 2.124 million\n"
		"square miles in size and the majority of it is within Brazil.\n"
		"Name this rainforest.\n"
		"1. Amazon Rainforest\n"
		"2. Santa Elena Cloud Forest\n"
		"3. Congo Rainforest\n"
		"4. Valdivian Temperate Rainforest\n"
		"5. Exit Adventure\n";
		cout << endl;
		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";
		switch (response) {
			case 1:
			cout << "Correct!\n" << endl;
			currentPlayer->gain_life();
			cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
			break;
			case 2:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 3:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 4:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 5:
			return false;
			break;
			default:
			if(cin.fail()){
				cin.clear();
				cin.ignore();
				cout << "Please enter a valid option.\n" << endl;
				continue;
			}
			else
				cout << "Please enter a valid option.\n" << endl;
			continue;

		} //switch
		break;
	} //while
	while (true) {
		cout << "The Amazon Rainforest also holds an incredibly large river\n"
		"called the Amazon River. It runs 4,000 miles and flows\n"
		"through Peru, Brazil, Venezuela, Ecuador, and Bolivia.\n"
		"The source of the river is the Lago Villafro in the Andes\n"
		"Mountains. Are the Andes Mountains within Peru?\n"
		"1. Yes\n"
		"2. No\n"
		"3. I Don't Know\n"
		"4. Peru isn't in South America\n"
		"5. Exit Adventure\n";
		cout << endl;
		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";
		switch (response) {
			case 1:
			cout << "Correct!\n" << endl;
			currentPlayer->gain_life();
			cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
			break;
			case 2:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 3:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 4:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 5:
			return false;
			break;
			default:
			if(cin.fail()){
				cin.clear();
				cin.ignore();
				cout << "Please enter a valid option.\n" << endl;
				continue;
			}
			else
				cout << "Please enter a valid option.\n" << endl;
			continue;

		} //switch
		break;
	} //while
	while (true) {
		cout << "Peru is a very large country with an immense culture.\n"
		"They grow over 55 varieties of corn in varieties of\n"
		"colors even black and purple! Cusco is a city in Peru\n"
		"and it is the most important city in the whole of the Inca\n"
		"Empire. Cuy is the Spanish term for a Guinea Pig and it is\n"
		"a traditional dish eaten in Peru. There is another country within\n"
		"South America where Cuy is also a traditional dish, name the country.\n"
		"1. Paraguay\n"
		"2. Ecuador\n"
		"3. Venezuela\n"
		"4. Chile\n"
		"5. Exit Adventure\n";
		cout << endl;
		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";
		switch (response) {
			case 1:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 2:
			cout << "Correct!\n" << endl;
			currentPlayer->gain_life();
			cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
			break;
			case 3:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 4:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 5:
			return false;
			break;
			default:
			if(cin.fail()){
				cin.clear();
				cin.ignore();
				cout << "Please enter a valid option.\n" << endl;
				continue;
			}
			else
				cout << "Please enter a valid option.\n" << endl;
			continue;

		} //switch
		break;
	} //while
	while (true) {
		cout << "A country named after the equator which runs through\n"
		"it, Ecuador is one of the only two countries in South\n"
		"America that does not share a border with Brazil.\n"
		"Ecuadors flag is red, yellow, and blue which is also\n"
		"the colors of 2 other flags in South America. Which two\n"
		"countries flags have the same color and sequence of\n"
		"colors as Ecuador?\n"
		"1. Guyana and Venezuela\n"
		"2. Peru and Chile\n"
		"3. Argentina and Paraguay\n"
		"4. Colombia and Venezuela\n"
		"5. Exit Adventure\n";
		cout << endl;
		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";
		switch (response) {
			case 1:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 2:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			case 3:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 4:
			cout << "Correct!\n" << endl;
			currentPlayer->gain_life();
			cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
			break;
			case 5:
			return false;
			break;
			default:
			if(cin.fail()){
				cin.clear();
				cin.ignore();
				cout << "Please enter a valid option.\n" << endl;
				continue;
			}
			else
				cout << "Please enter a valid option.\n" << endl;
			continue;

		} //switch
		break;
	} //while
	while (true) {
		cout << "Colombian culture is immense and diverse. From rural life\n"
		"to modern urban environments, Colombia has something for\n"
		"everyone. People of different regions of Colombia have\n"
		"different nicknames and different dishes. While we are\n"
		"speaking of food, what is one of Colombias greatest exports?\n"
		"1. Coffee\n"
		"2. Tomatoes\n"
		"3. Tobacco\n"
		"4. Fish\n"
		"5. Exit Adventure\n";
		cout << endl;
		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";
		switch (response) {
			case 1:
			cout << "Correct!\n" << endl;
			currentPlayer->gain_life();
			cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
			break;
			case 2:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 3:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 4:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 5:
			return false;
			break;
			default:
			if(cin.fail()){
				cin.clear();
				cin.ignore();
				cout << "Please enter a valid option.\n" << endl;
				continue;
			}
			else
				cout << "Please enter a valid option.\n" << endl;
			continue;

		} //switch
		break;
	} //while
	while (true) {
		cout << "Soccer is the most popular sport in South American culture.\n"
		"9 countries have competed in soccers biggest event, the\n"
		"FIFA World Cup. Which of the following countries has participated\n"
		"20 times in the World Cup?\n"
		"1. Peru\n"
		"2. Colombia\n"
		"3. Uruguay\n"
		"4. Brazil\n"
		"5. Exit Adventure\n";
		cout << endl;
		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";
		switch (response) {
			case 1:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 2:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 3:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 4:
			cout << "Correct!\n" << endl;
			currentPlayer->gain_life();
			cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
			break;
			case 5:
			return false;
			break;
			default:
			if(cin.fail()){
				cin.clear();
				cin.ignore();
				cout << "Please enter a valid option.\n" << endl;
				continue;
			}
			else
				cout << "Please enter a valid option.\n" << endl;
			continue;

		} //switch
		break;
	} //while
	while (true) {
		cout << "We have nearly made it through all of the continent\n"
		"adventurer! Taking it all the way back at the end of\n"
		"our adventure, which empire originated in South America?\n"
		"To give you a hint, this empire was the most powerful\n"
		"empire until 1519 when a Spanish leader, Hernando Cortez,\n"
		"launched a war against them and colonized the land and culture.\n"
		"1. Incas\n"
		"2. Mayans\n"
		"3. Aztecs\n"
		"4. Hunnic\n"
		"5. Exit Adventure\n";
		cout << endl;
		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";
		switch (response) {
			case 1:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 2:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 3:
			cout << "Correct!\n" << endl;
			currentPlayer->gain_life();
			cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
			break;
			case 4:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 5:
			return false;
			break;
			default:
			if(cin.fail()){
				cin.clear();
				cin.ignore();
				cout << "Please enter a valid option.\n" << endl;
				continue;
			}
			else
				cout << "Please enter a valid option.\n" << endl;
			continue;

		} //switch
		break;
	} //while
	//next question

	//at the very end of the adventure method
	return true;
}

