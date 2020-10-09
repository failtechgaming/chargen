#include <iostream>
#include <stdio.h> //printf
#include <stdlib.h> // for rand
#include <time.h> // time
#include <ctime>
#include "DiceRoll.h" // Random dice roller
//#include "attributes.h"
#include "randRace.h"
#include "ATRMod.h"
#include "Classes.h"
#include <algorithm>


/*
extern int STR{};
extern int DEX{};
extern int CON{};
extern int INT{};
extern int WIS{};
extern int CHA{};
*/


void findClassAtr1(int Class, int classAtr1)
{
	//int Class;
	int STR{};
	int DEX{};
	int CON{};
	int INT{};
	int WIS{};
	int CHA{};
	//int classAtr1{};



	if (Class == 1)
	{
		std::cout << "Your class is Barbarian\n";
		STR = classAtr1;
	}
	else if (Class == 2)
	{
		std::cout << "Your class is Bard\n";
		CHA = classAtr1;
	}
	else if (Class == 3)
	{
		std::cout << "Your class is Cleric\n";
		classAtr1 = WIS;
	}
	else if (Class == 4)
	{
		std::cout << "Your class is Druid\n";
		classAtr1 = WIS;
	}
	else if (Class == 5)
	{
		std::cout << "Your class is Fighter\n";
		classAtr1 = STR;
	}
	else if (Class == 6)
	{
		std::cout << "Your class is Monk\n";
		classAtr1 = DEX;
	}
	else if (Class == 7)
	{
		std::cout << "Your class is Paladin\n";
		classAtr1 = CHA;
	}
	else if (Class == 8)
	{
		std::cout << "Your class is Ranger\n";
		classAtr1 = DEX;
	}
	else if (Class == 9)
	{
		std::cout << "Your class is Rogue\n";
		classAtr1 = DEX;
	}
	else if (Class == 10)
	{
		std::cout << "Your class is Sorcerer\n";
		classAtr1 = CHA;
	}
	else if (Class == 11)
	{
		std::cout << "Your class is Worlock\n";
		classAtr1 = CHA;
	}
	else if (Class == 12)
	{
		std::cout << "Your class is Wizard\n";
		classAtr1 = INT;
	}
}

