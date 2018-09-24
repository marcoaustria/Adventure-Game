//Author: Carley Mead

#include <iostream>
#include <string>
#include "continent.h"

using namespace std;

bool Continent::northAmerica() {
	int response;
	currentPlayer->life_refill();
	while (true) {
		cout << "Yay! You made it to North America!\n"
		 		"While you are here visiting, you will learn all about\n"
		 		"the customs and about different fun facts you may not know!\n"
		 		"Let's see how well you know North America and what may\n"
		 		"surprise you!\n"

		 		"When you first landed, you were standing in a state that once\n"
		 		"was a part of Mexico, but now is part of the USA.\n"
		 		"Where are you?\n"
		 		"1. Nevada\n"
				"2. Texas\n"
				"3. California\n"
				"4. Florida\n"
				"5. Exit Adventure\n";
		cout << endl;
		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";
		switch (response) {
		case 1:
		if(currentPlayer->lose_life()==0)
			return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: "<<currentPlayer->life<<"\n"<<endl;
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
		cout << "Now that we have figured out you are located in Texas\n"
				"we can now go and learn some more interesting facts\n"
				"that North America has to offer!\n"
				"You are now travelling throughout the continent in search for\n"
				"the tallest building North America has to offer!\n"
				"Where do you end up travelling to?\n"
		 		"1. Trump Tower in New York\n"
				"2. Empire State Building in New York\n"
				"3. The CN Building in Canada\n"
				"4. The Disney Castle in Orlando Florida\n"
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
			cout<<"Lives: "<<currentPlayer->life<<"\n"<<endl;
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
		break;;
	} //while
	while (true) {
		cout << "The CN Tower, located in downtown Toronto, Ontario, Canada,\n"
				"stands at a whopping 1,815.4 feet tall, and is a concrete \n"
				"communications and observation tower!\n"
				"Now that you have travelled all the way fro Texas to Toronto,\n"
				"we know that you must be hungry and think about what restaurant you may\n"
				"come across, which fast food chain do you think that you will run into first?\n"
		 		"1. McDonalds\n"
				"2. Kentuckey Fried Chicken\n"
				"3. Chick-Fil-A\n"
				"4. Subway\n"
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
			cout<<"Lives: "<<currentPlayer->life<<"\n"<<endl;
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
		cout << "Once you've filled your empty stomach with a delicious sandwich\n"
		 		"from Subway you can keep on moving throughout the interesting continent\n"
		 		"of North America! You now are on your way to the most famous and majestic \n"
		 		"waterfall of them all!\n"
		 		"Name this waterfall.\n"
		 		"1. Niagara Falls\n"
				"2. Sutherland Falls\n"
				"3. Yosemite Falls\n"
				"4. Angel Falls\n"
				"5. Exit Adventure\n";
		cout << endl;
		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";
		switch (response) {
		case 1:
			cout << "Correct!\n" << endl;
			currentPlayer->gain_life();
			cout<<"Lives: "<<currentPlayer->life<<"\n"<<endl;
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
		cout << "Of course you're at Niagara Falls! And while it may not be the\n"
				"tallest, it still is pretty grande at 167 feet!\n"
				"But congrats! You are now halfway through your journey in North America\n"
				"You have now wandered to the most famour mountain, situated in the Black Hills in\n"
				"South Dakota, USA that illustrates the faces of four American Presidents...\n"
				"Where are you?\n"
		 		"1. Mount Rushmore\n"
				"2. County Hill\n"
				"3. Paynes Prairie\n"
				"4. American Mountain\n"
				"5. Exit Adventure\n";
		cout << endl;
		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";
		switch (response) {
		case 1:
			cout << "Correct!\n" << endl;
			currentPlayer->gain_life();
			cout<<"Lives: "<<currentPlayer->life<<"\n"<<endl;
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
		cout << "Mount Rushmore was created with the efforts of nearly 400 men and women\n"
				"Each day they climbed up to the top of the mountain, then were lowered over\n"
				"the front of the 500 foot face of the mountain!\n"
				"The work was exciting, but incedibly dangerous; 90% of the mountain was carved\n"
				"using dynamite! But now you must move on to discover more of North Americas treasures\n"
				"before your trip ends! You now must make your way down to Mexico when you relazie all you have\n"
				"is $100 in American money, how much is that worth in Mexico?\n"
		 		"1. 100 Pesos\n"
				"2. 2,044.36 Pesos\n"
				"3. 567.98 Pesos\n"
				"4. 56.78 Pesos\n"
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
			cout<<"Lives: "<<currentPlayer->life<<"\n"<<endl;
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
		cout << "Once you know you are good on money (and basically rich) you\n"
		 		"decide to venture off to the beautiful beaches of Mexico and\n"
		 		"after speaking to come of the locals around Mexico, they insist\n"
		 		"you must go to the prettiest beach in the country!\n"
		 		"Where do they send you?\n"
		 		"1. Tulum\n"
				"2. Cozumel\n"
				"3. St. Augustine\n"
				"4. Playa de Carmen\n"
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
			cout<<"Lives: "<<currentPlayer->life<<"\n"<<endl;
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
		cout << "Majority of the locals believe Playa de Carmen is the prettiest\n"
				"place in Mexico and is one of the most popular as well!\n"
				"But now you must be on your way and travel back to Canada, but once you\n"
				"make it there, all you hear is a language other than English,\n"
				"what langauge do you expect them to be speaking\n"
		 		"1. French\n"
				"2. Italian\n"
				"3. Japanese\n"
				"4. Spanish\n"
				"5. Exit Adventure\n";
		cout << endl;
		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";
		switch (response) {
		case 1:
			cout << "Correct!\n" << endl;
			currentPlayer->gain_life();
			cout<<"Lives: "<<currentPlayer->life<<"\n"<<endl;
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
		cout << "French is to Canada as English is to the US. You will find it taught in schools and\n"
				"written on signs. Canada started out as a French territory but then France lost\n"
				"Canada to the Brits during the Seven Years' War, but Canada refused to assimilate with\n"
				 "the new British colonists and never picked up the English Language!\n"
				 "But now that you have realized that the Canadians were speaking the language of\n"
				 "French, you were able to find someone to translate and you ask them to direct you to their capital.\n"
		 		"Where do they send you?\n"
		 		"1. Alberta\n"
				"2. Vancouver\n"
				"3. Quebec\n"
				"4. Ottawa\n"
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
			cout<<"Lives: "<<currentPlayer->life<<"\n"<<endl;
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
		cout << "Yay! You are now so close to being able to continue your travels\n"
				"to other countries but in order to continue your journey, you must fly\n"
				"out of the largest airport in North America!\n"
				"Where must you go too?\n"

		 		"1. LA International Airport\n"
				"2. Charlotte Douglas International Airport\n"
				"3. Atlanta International Airport\n"
				"4. Gainesville Airport\n"
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
			cout << "Correct! You have completed your North American adventure!\n" << endl;
			currentPlayer->gain_life();
			cout<<"Lives: "<<currentPlayer->life<<"\n"<<endl;
			break;
		case 4:
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
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

