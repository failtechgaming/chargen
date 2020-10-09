#include <iostream>
#include <stdio.h> //printf
#include <stdlib.h> // for rand
#include <time.h> // time
#include <ctime>
#include "DiceRoll.h" // Random dice roller
//#include "attributes.h"
#include "randRace.h"
#include "ATRMod.h"

extern int Atr1{};
extern int Atr2{};
extern int Atr3{};
extern int Atr4{};
extern int Atr5{};
extern int Atr6{};
//extern int highest1{};

int findHighest1(int Atr1, int Atr2, int Atr3, int Atr4, int Atr5, int Atr6)
{
	int highest1{ Atr1 };
	if (Atr2 > highest1)
		highest1 = Atr2;
	if (Atr3 > highest1)
		highest1 = Atr3;
	if (Atr4 > highest1)
		highest1 = Atr4;
	if (Atr5 > highest1)
		highest1 = Atr5;
	if (Atr6 > highest1)
		highest1 = Atr6;

	return highest1;

}

/*
int findHighest2(int Atr1, int Atr2, int Atr3, int Atr4, int Atr5, int Atr6)
{
	int highest1{ Atr1 };
	if (Atr2 > highest1)
		highest1 = Atr2;
	if (Atr3 > highest1)
		highest1 = Atr3;
	if (Atr4 > highest1)
		highest1 = Atr4;
	if (Atr5 > highest1)
		highest1 = Atr5;
	if (Atr6 > highest1)
		highest1 = Atr6;

	int highest2{Atr1};
	
	if (highest2 != highest1)
		{
		if (Atr2 > highest2)
			highest2 = Atr2;
		if (Atr3 > highest2)
			highest2 = Atr3;
		if (Atr4 > highest2)
			highest2 = Atr4;
		if (Atr5 > highest2)
			highest2 = Atr5;
		if (Atr6 > highest2)
			highest2 = Atr6;
		}
	if (highest2 == highest1)
	{

		}
}
*/
