#include <iostream>
#include <stdio.h> //printf
#include <stdlib.h> // for rand
#include <time.h> // time
#include <ctime>
#include "DiceRoll.h" // Random dice roller
//#include "attributes.h"
#include "randRace.h"
#include "Races.h"



extern int race;




//int atrModification()
//{
//	return 0;
//}

int strModification(int &STR)
{
	
	if (race == 1)
		STR += 2;
	else if (race == 6)
		STR = STR + 2;
	else if (race == 8)
		STR = STR + 1;
	
	return STR;
 }

int dexModification(int &DEX)
{
	if (race == 3)
		DEX = DEX + 2;
	else if (race == 7)
		DEX = DEX + 2;
	else if (race == 8)
		DEX = DEX + 1;
	else if (race == 10)
		DEX = DEX + 2;
	else if (race == 11)
		DEX = DEX + 2;
	else if (race == 12)
		DEX = DEX + 2;
	else if (race == 4)
		DEX = DEX + 1;

	return DEX;
}

int conModification(int &CON)
{
	if (race == 2)
		CON = CON + 2;
	else if (race == 6)
		CON = CON + 1;
	else if (race == 8)
		CON = CON + 1;
	else if (race == 9)
		CON = CON + 2;
	else if (race == 12)
		CON = CON + 1;
	else if (race == 13)
		CON = CON + 1;

	return CON;
}

int intModification(int &INT)
{
	if (race == 4)
		INT = INT + 2;
	else if (race == 8)
		INT = INT + 1;
	else if (race == 9)
		INT = INT + 1;
	else if (race == 3)
		INT = INT + 1;
	else if (race == 13)
		INT = INT + 2;

	return INT;
}

int wisModification(int &WIS)
{
	if (race == 8)
		WIS = WIS + 1;
	if (race == 2)
		WIS = WIS + 1;
	if (race == 10)
		WIS = WIS + 1;

	return WIS;
}

int chaModification(int &CHA)
{
	if (race == 1)
		CHA = CHA + 1;
	else if (race == 5)
		CHA = CHA + 2;
	else if (race == 8)
		CHA = CHA + 1;
	else if (race == 9)
		CHA = CHA + 2;
	else if (race == 11)
		CHA = CHA + 1;
	else if (race == 7)
		CHA = CHA + 1;

	return CHA;
}



/*int atrModification(int STR, int DEX, int CON, int INT, int WIS, int CHA)
{
	strModification(STR);
	dexModification(DEX);
	conModification(CON);
	intModification(INT);
	wisModification(WIS);
	chaModification(CHA);

	return STR;

}
*/