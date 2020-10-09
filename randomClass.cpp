#include <iostream>
#include <stdio.h> //printf
#include <stdlib.h> // for rand
#include <time.h> // time
#include <ctime>
#include "DiceRoll.h" // Random dice roller
//#include "attributes.h"
#include "randRace.h"
#include "ATRMod.h"

extern int Class;
//extern int rClass;


inline int randClass()
{
	Class = rand() % 11 + 1;

	return Class;
}



inline void className()
{
	if (Class == 1)
		std::cout << "Your class is Barbarian\n";
	else if (Class == 2)
		std::cout << "Your class is Bard\n";
	else if (Class == 3)
		std::cout << "Your class is Cleric\n";
	else if (Class == 4)
		std::cout << "Your class is Druid\n";
	else if (Class == 5)
		std::cout << "Your class is Fighter\n";
	else if (Class == 6)
		std::cout << "Your class is Monk\n";
	else if (Class == 7)
		std::cout << "Your class is Paladin\n";
	else if (Class == 8)
		std::cout << "Your class is Ranger\n";
	else if (Class == 9)
		std::cout << "Your class is Rogue\n";
	else if (Class == 10)
		std::cout << "Your class is Sorcerer\n";
	else if (Class == 11)
		std::cout << "Your class is Worlock\n";
	else
		std::cout << "Your class is Wizard\n";
}


