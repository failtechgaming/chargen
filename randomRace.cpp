#include <iostream>
#include <stdio.h> //printf
#include <stdlib.h> // for rand
#include <time.h> // time
#include <ctime>
#include "DiceRoll.h" // Random dice roller
//#include "attributes.h"

extern int race;

int ranRace()
{
	// int race{};

	race = rand() % 13 + 1;

	return race;
}



//extern int race;
/*
void className()
{
}
*/

void raceName()
{
	if (race == 1)
		std::cout << "Dragonborn \n";
	else if (race == 2)
		std::cout << "Hill Dwarf\n";
	else if (race == 3)
		std::cout << "High Elf\n";
	else if (race == 4)
		std::cout << "Forest Gnome\n";
	else if (race == 5)
		std::cout << "Half-Elf\n";
	else if (race == 6)
		std::cout << "Half-Orc\n";
	else if (race == 7)
		std::cout << "Lightfoot Halfing\n";
	else if (race == 8)
		std::cout << "Human\n";
	else if (race == 9)
		std::cout << "Mountain Dwarf\n";
	else if (race == 10)
		std::cout << "Wood Elf\n";
	else if (race == 11)
		std::cout << "Drow (Elf)\n";
	else if (race == 12)
		std::cout << "Stout Halfling\n";
	else if (race == 13)
		std::cout << "Rock Gnome\n";
	else
		std::cout << "Tiefling\n";

}