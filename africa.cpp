//Author: Neeka Sewnath

#include <iostream>
#include <string>
#include <stack>
#include "continent.h"


using namespace std;

bool Continent::africa() {
	int response;
	//refills player lives
	currentPlayer->life_refill();
	while (true) {
		cout << "1. Walking out of the airport in Cairo, Egypt,"
		" you notice a couple arguing with each other. "
		"You decide to ask them what the matter is. "
		"They tell you that they are arguing about which country is directly south of Egypt. "
		"The woman insists the country is Sudan. "
		"The man strongly believes its Libya. "
		"Because you are about to hop on a bus to trek south to this country, "
		"you confidently let them know that the country directly south of Egypt is: \n"
		"1. Sudan\n"
		"2. Libya\n"
		"3. Ethiopia\n"
		"4. Nigeria\n"
		"5. Exit Adventure\n";
		cout << endl;
		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";

        //catches failure
		if( cin.fail() ){

			cout<<"Please enter a valid option."<< endl;
			cin.clear();
			cin.ignore();
			continue;
		}

		switch (response) {
			case 1:
			cout<< "Correct!\n";
		    //If the answer is correct and they have less than 5 lives, you gain a life
			currentPlayer->gain_life();
			cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
			break;
			case 2:
			//If the answer is incorrect you lose a life, if you arrive at 0 lives,
			//you exit the game
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
			cout << "Please enter a valid option.\n" << endl;
			continue;
		} //switch
		break;
	}
	while (true){
		cout << "2. While wondering why the couple couldn’t just google a map of Africa, "
		"you arrive at your bus that you’re about to take to travel down to Sudan. "
		"The bus driver smiles at you and asks you what city you’re heading to. "
		"You want to go to the capital of Sudan so you say: \n"
		"1. Mogadishu\n"
		"2. Khartoum\n"
		"3. Pretoria\n"
		"4. Africa\n"
		"5. Exit Adventure\n";
		cout << endl;
		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";

		if( cin.fail() ){

			cout<<"Please enter a valid option."<< endl;
			cin.clear();
			cin.ignore();
			continue;
		}

		switch (response) {
			case 1:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 2:
			cout << "Correct! \n" << endl;
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
			cout << "Please enter a valid option.\n" << endl;
			continue;
		} //switch
		break;

	}
	while(true){
		cout << "3. After the 4 day bus ride to Khartoum, "
		"you become really close friends with the travelers on the bus. "
		"You meet a scientist who is very fascinated about human ancestors. "
		"She constantly talks about this famous human ancestor remains that was found in Ethiopia "
		"who lived about 3.2 million years ago. She says that the common name for this ancestor is: \n"
		"1. Mika\n"
		"2. Sarah\n"
		"3. Lucy\n"
		"4. Ethel\n"
		"5. Exit Adventure\n";
		cout << endl;
		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";

		if( cin.fail() ){

			cout<<"Please enter a valid option."<< endl;
			cin.clear();
			cin.ignore();
			continue;
		}

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
			cout << "Correct! \n" << endl;
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
			cout << "Please enter a valid option.\n" << endl;
			continue;
		} //switch
		break;
	}
	while(true){
		cout <<"4. After spending a couple weeks in Khartoum, "
		"you decide that it is time to visit someplace else. "
		"Since your final destination is Cape Town, South Africa, "
		"you decide to keep moving south down the continent. "
		"You also decide to take a plane this time because even though "
		"you made some good friends on the 4 day bus ride, it was a 4 day bus ride. "
		"You decide to jump two countries down south directly from where you are. "
		"Where will you end up? \n"
		"1. Zambia\n"
		"2. Namibia\n"
		"3. Uganda\n"
		"4. Cameroon\n"
		"5. Exit Adventure\n";
		cout << endl;
		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";


		if( cin.fail() ){

			cout<<"Please enter a valid option."<< endl;
			cin.clear();
			cin.ignore();
			continue;
		}

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
			cout << "Correct! \n" << endl;
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
			cout << "Please enter a valid option.\n" << endl;
			continue;
		} //switch
		break;
	}
	while(true){
		cout <<"5. When you arrive at the Kampala Airport in Uganda, "
		"you hail a taxi to take you to your hostel. "
		"The taxi driver says that he’s feeling good today so he will give you 20% off "
		"if you can tell him what Uganda’s national symbol is. "
		"This is a piece of cake to you because you have seen this symbol "
		"(which is a bird) all throughout the airport. You tell him that it is: \n"
		"1. The Bald Eagle\n"
		"2. The Grey Crowned Crane\n"
		"3. The Black Heron\n"
		"4. The Golden Snitch\n"
		"5. Exit Adventure\n";
		cout << endl;
		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";


		if( cin.fail() ){

			cout<<"Please enter a valid option."<< endl;
			cin.clear();
			cin.ignore();
			continue;
		}

		switch (response) {
			case 1:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 2:
			cout << " Correct! \n"<< endl;
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
			cout << "Please enter a valid option.\n" << endl;
			continue;
		} //switch
		break;
	}
	while(true){
		cout <<"6. After exploring Uganda for a while, "
		"you decide to fly out to Kenya. "
		"In Kenya, you decide you want to go on a real safari to experience Africa’s great animals. "
		"While on the safari, the driver tells you about how Africa has something called the Big Five. "
		"Hunters coined the term the Big Five in the past because of the fact that these animals are "
		"big and valuable but hard to hunt on foot. He tells you that the Big Five "
		"includes the African elephant, the African lion, the African leopard, the rhinoceros, and the: \n"
		"1. The Cape Buffalo\n"
		"2. The African Cheetah\n"
		"3. The Bengal Tiger\n"
		"4. The Tasmanian Devil\n"
		"5. Exit Adventure\n";
		cout << endl;
		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";


		if( cin.fail() ){

			cout<<"Please enter a valid option."<< endl;
			cin.clear();
			cin.ignore();
			continue;
		}

		switch (response) {
			case 1:
			cout <<"Correct! \n"<< endl;
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
			cout << "Please enter a valid option.\n" << endl;
			continue;
		} //switch
		break;
	}
	while(true){
		cout << "7. After exploring the savannahs of Kenya, you decide to take the edge of "
		"and grab a famous Kenyan cocktail made with vodka, white rum, honey, and lime juice. "
		"When you go up to the bartender you ask for a: \n"
		"1. Kwendo\n"
		"2. Screwdriver\n"
		"3. Quanda\n"
		"4. Dawa\n"
		"5. Exit Adventure\n";
		cout << endl;
		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";


		if( cin.fail() ){

			cout<<"Please enter a valid option."<< endl;
			cin.clear();
			cin.ignore();
			continue;
		}

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
			cout << "Correct! \n" << endl;
			currentPlayer->gain_life();
			cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
			break;
			case 5:
			return false;
			break;
			default:
			cout << "Please enter a valid option.\n" << endl;
			continue;
		} //switch
		break;
	}
	while(true){
		cout << "8. You decide on a whim to jump down further to Botswana. "
		"You learn that the Botswana is a pretty wealthy country "
		"because they have a lot of what mineral? "
		"1. Emeralds\n"
		"2. Rubies\n"
		"3. Pearls\n"
		"4. Diamonds\n"
		"5. Exit Adventure\n";
		cout << endl;
		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";


		if( cin.fail() ){

			cout<<"Please enter a valid option."<< endl;
			cin.clear();
			cin.ignore();
			continue;
		}


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
			continue;			case 3:
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
			case 4:
			cout << "Correct! \n" << endl;
			currentPlayer->gain_life();
			cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
			break;
			case 5:
			return false;
			break;
			default:
			cout << "Please enter a valid option.\n" << endl;
			continue;
		} //switch
		break;
	}
	while(true){
		cout << " 9. It’s finally time to head to South Africa. "
		"While at the airport you look at a map and realize that "
		"there are actually __ individual countries embedded within the "
		"country South Africa. \n"
		"1. two\n"
		"2. three\n"
		"3. four\n"
		"4. five\n"
		"5. Exit Adventure\n";
		cout << endl;
		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";


		if( cin.fail() ){

			cout<<"Please enter a valid option."<< endl;
			cin.clear();
			cin.ignore();
			continue;
		}

		switch (response) {
			case 1:
			cout <<"Correct! \n"<< endl;
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
			cout << "Please enter a valid option.\n" << endl;
			continue;
		} //switch
		break;
	}
	while(true){
		cout << "10. You finally meet up with your family in Cape Town, "
		"South Africa. You look back at your journey and you appreciate how far "
		"you’ve travelled and how much you learned along the way. Your cousin asked "
		"you how many total countries have you visited throughout your African adventure. "
		"You say:"
		"1. six!\n"
		"2. five!\n"
		"3. four!\n"
		"4. three!\n"
		"5. Exit Adventure\n";
		cout << endl;
		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";


		if( cin.fail() ){

			cout<<"Please enter a valid option."<< endl;
			cin.clear();
			cin.ignore();
			continue;
		}

		switch (response) {
			case 1:
			cout <<"Correct! Congrats! You have completed the African Adventure. Return to the airport for your next trip. \n"<< endl;
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
			cout << "Please enter a valid option.\n" << endl;
			continue;
		} //switch
		break;
	}
	//at the very end of the adventure method
	return true;
}
