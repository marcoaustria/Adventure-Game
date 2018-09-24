
//Author: Jesse Boakye-Donkor

#include <iostream>
#include <string>
#include "continent.h"

using namespace std;


bool Continent::australia() {

	int response; bool exit= false;
	//refills lives at the beginning
	currentPlayer->life_refill();
	while (!exit) {
		cout <<"1.) What is the highest mountain point in Australia?\n\t1.)Mount Feathertop\n\t2.) Mount Townsend\n\t3.) Mount Kosciuszko\n\t4.) Bimberi Peak\n\t5.)Exit Adventure"<<endl;

		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";
		//catches bad input
		if(!cin.fail()){

				if(response==3){

					cout << "Correct!" << endl;
                    //gains life if correct
					currentPlayer->gain_life();
            		cout<< "Lives: " << currentPlayer->life<< "\n" << endl;

					break;
				}

				else if(response==5){
					exit= true;
					return false;
				}

				else{

					if(currentPlayer->lose_life() !=0 ){
                        //loses life if answered incorrectly
						cout << "Your answer is incorrect. Please choose another."<<endl;
						cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
					}

					else{
						exit = true;
						cout<<"Sorry you have no lives left \u2764"<<endl;
						return false;
						break;
					}
				}
		}

		else{
			cout<<"Please enter a valid option."<< endl;
			cin.clear();
			cin.ignore();
			continue;
		}
	}

	while (!exit) {

		cout <<"2.) What year did Australia gain independence from Great Britain?\n\t1.)1888\n\t2.)1788\n\t3.)1786\n\t4.)1754\n\t5.)Exit Adventure"<<endl;

		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";
		if(!cin.fail()){

				if(response==2){

					cout << "Correct!" << endl;

					currentPlayer->gain_life();
            		cout<< "Lives: " << currentPlayer->life<< "\n" << endl;

					break;
				}


				else if(response==5){
					exit= true;return false;
				}

				else{

					if(currentPlayer->lose_life() !=0 ){
						cout << "Your answer is incorrect. Please choose another."<<endl;
						cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
					}

					else{
						exit = true;
						cout<<"Sorry you have no lives left \u2764"<<endl;return false;
						break;
					}
				}
		}

		else{
			cout<<"Please enter a valid option."<< endl;
			cin.clear();
			cin.ignore();
			continue;
		}
	}


	while(!exit) {

		cout <<"3.) In what city is the West Austrailian Opera house located in?\n\t1.)Perth\n\t2.)Syndey\n\t3.)Melbourne\n\t4.)Gold Coast\n\t5.)Exit Adventure"<<endl;

		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";
		if(!cin.fail()){

				if(response==1){

					cout << "Correct!" << endl;

					currentPlayer->gain_life();
            		cout<< "Lives: " << currentPlayer->life<< "\n" << endl;

					break;
				}

				else if(response==5){
					exit= true;return false;
				}

				else{

					if(currentPlayer->lose_life() !=0 ){
						cout << "Your answer is incorrect. Please choose another."<<endl;
						cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
					}

					else{
						exit = true;
						cout<<"Sorry you have no lives left \u2764"<<endl;return false;
						break;;
					}
				}
		}

		else{
			cout<<"Please enter a valid option."<< endl;
			cin.clear();
			cin.ignore();
			continue;
		}
	}

	while(!exit) {

		cout <<"4.) What type of art  is presented in the Australian Dream Time foundation?\n\t1.)Modern\n\t2.)Classical\n\t3.)Postmodern\n\t4.)Aborginal\n\t5.)Exit Adventure"<<endl;


		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";
		if(!cin.fail()){

				if(response==4){

					cout << "Correct!" << endl;

					currentPlayer->gain_life();
            		cout<< "Lives: " << currentPlayer->life<< "\n" << endl;

					break;
				}

				else if(response==5){
					exit= true;return false;
				}

				else{


					if(currentPlayer->lose_life() !=0 ){
						cout << "Your answer is incorrect. Please choose another."<<endl;
						cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
					}

					else{
						exit = true;
						cout<<"Sorry you have no lives left \u2764"<<endl;return false;
						break;
					}
				}
		}

		else{
			cout<<"Please enter a valid option."<< endl;
			cin.clear();
			cin.ignore();
			continue;
		}
	}

	while(!exit) {

		cout <<"5.) What is the purpose Australian Day?\n\t1.)Celebrate independence\n\t2.)Celebrate wildlife\n\t3.)Celebrate diversity\n\t4.)Celebrate sports\n\t5.)Exit Adventure"<<endl;


		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";
		if(!cin.fail()){

				if(response==3){

					cout << "Correct!" << endl;

					currentPlayer->gain_life();
            		cout<< "Lives: " << currentPlayer->life<< "\n" << endl;

					break;
				}

				else if(response==5){
					exit= true;return false;
				}

				else{


					if(currentPlayer->lose_life() !=0 ){
						cout << "Your answer is incorrect. Please choose another."<<endl;
						cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
					}

					else{
						exit = true;
						cout<<"Sorry you have no lives left \u2764"<<endl;return false;
						break;
					}
				}
		}

		else{
			cout<<"Please enter a valid option."<< endl;
			cin.clear();
			cin.ignore();
			continue;
		}
	}


	while(!exit) {

		cout <<"6.) Which desert is located in Australia?\n\t1.)Stony Desert\n\t2.)Gobi Desert\n\t3.)Sahara Desert\n\t4.)Atacama Desert\n\t5.)Exit Adventure"<<endl;


		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";
		if(!cin.fail()){

				if(response==1){

					cout << "Correct!" << endl;

					currentPlayer->gain_life();
            		cout<< "Lives: " << currentPlayer->life<< "\n" << endl;

					break;
				}

				else if(response==5){
					exit= true;return false;
				}

				else{


					if(currentPlayer->lose_life() !=0 ){
						cout << "Your answer is incorrect. Please choose another."<<endl;
						cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
					}

					else{
						exit = true;
						cout<<"Sorry you have no lives left \u2764"<<endl;return false;
						break;
					}
				}
		}


		else{
			cout<<"Please enter a valid option."<< endl;
			cin.clear();
			cin.ignore();
			continue;
		}
	}

while(!exit) {

		cout <<"7.) How big is the Kakakdu National Park in Australia?\n\t1.)10,000 km^2\n\t2.)30,000 km^2\n\t3.)20,000 km^2\n\t4.)15,000 km^2\n\t5.)Exit Adventure"<<endl;

		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";
		if(!cin.fail()){

				if(response==3){

					cout << "Correct!" << endl;

					currentPlayer->gain_life();
            		cout<< "Lives: " << currentPlayer->life<< "\n" << endl;


					break;
				}

				else if(response==5){
					exit= true;return false;
				}

				else{

					if(currentPlayer->lose_life() !=0 ){
						cout << "Your answer is incorrect. Please choose another."<<endl;
						cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
					}

					else{
						exit = true;
						cout<<"Sorry you have no lives left \u2764"<<endl;return false;
						break;
					}
				}
		}


		else{
			cout<<"Please enter a valid option."<< endl;
			cin.clear();
			cin.ignore();
			continue;
		}
	}

while(!exit) {

		cout <<"8.) What year did the Sydney Opera House officially open?\n\t1.)1994\n\t2.)1973\n\t3.)1937\n\t4.)1967\n\t5.)Exit Adventure"<<endl;

		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";
		if(!cin.fail()){

				if(response==2){

					cout << "Correct!" << endl;

					currentPlayer->gain_life();
            		cout<< "Lives: " << currentPlayer->life<< "\n" << endl;

					break;
				}

				else if(response==5){
					exit= true;return false;
				}

				else{

					if(currentPlayer->lose_life() !=0 ){
						cout << "Your answer is incorrect. Please choose another."<<endl;
						cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
					}

					else{
						exit = true;
						cout<<"Sorry you have no lives left \u2764"<<endl;return false;
						break;
					}
				}
		}


		else{
			cout<<"Please enter a valid option."<< endl;
			cin.clear();
			cin.ignore();
			continue;
		}
	}


while(!exit) {

		cout <<"9.) How many people live in Australia (as of 2016)?\n\t1.)24 million\n\t2.)37 million\n\t3.)55 million\n\t4.)16 million\n\t5.)Exit Adventure"<<endl;

		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";
		if(!cin.fail()){

				if(response==1){

					cout << "Correct!" << endl;

					currentPlayer->gain_life();
            		cout<< "Lives: " << currentPlayer->life<< "\n" << endl;

					break;
				}

				else if(response==5){
					exit= true;return false;
				}

				else{


					if(currentPlayer->lose_life() !=0 ){
						cout << "Your answer is incorrect. Please choose another."<<endl;
						cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
					}

					else{
						exit = true;
						cout<<"Sorry you have no lives left \u2764"<<endl;return false;
						break;
					}
				}
		}

		else{
			cout<<"Please enter a valid option."<< endl;
			cin.clear();
			cin.ignore();
			continue;
		}
	}

while(!exit) {

		cout <<"10.) How many states are in Australia?\n\t1.)13\n\t2.)7\n\t3.)6\n\t4.)10\n\t5.)Exit Adventure"<<endl;

		cout << "What is the answer?: ";
		cin >> response;
		cout << "\n";
		if(!cin.fail()){

				if(response==3){

					cout << "Correct!" << endl;

					currentPlayer->gain_life();
            		cout<< "Lives: " << currentPlayer->life<< "\n" << endl;


					break;
				}

				else if(response==5){
					exit= true;return false;
				}

				else{

					if(currentPlayer->lose_life() !=0 ){
						cout << "Your answer is incorrect. Please choose another."<<endl;
						cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
					}

					else{
						exit = true;
						cout<<"Sorry you have no lives left \u2764"<<endl;return false;
						break;
					}
				}
		}

		else{
			cout<<"Please enter a valid option."<< endl;
			cin.clear();
			cin.ignore();
			continue;
		}
	}

	//next question

	//at the very end of the adventure method
	return true;
}





