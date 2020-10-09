#include <iostream>
#include <stdio.h> //printf
#include <stdlib.h> // for rand
#include <time.h> // time
#include <ctime>
#include "DiceRoll.h" // Random dice roller
// #include "attributes.h"



int findLowest(int dice1, int dice2, int dice3, int dice4)
{
	int lowest = dice1;

	if (dice2 < lowest)
		lowest = dice2;
	if (dice3 < lowest)
		lowest = dice3;
	if (dice4 < lowest)
		lowest = dice4;

	// std::cout << "The lowest score is :" << lowest << '\n';

	return lowest;
}

int getAbility()
{


	int dice1{};

	dice1 = rand() % 5 + 1;

	int dice2{};

	dice2 = rand() % 5 + 1;

	int dice3{};

	dice3 = rand() % 5 + 1;

	int dice4{};

	dice4 = rand() % 5 + 1;

	int lowest{ findLowest(dice1, dice2, dice3, dice4) };

	// findLowest(dice1, dice2, dice3, dice4);

	int ability{};

	//std::cout << "Your dice rolls were " << dice1 << " + " << dice2 << " + " << dice3 << " + " << dice4 << '\n';
 	//std::cout << "The score of " << findLowest(dice1, dice2, dice3, dice4) << " will be dropped.\n";
	ability = dice1 + dice2 + dice3 + dice4 - lowest;
	return ability;
}
