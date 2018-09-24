//Author: Bhavana

#include <iostream>
#include <iomanip>
#include <stack>
#include "continent.h"

using namespace std;
bool Continent::antarctica(){
currentPlayer->life_refill();
bool stay = true;
char answer;

    while(stay){
    cout<<"You land in Antarctica and there is a sign there that says 'Welcome to Antarctica! The largest continent in the world!' You think to yourself 'That's not right, Antarctica is the ___ largest continent the world.\nA) 5th\nB) 10th\nC) 3rd\nD) 4th\nE) Exit\nAnswer: \n";
    cin>>answer;

    //catches bad input
    if (cin.fail()){
		cin.clear();
		cin.ignore();
		cout<<"Invalid input"<<endl;
		continue;
}

//breaks out of antarctica adventure
if (answer=='E' || answer == 'e'){
	return false;
	break;
}

//conditions for choosing correct answer
if (answer=='A' || answer == 'a'){
	cout<<"Correct!\n";
	 currentPlayer->gain_life();
            cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
	break;
}
else {
    //conditions for choosing incorrect answer
	if(currentPlayer->lose_life() == 0){
                return false;
               }
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
	cout<<"Try again!\n";
}
}
while(stay){
cout<<"You feel very cold and you'd like to find somewhere less icy to stay. Unfortunately for you, _____ percent of Antarctica is covered by ice.\nA) 10% \nB) 60%\nC) 30%\nD) 99%\nE) Exit\nAnswer: \n";
cin>>answer;
if (cin.fail()){
		cin.clear();
		cin.ignore();
		cout<<"Invalid input"<<endl;
		continue;
	}
if (answer=='E' || answer == 'e'){
	return false;
	break;
}
if (answer=='D' || answer == 'd'){
	 currentPlayer->gain_life();
            cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
	cout<<"Correct!\n";
	break;
}
else {
	if(currentPlayer->lose_life() == 0){
                 return false;
               }
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
	cout<<"Try again!\n";
}
}
while(stay){
cout<<"Since you are stuck here you decide to see some of the natural wonders. You overhear a tour group talking about going to the highest point in Antarctica which is _____.\nA) Anvab Ninmarbs\nB) Mount St.Helens\nC) Mount Arctica\nD) Vinson Massif\nE) Exit\nAnswer: \n";
cin>>answer;
if (cin.fail()){
		cin.clear();
		cin.ignore();
		cout<<"Invalid input"<<endl;
		continue;
	}
if (answer=='E' || answer == 'e'){
	return false;
	break;
}
if (answer=='D' || answer == 'd'){
	 currentPlayer->gain_life();
            cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
	cout<<"Correct!\n";
	break;
}
else {
	if(currentPlayer->lose_life() == 0){
                return false;
               }
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
	cout<<"Try again!\n";
}
}
while(stay){
cout<<"On your way to the mountain you think about the unique animals you want to see while you're here. While Antarctica has a lot of interesting wildlife, you won't be able to see _____.\nA) Birds\nB) Reptiles\nC) Mammals\nD) Fish\nE) Exit\nAnswer: \n";
cin>>answer;
if (cin.fail()){
		cin.clear();
		cin.ignore();
		cout<<"Invalid input"<<endl;
		continue;
	}
if (answer=='E' || answer == 'e'){
	return false;
	break;
}
if (answer=='B' || answer == 'b'){
	cout<<"Correct!\n";
	 currentPlayer->gain_life();
            cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
	break;
}
else {
	if(currentPlayer->lose_life() == 0){
               return false;
               }
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
	cout<<"Try again!\n";
}
}
while(stay){
cout<<"You decide that exploring land is very boring and you decide to go on a boat trip in the waters surrounding Antarctica, also known as _____.\nA) The Southern Ocean\nB) The Ice Ocean\nC) The Sea of Arctica\nD) The Polar Sea\nE) Exit\nAnswer: \n";
cin>>answer;
if (cin.fail()){
		cin.clear();
		cin.ignore();
		cout<<"Invalid input"<<endl;
		continue;
	}
if (answer=='E' || answer == 'e'){
	return false;
	break;
}
if (answer=='A' || answer == 'a'){
	cout<<"Correct!\n";
	 currentPlayer->gain_life();
            cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
	break;
}
else {
	if(currentPlayer->lose_life() == 0){
               return false;
               }
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
	cout<<"Try again!\n";
}
}
while(stay){
cout<<"While you're on the boat you see an animal on the shore! Which one of these animals did you definitely not see?\nA) Seals\nB) Penguins\nC) Polar Bears\nD) Humans\nE) Exit\nAnswer: \n";
cin>>answer;
if (cin.fail()){
		cin.clear();
		cin.ignore();
		cout<<"Invalid input"<<endl;
		continue;
	}
if (answer=='E' || answer == 'e'){
return false;
	break;
}
if (answer=='C' || answer == 'c'){
	cout<<"Correct!\n";
	 currentPlayer->gain_life();
            cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
	break;
}
else {
	if(currentPlayer->lose_life() == 0){
                return false;
               }
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
	cout<<"Try again!\n";
}
}
while(stay){
cout<<"Although you are cold and lonely in Antarctica, you are grateful that you have been granted the experience to visit this unique ______.\nA) Desert\nB) Plateau\nC) Archipelago\nD) Jungle\nE) Exit\nAnswer: \n";
cin>>answer;
if (cin.fail()){
		cin.clear();
		cin.ignore();
		cout<<"Invalid input"<<endl;
		continue;
	}
if (answer=='E' || answer == 'e'){
	return false;
	break;
}
if (answer=='A' || answer == 'a'){
	cout<<"Correct!\n";
	 currentPlayer->gain_life();
            cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
	break;
}
else {
	if(currentPlayer->lose_life() == 0){
                return false;
               }
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
	cout<<"Try again!\n";
}
}
while (stay){
cout<<"You get a letter from your little sister and she asks you how 'Auntartica' is. You write a letter back explaining that it is spelled 'Antarctica' and it means _____.\nA) Very cold\nB) Ice place\nC) Opposite of north\nD) Bottom of earth\nE) Exit\nAnswer: \n";
cin>>answer;
if (cin.fail()){
		cin.clear();
		cin.ignore();
		cout<<"Invalid input"<<endl;
		continue;
	}
if (answer=='E' || answer == 'e'){
	return false;
	break;
}
if (answer=='C' || answer == 'c'){
	cout<<"Correct!\n";
	 currentPlayer->gain_life();
            cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
	break;
}
else {
	if(currentPlayer->lose_life() == 0){
                return false;
               }
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
	cout<<"Try again!\n";
}
}
while(stay){
cout<<"By now you really want to leave. Unfortunately you have to wait one more day for your flight. You're so annoyed you think 'Why did ____ have to discover this continent!'?\nA) James Cook\nB) Vasco de Gama\nC) Christopher Columbus\nD) John Arctic\nE) Exit\nAnswer: \n";
cin>>answer;
if (cin.fail()){
		cin.clear();
		cin.ignore();
		cout<<"Invalid input"<<endl;
		continue;
	}
if (answer=='E' || answer == 'e'){
	return false;
	break;
}
if (answer=='A' || answer == 'a'){
	cout<<"Correct!\n";
	 currentPlayer->gain_life();
            cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
	break;
}
else {
	if(currentPlayer->lose_life() == 0){
                return false;
               }
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
	cout<<"Try again!\n";
}
}
while(stay){
cout<<"As you leave you see a sign that says. Come back to Antarctica: the most fun place on Earth. You're not that it's the most fun place on earth but you know that Antarctica is the _____ place on earth.\nA) Sunniest\nB) Humidest\nC) Rainiest\nD) Windiest\nE) Exit\nAnswer: \n";
cin>>answer;
if (cin.fail()){
		cin.clear();
		cin.ignore();
		cout<<"Invalid input"<<endl;
		continue;
}
if (answer=='E' || answer == 'e'){
	return false;
	break;
}
if (answer=='D' || answer == 'd'){
	cout<<"Correct!\n";
	 currentPlayer->gain_life();
            cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
	break;
}
else {
	if(currentPlayer->lose_life() == 0){
                return false;
               }
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
		cout<<"Try again!\n";
}
}
return true;
}
