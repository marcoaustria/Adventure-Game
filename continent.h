//Authors: Group-17

#ifndef CONTINENT_H_
#define CONTINENT_H_
#include <stack>
#include <string>
#include <iostream>
using namespace std;

class Player {
private:
	string name;
	bool* completed;
public:
	Player();
    int lose_life();
    void gain_life();
    void life_refill();
	int life;
	string getName();
	bool* getCompleted();
	void changeCompleted(int choice);
};

class Continent {
public:
    //creates pointer to reference current player
    Continent(Player *CurrentPlayer)
    {
        currentPlayer = CurrentPlayer;
    }

    Player *currentPlayer;
	bool africa();
	bool asia();
	bool antarctica();
	bool europe();
	bool australia();
	bool northAmerica();
	bool southAmerica();
};

#endif /* CONTINENT_H_ */

