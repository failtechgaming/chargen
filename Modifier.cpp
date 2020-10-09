#include <iostream>
#include <stdio.h> //printf
#include <stdlib.h> // for rand
#include <time.h> // time
#include <ctime>
#include "DiceRoll.h" // Random dice roller
// #include "attributes.h"

extern int mod{};

int modifier(int x)
{

	

	if (x == 1)
		mod = -5;
	else if ((x == 2) || (x == 3))
		mod = -4;
	else if ((x == 4) || (x == 5))
		mod = -3;
	else if ((x == 6) || (x == 7))
		mod = -2;
	else if ((x == 8) || (x == 9))
		mod = -1;
	else if ((x == 10) || (x == 11))
		mod = 0;
	else if ((x == 12) || (x == 13))
		mod = 1;
	else if ((x == 14) || (x == 15))
		mod = 2;
	else if ((x == 16) || (x == 17))
		mod = 3;
	else if ((x == 18) || (x == 19))
		mod = 4;
	else if ((x == 20) || (x == 21))
		mod = 5;

	// std::cout << "The ability modifier is " << mod << '\n';

	return mod;
}

int randRace()
{
	return 0;
}
