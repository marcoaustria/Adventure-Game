
//Author: Marco Austria

#include <iostream>
#include <string>
#include "continent.h"
using namespace std;

bool Continent::europe() {
	int response;
	currentPlayer->life_refill();

	//intro
	cout << "Get ready to travel Europe!\n" << endl;

	//question 1
	cout << "Let's head over to Zürich, Switzerland.\n" << endl;
	cout << "OFFICIAL NAME: The Swiss Confederation\n"
			"POPULATION: 8,061,516\nCAPITAL: Bern\n"
			"AREA: 15,940 square miles\n"
			"OFFICIAL LANGUAGES: German, French, Italian, Romansch\n"
			"MONEY: Swiss franc\n" << endl;
	cout << "How tall is the highest peak in the Swiss Alps?\n" << endl;
	cout << "1. 10,113ft\n"
			"2. 15,203ft\n"
			"3. 7,365ft\n"
			"4. 9,324ft\n"
			"5. Exit Adventure\n" << endl;

	//loop to ask for correct answer
	while (true) {
		cout << "What is the answer?: ";
		cin >> response;
		cout << endl;

		//if response is not an integer
		if (cin.fail()) {
			cout << "Please enter an integer option.\n" << endl;
			cin.clear();
			cin.ignore();
			continue;
		}

		//exits adventure
		if (response == 5) {
			return false;
		}
		//correct answer
		else if (response == 2) {
			cout
					<< "Answer: 2. The highest peak in the Swiss Alps is Dufourspitze at 15,203 feet.\n"
					<< endl;

			currentPlayer->gain_life();
			cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
			break;
		}
		//incorrect answer
		else if (response <= 4 && response >= 1) {

		if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
		}
		//integer that is not an option
		else {
			cout << "Please enter a valid option.\n" << endl;
			continue;
		}
	} //while

	//question 2
	cout << "Let's head over to Barcelona, Spain.\n" << endl;
	cout
			<< "OFFICIAL NAME: Kingdom of Spain\n"
					"FORM OF GOVERNMENT: Parliamentary monarchy\n"
					"CAPITAL: Madrid\n"
					"POPULATION: 47,737,941\n"
					"OFFICIAL LANGUAGES: Castilian Spanish, Basque, Catalan, and Galician\n"
					"MONEY: Euro\n"
					"AREA: 195,363 square miles (505,988 square kilometers)\n"
			<< endl;
	cout
			<< "The Basílica i Temple Expiatori de la Sagrada Família is a large Roman Catholic church in Barcelona,\n"
					"designed by Catalan Spanish architect Antoni Gaudí.\n"
					"\nConstruction of Sagrada Família commenced in 1882, finishing when?\n"
			<< endl;
	cout << "1. 1910\n"
			"2. 1927\n"
			"3. 1983\n"
			"4. 2026\n"
			"5. Exit Adventure\n" << endl;
	while (true) {
		cout << "What is the answer?: ";
		cin >> response;
		cout << endl;

		if (cin.fail()) {
			cout << "Please enter an integer option.\n" << endl;
			cin.clear();
			cin.ignore();
			continue;
		}

		if (response == 5) {
			return false;
		} else if (response == 4) {
			cout
					<< "Answer: 4. La Sagrada Família  is yet to be completed, with an anticipated completion date of 2026.\n"
					<< endl;
			currentPlayer->gain_life();
			cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
			break;
		} else if (response <= 4 && response >= 1) {
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
		} else {
			cout << "Please enter a valid option.\n" << endl;
			continue;
		}
	} //while

	//question 3
	cout << "Let's head over to Paris, France.\n" << endl;
	cout << "OFFICIAL NAME: French Republic\n"
			"FORM OF GOVERNMENT: Republic\n"
			"CAPITAL: Paris\n"
			"POPULATION: 66,259,012\n"
			"OFFICIAL LANGUAGES: French\n"
			"MONEY: Euro\n"
			"AREA: 210,026 square miles (543,965 square kilometers)\n" << endl;
	cout << "The Eiffel Tower in Paris, France has how many steps?\n" << endl;
	cout << "1. 897\n"
			"2. 1,257\n"
			"3. 1,665\n"
			"4. 2,478\n"
			"5. Exit Adventure\n" << endl;
	while (true) {
		cout << "What is the answer?: ";
		cin >> response;
		cout << endl;

		if (cin.fail()) {
			cout << "Please enter an integer option.\n" << endl;
			cin.clear();
			cin.ignore();
			continue;
		}

		if (response == 5) {
			return false;
		} else if (response == 3) {
			cout
					<< "Answer: 3. The Eiffel Tower has 1,665 steps.\n"
							"\nFun Fact: During WW2, when Hitler visited Paris, the French cut the lift cables on the Eiffel Tower\n"
							"so that Hitler would have to climb the steps if he wanted to reach the top.\n"
					<< endl;
			currentPlayer->gain_life();
			cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
			break;
		} else if (response <= 4 && response >= 1) {
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
		} else {
			cout << "Please enter a valid option.\n" << endl;
			continue;
		}
	} //while

	//question 4
	cout << "Let's head over to Stonehenge, England.\n" << endl;
	cout
			<< "OFFICIAL NAME: United Kingdom of Great Britain and Northern Ireland\n"
					"FORM OF GOVERNMENT: Constitutional monarchy with parliamentary government\n"
					"CAPITAL: London\n"
					"POPULATION: 63,742,977\n"
					"OFFICIAL LANGUAGE: English\n"
					"MONEY: Pound sterling\n"
					"AREA: 93,635 square miles (242,514 square kilometers)\n"
			<< endl;
	cout
			<< "Stonehenge is a massive stone monument located on a chalky plain north of the modern-day city of Salisbury, England.\n"
					"Research shows that the site has continuously evolved over a period of about 10,000 years.\n"
					"The structure that we call “Stonehenge” was built between roughly 5,000 and 4,000 years ago\n"
					"and that forms just one part of a larger, and highly complex, sacred landscape.\n"
					"\nThe biggest of Stonehenge’s stones, known as sarsens, are up to 30 feet tall and weigh on average how much?\n"
			<< endl;
	cout << "1. 19 tons\n"
			"2. 11 tons\n"
			"3. 53 tons\n"
			"4. 25 tons\n"
			"5. Exit Adventure\n" << endl;
	while (true) {
		cout << "What is the answer?: ";
		cin >> response;
		cout << endl;

		if (cin.fail()) {
			cout << "Please enter an integer option.\n" << endl;
			cin.clear();
			cin.ignore();
			continue;
		}

		if (response == 5) {
			return false;
		} else if (response == 4) {
			cout
					<< "Answer: 4. The biggest of Stonehenge’s stones weigh 25 tons on average.\n"
					<< endl;

			currentPlayer->gain_life();
			cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
			break;
		} else if (response <= 4 && response >= 1) {
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
		} else {
			cout << "Please enter a valid option.\n" << endl;
			continue;
		}
	} //while

	//question 5
	cout << "Let's head over to Iceland.\n" << endl;
	cout
			<< "OFFICIAL NAME: Republic of Iceland\n"
					"FORM OF GOVERNMENT: Constitutional republic\n"
					"CAPITAL: Reykjavík\n"
					"POPULATION: 317,000\n"
					"OFFICIAL LANGUAGE: Icelandic (Others include: English, Nordic languages, German)\n"
					"MONEY: Icelandic króna\n"
					"AREA: 39,769 square miles (103,001 square kilometers)\n"
			<< endl;
	cout
			<< "The northern lights also known as Aurora Borealis (named after Aurora the Roman goddess of dawn\n"
					"and Boreas the greek name for the north wind) are a natural light display in the earths\n"
					"atmosphere which occur normally at night in the polar regions.\n"
					"\nWhat causes the northern lights?\n" << endl;
	cout
			<< "1. The northern lights or aurora borealis occur mainly as a result of solar wind particles\n"
					"and ions which flow outwards from the sun towards the earth.\n"
					"On reaching the earth’s upper atmosphere (100km above the earth)\n"
					"they collide with atmospheric particles and ions and in this\n"
					"process create a fantastic array of light and colors which dance\n"
					"in the night sky in the form of a glow, smoke or curtain effect.\n"
					"2. Disney Magic\n"
					"3. Projectors\n"
					"4. Aurora and Boreas\n"
					"5. Exit Adventure\n" << endl;
	while (true) {
		cout << "What is the answer?: ";
		cin >> response;
		cout << endl;

		if (cin.fail()) {
			cout << "Please enter an integer option.\n" << endl;
			cin.clear();
			cin.ignore();
			continue;
		}

		if (response == 5) {
			return false;
		} else if (response == 1) {
			cout << "Answer: 1. Some crazy science.\n" << endl;
			currentPlayer->gain_life();
			cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
			break;
		} else if (response <= 4 && response >= 1) {
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
		} else {
			cout << "Please enter a valid option.\n" << endl;
			continue;
		}
	} //while

	//question 6
	cout << "Let's head over to Ireland.\n" << endl;
	cout << "OFFICIAL NAME: Ireland\n"
			"FORM OF GOVERNMENT: Constitutional Democracy\n"
			"CAPITAL: Dublin\n"
			"POPULATION: 4,832,765\n"
			"MONEY: Euro\n"
			"OFFICIAL LANGUAGES: Irish/English\n"
			"AREA: 26,592 square miles (68,890 square kilometers)\n" << endl;
	cout << "Did you know that there are no wild snakes in Ireland?\n" << endl;
	cout << "1. Yes\n"
			"2. No\n"
			"3. Maybe\n"
			"4. So\n"
			"5. Exit Adventure\n" << endl;
	while (true) {
		cout << "What is the answer?: ";
		cin >> response;
		cout << endl;

		if (cin.fail()) {
			cout << "Please enter an integer option.\n" << endl;
			cin.clear();
			cin.ignore();
			continue;
		}

		if (response == 5) {
			return false;
		} else if (response == 2) {
			cout
					<< "Answer: 2. Be humble.\n"
							"\nThe sea has stopped many animals common on mainland Europe from reaching the island.\n"
							"There are also only two wild mouse species, one type of lizard, and just three kinds of amphibians.\n"
							"\nFun Fact: Ireland is home to hills and medieval castles.\n"
					<< endl;
			currentPlayer->gain_life();
			cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
			break;
		} else if (response <= 4 && response >= 1) {
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
		} else {
			cout << "Please enter a valid option.\n" << endl;
			continue;
		}
	} //while

	//question 7
	cout << "Let's head over to Italy.\n" << endl;
	cout << "OFFICIAL NAME: Italian Republic\n"
			"FORM OF GOVERNMENT: Republic\n"
			"CAPITAL: Rome\n"
			"POPULATION: 61,680,122\n"
			"OFFICIAL LANGUAGE: Italian\n"
			"MONEY: Euro\n"
			"AREA: 116,324 square miles (301,277 square kilometers)\n" << endl;
	cout << "Why does the Tower of Pisa lean?\n" << endl;
	cout << "1. Gravity\n"
			"2. Foundation\n"
			"3. Materials\n"
			"4. Weather(wind, snow, etc.)\n"
			"5. Exit Adventure\n" << endl;
	while (true) {
		cout << "What is the answer?: ";
		cin >> response;
		cout << endl;

		if (cin.fail()) {
			cout << "Please enter an integer option.\n" << endl;
			cin.clear();
			cin.ignore();
			continue;
		}

		if (response == 5) {
			return false;
		} else if (response == 2) {
			cout
					<< "Answer: 2. The leaning of the Tower of Pisa comes into the story in 1173, when construction began.\n"
							"Thanks to the soft ground, it had begun to lean by the time its builders got to the third story, in 1178.\n"
							"Shifting soil had destabilized the tower’s foundations. Over the next 800 years, it became clear the 55-metre\n"
							"tower wasn’t just leaning but was actually falling at a rate of one to two millimeters per year.\n"
							"Today, the Leaning Tower of Pisa is more than five meters off perpendicular. Its architect and engineer\n"
							"tried to correct this by making the remaining stories shorter on the uphill side – but to no avail. It kept\n"
							"leaning more and more. The lean, first noted when three of the tower’s eight stories had been built, resulted\n"
							"from the foundation stones being laid on soft ground consisting of clay, fine sand and shells.\n"
					<< endl;

			currentPlayer->gain_life();
			cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
			break;
		} else if (response <= 4 && response >= 1) {
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
		} else {
			cout << "Please enter a valid option.\n" << endl;
			continue;
		}
	} //while

	//question 8
	cout << "Let's head over to Athens, Greece.\n" << endl;
	cout << "OFFICIAL NAME: Hellenic Republic\n"
			"FORM OF GOVERNMENT: Parliamentary republic\n"
			"CAPITAL: Athens\n"
			"POPULATION: 10,722,816\n"
			"OFFICIAL LANGUAGE: Greek\n"
			"MONEY: Euro\n"
			"AREA: 50,942 square miles (131,940 square kilometers)\n" << endl;
	cout
			<< "Acropolis is a monument in Athens, Greece, built in ancient times around 440 B.C. for what purpose?\n"
			<< endl;
	cout << "1. A courthouse\n"
			"2. Meeting place for intellectuals\n"
			"3. Tourist attraction\n"
			"4. Temple to the deity Athena\n"
			"5. Exit Adventure\n" << endl;
	while (true) {
		cout << "What is the answer?: ";
		cin >> response;
		cout << endl;

		if (cin.fail()) {
			cout << "Please enter an integer option.\n" << endl;
			cin.clear();
			cin.ignore();
			continue;
		}

		if (response == 5) {
			return false;
		} else if (response == 4) {
			cout
					<< "Answer: 4. The flagship building of the Acropolis of Athens served as a temple to Athena.\n"
							"The Acropolis served as the preeminent sanctuary of the ancient city of Athens, according\n"
							"to the Hellenic Ministry of Culture. Its primary purpose was to provide sacred grounds\n"
							"dedicated to Athena, the city's matron deity. The Acropolis played host to festivals, cults\n"
							"and historically significant events during the peak of Athens' power.\n"
							"\nFun Fact: 'Acropolis' comes from two Greek words meaning 'edge' (acro-) and 'city' (-opolis).\n"
							"Literally, it means 'city on the extremity'.\n"
					<< endl;
			currentPlayer->gain_life();
			cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
			break;
		} else if (response <= 4 && response >= 1) {
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
		} else {
			cout << "Please enter a valid option.\n" << endl;
			continue;
		}
	} //while

	//question 9
	cout << "Let's head over to Turkey.\n" << endl;
	cout << "OFFICIAL NAME: Republic of Turkey\n"
			"FORM OF GOVERNMENT: Parliamentary democracy\n"
			"CAPITAL: Ankara\n"
			"AREA: 302,535 square miles (783,562 square kilometers)\n"
			"POPULATION: 81,619,392\n"
			"OFFICIAL LANGUAGE: Turkish\n"
			"MONEY: Turkish lira\n" << endl;
	cout
			<< "Located in Istanbul, Turkey is the Blue Mosque(Sultanahmet Mosque) built around 1610.\n"
					"\nIt is called the Blue Mosque because…\n" << endl;
	cout << "1. Its main dome is blue\n"
			"2. It is made with blue bricks\n"
			"3. Its blue tiles inside\n"
			"4. The architect was sad with its results\n"
			"5. Exit Adventure\n" << endl;
	while (true) {
		cout << "What is the answer?: ";
		cin >> response;
		cout << endl;

		if (cin.fail()) {
			cout << "Please enter an integer option.\n" << endl;
			cin.clear();
			cin.ignore();
			continue;
		}

		if (response == 5) {
			return false;
		} else if (response == 3) {
			cout
					<< "Answer: 3. Wondering why it was dubbed the Blue Mosque? Well, you may be puzzled\n"
							"as you approach the mosque as its exterior has not even a hint of blue… but\n"
							"it’ll all make sense when you walk inside and see striking blue tiles.\n"
							"The mosque’s interior has 20,000 blue tiles that line its high ceiling.\n"
							"The oldest of these tiles feature flowers, trees and abstract patterns that\n"
							"make them fine examples of sixteenth century Iznik design.\n"
					<< endl;

			currentPlayer->gain_life();
			cout<< "Lives: " << currentPlayer->life<< "\n" << endl;
			break;
		} else if (response <= 4 && response >= 1) {
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
		} else {
			cout << "Please enter a valid option.\n" << endl;
			continue;
		}
	} //while

	//question 10
	cout << "Let's head over to Moscow, Russia.\n" << endl;
	cout << "Official Name: Russian Federation\n"
			"Form of Government: Federation\n"
			"Capital: Moscow\n"
			"Population: 142,470,272\n"
			"Official Language: Russian\n"
			"Money: Ruble\n"
			"Area: 6,592,772 square miles (17,075,200 square kilometers)\n"
			<< endl;
	cout
			<< "St. Basil’s Cathedral in Moscow, Russia was built in the 16th Century by Ivan the Terrible,\n"
					"the first Tsar of Russia.\n"
					"\nWhat was the cathedral’s original color?\n" << endl;
	cout << "1. Red brick\n"
			"2. White and Gold\n"
			"3. Greystone\n"
			"4. Red, Blue, and White\n"
			"5. Exit Adventure\n" << endl;
	while (true) {
		cout << "What is the answer?: ";
		cin >> response;
		cout << endl;

		if (cin.fail()) {
			cout << "Please enter an integer option.\n" << endl;
			cin.clear();
			cin.ignore();
			continue;
		}

		if (response == 5) {
			return false;
		} else if (response == 2) {
			cout
					<< "Answer: 2. The brilliant colors weren’t added for over 200 years.\n"
							"The cathedral’s original color was said to be white to match the\n"
							"white stone of the Kremlin, while the domes were gold. Starting in\n"
							"the 17th century, the façade and domes began to be painted in the\n"
							"remarkable colors that are seen today, and the pigment is said to be\n"
							"taken from a Biblical description, in the Book of Revelation, of the\n"
							"Kingdom of Heaven.\n" << endl;

			currentPlayer->gain_life();
			cout<< "Lives: " << currentPlayer->life<< "\n" << endl;

			break;
		} else if (response <= 4 && response >= 1) {
			if(currentPlayer->lose_life() == 0)
				return false;
			cout << "Your answer is incorrect. Please choose another.\n" << endl;
			cout << "Lives: " << currentPlayer->life << "\n" << endl;
			continue;
		} else {
			cout << "Please enter a valid option.\n" << endl;
			continue;
		}
	} //while

//at the very end of the adventure method
	cout << "Congratulations! You finished your adventure of Europe!\n" << endl;
	return true;
}
