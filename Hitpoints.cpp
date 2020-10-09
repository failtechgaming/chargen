

#include <iostream>
#include <stdio.h> //printf
#include <stdlib.h> // for rand
#include <time.h> // time
#include <ctime>
#include "DiceRoll.h" // Random dice roller
//#include "Classes.h"
// #include "attributes.h"

//extern int Class;
extern int HP;



int rollD6()
{
	 int x = rand() % 5 + 1;

	return x;
}

int rollD8()
{
	int x = rand() % 7 + 1;

	return x;
}

int rollD10()
{
	int x = rand() % 9 + 1;

	return x;
}

int rollD12()
{
	int x = rand() % 11 + 1;

	return x;
}

 int rollHitPoints(int Class)
{
	//int HP{};

	if (Class == 1)
		HP = rand() % 11 + 1;
	else if (Class == 2)
		HP = rand() % 7 + 1;
	else if (Class == 3)
			HP = rand() % 7 + 1;
	else if (Class == 4)
			HP = rand() % 7 + 1;
	else if (Class == 5)
			HP = rand() % 9 + 1;
	else if (Class == 6)
			HP = rand() % 7 + 1;
	else if (Class == 7)
			HP = rand() % 9 + 1;
	else if (Class == 8)
			HP = rand() % 9 + 1;
	else if (Class == 9)
			HP = rand() % 7 + 1;
	else if (Class == 10)
			HP = rand() % 5 + 1;
	else if (Class == 11)
			HP = rand() % 7 + 1;
	else
			HP = rand() % 5 + 1;

	// std::cout << "Your base HP is " << HP << '\n';

	return HP;

}

