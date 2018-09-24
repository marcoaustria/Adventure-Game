//Author: Ali

#include <iostream>
#include <string>
#include <stack>
#include "continent.h"

using namespace std;

bool Continent::asia() {
    int response;
    //refills player lives at the beginning
    currentPlayer->life_refill();
    while (true) {
        cout << "You have reached China and you want to exchange some of your American Dollars into Chinese yen. The current market conversion rate it 6.86 yen per 1 dollar. The currency exchange makes money by using a lower conversion rate that the market rate. If you have 200 dollars you want to convert that into yen and the currency exchange will use a 6.10 yen per 1 dollar conversion rate, How much money is the currency exchange making from " << endl;

        cout << "1. 151 yen\n"
        "2. 40 yen\n"
        "3. 121 yen\n"
        "4. 51 yen\n"
        "5. Exit Adventure\n" << endl;

        cout << endl;
        cout << "What is the answer?: ";
        cin >> response;
        cout << "\n";

        //catches bad input
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
        cout << "While in China you decide that you want to take a bus to visit the capital. If you are currently in shanghai which Bus route do you want to take? \n" << endl;
        cout << "1. Shanghi to Nanijing\n "
        "2. Shanghi to Tokyo \n"
        "3. Shanghi to Beijing \n"
        "4. Shanghi to Hong Kong \n"
        "5. Exit Adventure\n" << endl;

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
        cout << "After you spend time in China you decide to visit one of 7 wonders of the world that are not located in China. You decide to go where?\n" << endl;

        cout << "1. Tokyo\n"
        "2. Japan]n"
        "3. India\n"
        "4. Taiwan\n"
        "5. Exit Adventure\n" << endl;

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
        cout <<"Once you make it to India you decide to  go south and visit a country that use to be part of the country you are currently in. Which country Is this?" << endl;


        cout << "1. Korea\n"
        "2. Japan\n"
        "3. Pakistan\n"
        "4. Taiwan\n"
        "5. Exit Adventure\n" << endl;
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
        cout <<" You find out that Pakistan does not allow you to drink alcohol and you really want to drink some alcohol so you decide to visit Japan. What is the drinking age in Japan?" << endl;
        cout
        <<
        "1. 16\n"
        "2. 20\n"
        "3. 28\n"
        "4. 21\n"
        "5. 25\n" << endl;

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
        cout <<"After you get drunk you meet a random person you knew in high school. You two catch up and you find out that they work at this Japanese Company?\n" << endl;
        cout << "1. Nintendo\n"
        "2. Microsoft\n"
        "3. Apple\n"
        "4. JP Morgan Chase\n"
        "5. Exit Adventure\n" << endl;

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
        cout << "Your friend then takes you to a taping of the Japanese Verison of Who wants to be a Millionaire. What is the name of this show?\n" << endl;


        cout << "1. Who wants to be a Yenionaire\n"
        "2. There is no Japanese version of Who wants to be a Millionaire your friend is very intoxicated\n?\n"
        "3. Big money Yen Yen \n"
        "4. Quiz $ Millionaire?"
        "5. Exit Adventure\n" << endl;

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
        cout << "While in the audience you are chosen to participate in the first round of the game show. In this round 10 audience members are asked a question and the first one to answer gets to play the actual game and have a change to make a lot of money. The question you are asked is what is the color of the Japanese flag. The following are possible answers you think are right, which one do you chose?\n" << endl;

        cout << "1. Blue\n"
        "2. Green\n"
        "3. purple"
        "4. black\n"
        "5. Exit Adventure\n" << endl;
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


        switch (response) { // all of these are wrong so it doesnt matter what the user picks
            case 1:
                cout<<"Correct! \n" << endl;
                currentPlayer->gain_life();
                cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
                break;
            case 2:
                cout << "Correct! \n" << endl;
                currentPlayer->gain_life();
                cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
                break;
                continue;
            case 3:
                cout << "Correct! \n" << endl;
                currentPlayer->gain_life();
                cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
                break;
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
        cout << "It turns out that that was not the correct color of the Japanese Flag. You get very sad and decide not to watch the rest of the show. You and your high school friend leave and go get dinner. You remember reading a reddit post once featuring an American fast food chain selling a burger painted black in Japan and want to eat one for dinner. Which American fast food chain do you go to? \n" << endl;
        cout << "1. Burger King\n"
        "2. Wendy's\n"
        "3. McDonalds\n"
        "4. Chick fil A\n"
        "5. Exit Adventure\n" << endl;
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
        cout << "Unfortunate Burger King no longer sells the black burger. You buy a normal burger from them instead. After dinner you and your high school friend say good bye. Now its time for you to leave Asia. Since you do not have a car you need a ride. Which American based transportation service do you use that is also available in Japan?\n" << endl;

        cout << "1. Uber\n"
        "2. Lyft\n"
        "3. NY Taxi\n"
        "4. Bullet Train\n"
        "5. Exit Adventure\n" << endl;

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
                cout <<"Correct! Congrats! You have completed the Asian Adventure. Return to the airport for your next trip. \n"<< endl;
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

