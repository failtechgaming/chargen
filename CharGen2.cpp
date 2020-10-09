#include <iostream>
#include <stdio.h> //printf
#include <stdlib.h> // for rand
#include <time.h> // time
#include <ctime>
#include "DiceRoll.h" // Random dice roller
#include "attributes.h"
#include "randRace.h"
#include "ATRMod.h"
#include <algorithm>
#include "randomClass.cpp"
//#include "AllNames.cpp"
//#include "ClassAtr.cpp"
//#include "Chargen.h"



//extern int race{};

char insertLine()
{
	std::cout << "-----------------------------\n";

	return 0;
}

char shortLine()
{
	std::cout << "-----\n";

	return 0;
}

char blankLine()
{
	std::cout << '\n';

	return 0;
}

int modifier(int x);

int randRace();

int rollHitPoints(int x);


int randClass();
int ranRace();

extern int mod;
extern int strMod{};
extern int dexMod{};
extern int conMod{};
extern int intMod{};
extern int wisMod{};
extern int chaMod{};

/*extern int Atr1{};
extern int Atr2{};
extern int Atr3{};
extern int Atr4{};
extern int Atr5{};
extern int Atr6{};
*/

extern int highest1{};

/*
extern int STR{};
extern int DEX{};
extern int CON{};
extern int INT{};
extern int WIS{};
extern int CHA{};
*/

void className();
void raceName();
int findHighest1(int Atr1, int Atr2, int Atr3, int Atr4, int Atr5, int Atr6);
void findClassAtr1(int Class, int classAtr1);
int rollFirstName();
void rollArmor();
void rollWeapon();
void randTrinket();
void rollGear();
//int findName(int randName);

extern int randName;
//int findName(int randName);

extern int race;

extern int HP;
extern int Class;

extern int classAtr1;

/*namespace Attributes
{
	enum Attributes
	{
		ATR1,
		ATR2,
		ATR3,
		ATR4,
		ATR5,
		ATR6,
		MAX_ATR

	};
}*/

const int SIZE = 6;

void rollBackground()
{

	std::string sBackground[13] =
	{
		"Acolyte",
		"Charlatan",
		"Criminal",
		"Entertainer",
		"Folk Hero",
		"Guild Artisan",
		"Hermit",
		"Noble",
		"Outlander",
		"Sage",
		"Sailor",
		"Soldier",
		"Urchin",
	};
	int randBackground = rand() % 13;

	//std::string armorName = sArmor[randArmor];
	std::cout << sBackground[randBackground] << " background\n";

};

int rollD4()
{

	int x = rand() % 3 + 1;

	return x;
}

int main()
{
	srand(time(NULL));

	std::cout << "Random Dungeons and Dragons Character Generator, 5th edition\n";
	std::cout << "Copyright 2020 Failtech Games\n";
	std::cout << '\n';
	std::cout << "THE BEER - WARE LICENSE (Revision 42):\n";
	std::cout << "<codinginquarantine@gmail.com> wrote this file. As long as you retain this notice you\n";
	std::cout << "can do whatever you want with this stuff. If we meet some day, and you think\n";
	std::cout << "this stuff is worth it, you can buy me a beer in return.\n";


	system("pause");

	randClass();
	//className();



	//std::cout << "Your class is " << Class << '\n';

	//step here to determine class atr features

	int dice[6]{};
	dice[0] = getAbility();
	dice[1] = getAbility();
	dice[2] = getAbility();
	dice[3] = getAbility();
	dice[4] = getAbility();
	dice[5] = getAbility();

	std::sort(dice, dice + SIZE);

	//std::cout << "sorted array looks like this: " << '\n';
	//for (size_t i = 0; i != SIZE; ++i)
	//	std::cout << dice[i] << " ";

	//blankLine();
	shortLine();
	//blankLine();

	int classAtr1{ dice[5] };

	std::random_shuffle(dice, dice + SIZE - 1);
	/*
	std::cout << dice[0] << '\n';
	std::cout << dice[1] << '\n';
	std::cout << dice[2] << '\n';
	std::cout << dice[3] << '\n';
	std::cout << dice[4] << '\n';
	std::cout << dice[5] << '\n';
	*/

	//Future John: possibly breaking up classes by ATR and nesting functions?
	// done



	//findClassAtr1(Class, classAtr1);
	//std::cout << "The highest dice score is " << classAtr1 << '\n';

	//copied from ClassAtr.cpp

	rollFirstName();
	//std::cout << "Your name is " << findName(randName) << '\n';
	//blankLine();
	shortLine();
	//findName(randName);
	//blankLine();
	ranRace();
	//race = 9;
	raceName();

	if (Class == 1)
	{
		std::cout << "Barbarian\n";
		STR = classAtr1;
		DEX = dice[0];
		CON = dice[1];
		INT = dice[2];
		WIS = dice[3];
		CHA = dice[4];

	}
	else if (Class == 2)
	{
		std::cout << "Bard\n";
		STR = dice[0];
		DEX = dice[1];
		CON = dice[2];
		INT = dice[3];
		WIS = dice[4];
		CHA = classAtr1;
	}
	else if (Class == 3)
	{
		std::cout << "Cleric\n";
		STR = dice[0];
		DEX = dice[1];
		CON = dice[2];
		INT = dice[3];
		WIS = classAtr1;
		CHA = dice[4];
	}
	else if (Class == 4)
	{
		std::cout << "Druid\n";
		STR = dice[0];
		DEX = dice[1];
		CON = dice[2];
		INT = dice[3];
		WIS = classAtr1;
		CHA = dice[4];
	}
	else if (Class == 5)
	{
		std::cout << "Fighter\n";
		STR = classAtr1;
		DEX = dice[0];
		CON = dice[1];
		INT = dice[2];
		WIS = dice[3];
		CHA = dice[4];
	}
	else if (Class == 6)
	{
		std::cout << "Monk\n";
		STR = dice[0];
		DEX = classAtr1;
		CON = dice[1];
		INT = dice[2];
		WIS = dice[3];
		CHA = dice[4];
	}
	else if (Class == 7)
	{
		std::cout << "Paladin\n";
		STR = dice[0];
		DEX = dice[1];
		CON = dice[2];
		INT = dice[3];
		WIS = dice[4];
		CHA = classAtr1;
	}
	else if (Class == 8)
	{
		std::cout << "Ranger\n";
		STR = dice[0];
		DEX = classAtr1;
		CON = dice[1];
		INT = dice[2];
		WIS = dice[3];
		CHA = dice[4];
	}
	else if (Class == 9)
	{
		std::cout << "Rogue\n";
		STR = dice[0];
		DEX = classAtr1;
		CON = dice[1];
		INT = dice[2];
		WIS = dice[3];
		CHA = dice[4];
	}
	else if (Class == 10)
	{
		std::cout << "Sorcerer\n";
		STR = dice[0];
		DEX = dice[1];
		CON = dice[2];
		INT = dice[3];
		WIS = dice[4];
		CHA = classAtr1;
	}
	else if (Class == 11)
	{
		std::cout << "Worlock\n";
		STR = dice[0];
		DEX = dice[1];
		CON = dice[2];
		INT = dice[3];
		WIS = dice[4];
		CHA = classAtr1;
	}
	else if (Class == 12)
	{
		std::cout << "Wizard\n";
		STR = dice[0];
		DEX = dice[1];
		CON = dice[2];
		INT = classAtr1;
		WIS = dice[3];
		CHA = dice[4];
	}

	//rollBackground();

	std::string sBackground[13] =
	{
		"Acolyte",
		"Charlatan",
		"Criminal",
		"Entertainer",
		"Folk Hero",
		"Guild Artisan",
		"Hermit",
		"Noble",
		"Outlander",
		"Sage",
		"Sailor",
		"Soldier",
		"Urchin",
	};
	int randBackground = rand() % 13;

	//std::string armorName = sArmor[randArmor];
	std::cout << sBackground[randBackground] << " background\n";



	//STR = getAbility();
	//std::cout << "the ATR1 score is" <<  dice[0] << '\n';

	//shortLine();

	// std::cout << "Race is " << race << '\n';
	//shortLine();

	//shortLine();
	//blankLine();

	/*int Atr1{ getAbility() };
	int Atr2{ getAbility() };
	int Atr3{ getAbility() };
	int Atr4{ getAbility() };
	int Atr5{ getAbility() };
	int Atr6{ getAbility() };

	int highest1 = findHighest1(Atr1, Atr2, Atr3, Atr4, Atr5, Atr6);
	std::cout << highest1 << '\n';*/



	std::cout << "----------STRENGTH-----------\n";

	// shortLine();
	blankLine();
	//std::cout << "Your base STR score is " << STR << '\n';
	modifier(STR);
	strModification(STR);
	strMod = modifier(STR);
	std::cout << "STR: " << STR << " | " << "MOD: " << mod << '\n';
	// std::cout << "The ability modifier is " << mod << '\n';
	//insertLine();
	//blankLine();

	std::cout << "----------DEXTERITY----------\n";

	// shortLine();
	blankLine();
	// std::cout << "Your base DEX score is " << DEX << '\n';
	modifier(DEX);
	dexModification(DEX);
	dexMod = modifier(DEX);
	std::cout << "DEX:  " << DEX << " | " << "MOD: " << mod << '\n';
	// std::cout << "The ability modifier is " << mod << '\n';
	//insertLine();
	//blankLine();

	std::cout << "----------CONSTITUTION-------\n";

	//shortLine();
	blankLine();
	// std::cout << "Your base CON scoreis " << CON << '\n';
	modifier(CON);
	conModification(CON);
	conMod = modifier(CON);
	std::cout << "CON: " << CON << " | " << "MOD: " << mod << '\n';
	// std::cout << "The ability modifier is " << mod << '\n';
	//insertLine();
	//blankLine();

	std::cout << "----------INTELLIGENCE-------\n";

	// shortLine();
	blankLine();
	// std::cout << "Your base INT score is " << INT << '\n';
	modifier(INT);
	intModification(INT);
	intMod = modifier(INT);
	std::cout << "INT: " << INT << " | " << "MOD: " << mod << '\n';
	//std::cout << "The ability modifier is " << mod << '\n';
	//insertLine();
	//blankLine();

	std::cout << "----------WISDOM-------------\n";

	// shortLine();
	blankLine();
	// std::cout << "Your base WIS score is " << WIS << '\n';
	modifier(WIS);
	wisModification(WIS);
	wisMod = modifier(WIS);
	std::cout << "WIS: " << WIS << " | " << "MOD: " << mod << '\n';
	// std::cout << "The ability modifier is " << mod << '\n';
	//insertLine();
	//blankLine();

	std::cout << "----------CHARISMA-----------\n";

	//shortLine();
	blankLine();
	// std::cout << "Your base CHA score is " << CHA << '\n';
	modifier(CHA);
	chaModification(CHA);
	chaMod = modifier(CHA);
	std::cout << "CHA: " << CHA << " | " << "MOD: " << mod << '\n';
	// std::cout << "The ability modifier is " << mod << '\n';
	insertLine();
	//blankLine();

	system("pause");


	// randRace();

	insertLine();
	//std::cout << "Your race is " << race << '\n';
	int athletics = strMod;
	int acrobatics = dexMod;
	int sleightofhand = dexMod;
	int stealth = dexMod;
	int arcana = intMod;
	int history = intMod;
	int investigation = intMod;
	int nature = intMod;
	int religion = intMod;
	int animalhandling = wisMod;
	int insight = wisMod;
	int medicine = wisMod;
	int perception = wisMod;
	int survival = wisMod;
	int deception = chaMod;
	int intimidation = chaMod;
	int performance = chaMod;
	int persuasion = chaMod;

	
	switch (randBackground)
	{
	case 0:
		insight = insight + 2;
		religion = religion + 2;
		break;
	case 1:
		deception = deception + 2;
		sleightofhand = sleightofhand + 2;
		break;
	case 2:
		deception = deception + 2;
		stealth = stealth + 2;
		break;
	case 3:
		acrobatics = acrobatics + 2;
		performance = performance + 2;
		break;
	case 4:
		animalhandling = animalhandling + 2;
		survival = survival + 2;
		break;
	case 5:
		insight = insight + 2;
		persuasion = persuasion + 2;
		break;
	case 6:
		medicine = medicine + 2;
		religion = religion + 2;
		break;
	case 7:
		history = history + 2;
		persuasion = persuasion + 2;
		break;
	case 8:
		athletics = athletics + 2;
		survival = survival + 2;
		break;
	case 9:
		arcana = arcana + 2;
		history = history + 2;
		break;
	case 10:
		athletics = athletics + 2;
		perception = perception + 2;
		break;
	case 11:
		athletics = athletics + 2;
		intimidation = intimidation + 2;
		break;
	case 12:
		sleightofhand = sleightofhand + 2;
		stealth = stealth + 2;
		break;
	}
	
	
	std::cout << "STR skills - " << " | " << "Athletics: " << athletics << '\n';


	
	std::cout << "DEX skills - " << " | " << "Acrobatics: " << acrobatics << " | " << "Sleight of Hand: " << sleightofhand << " | " << "Stealth: " << stealth << '\n';

	
	std::cout << "INT skills - " << " | " << "Arcana: " << arcana << " | " << " History: " << history << " | " << "Investigation: " << investigation << " | " << "Nature: " << nature << " | " << "Religion: " << religion << '\n';

	
	std::cout << "WIS skills - " << " | " << "Animal Handling: " << animalhandling << " | " << "Insight: " << insight << " | " << "Medicine: " << medicine << " | " << "Perception: " << perception << " | " << "Survival: " << survival << '\n';

	
	std::cout << "CHA skills - " << " | " << "Deception: " << deception << " | " << "Intimidation: " << intimidation << " | " << "Performance: " << performance << " | " << "Persuasion: " << persuasion << '\n';

	//void testSkill();
	//testSkill();
	insertLine();

	//std::cout << "HP:\n";
	rollHitPoints(Class);
	std::cout << "HP: You have " << HP + modifier(CON) << " hit points at level 1\n";
	rollArmor();
	rollWeapon();
	rollGear();
	rollGear();
	randTrinket();
	int x;
	
	switch (Class)
	{

	case 1:
		x = (rand() % 3 + 1) + (rand() % 3 + 1) * 10;
		std::cout << "GOLD:" << x << " starting gold" << '\n';
		break;
	case 2:
		x = (rand() % 3 + 1) + (rand() % 3 + 1) + (rand() % 3 + 1) + (rand() % 3 + 1) + (rand() % 3 + 1) * 10;
		std::cout  << "GOLD: " << x << " starting gold" << '\n';
		break;
	case 3:
		x = (rand() % 3 + 1) + (rand() % 3 + 1) + (rand() % 3 + 1) + (rand() % 3 + 1) + (rand() % 3 + 1) * 10;
		std::cout << "GOLD: " << x << " starting gold" << '\n';
		break;
	case 4:
		x = (rand() % 3 + 1) + (rand() % 3 + 1) * 10;
		std::cout << "GOLD: " << x << " starting gold" << '\n';
		break;
	case 5:
		x = (rand() % 3 + 1) + (rand() % 3 + 1) + (rand() % 3 + 1) + (rand() % 3 + 1) + (rand() % 3 + 1) * 10;
		std::cout << "GOLD: " << x << " starting gold" << '\n';
		break;
	case 6:
		x = (rand() % 3 + 1) + (rand() % 3 + 1) + (rand() % 3 + 1) + (rand() % 3 + 1) + (rand() % 3 + 1);
		std::cout << "GOLD: " << x << " starting gold" << '\n';
		break;
	case 7:
		x = (rand() % 3 + 1) + (rand() % 3 + 1) + (rand() % 3 + 1) + (rand() % 3 + 1) + (rand() % 3 + 1) * 10;
		std::cout << "GOLD: " << x << " starting gold" << '\n';
		break;
	case 8:
		x = (rand() % 3 + 1) + (rand() % 3 + 1) + (rand() % 3 + 1) + (rand() % 3 + 1) + (rand() % 3 + 1) * 10;
		std::cout << "GOLD: " << x << " starting gold" << '\n';
		break;
	case 9:
		x = (rand() % 3 + 1) + (rand() % 3 + 1) + (rand() % 3 + 1) + (rand() % 3 + 1) * 10;
		std::cout << "GOLD: " << x << " starting gold" << '\n';
		break;
	case 10:
		x = (rand() % 3 + 1) + (rand() % 3 + 1) + (rand() % 3 + 1) * 10;
		std::cout << "GOLD: " << x << " starting gold" << '\n';
		break;
	case 11:
		x = (rand() % 3 + 1) + (rand() % 3 + 1) + (rand() % 3 + 1) + (rand() % 3 + 1) * 10;
		std::cout << "GOLD: " << x << " starting gold" << '\n';
		break;
	case 12:
		x = (rand() % 3 + 1) + (rand() % 3 + 1) + (rand() % 3 + 1) + (rand() % 3 + 1) * 10;
		std::cout << "GOLD: " << x << " starting gold" << '\n';
		break;

	default:
		std::cout << "You have no gold" << '\n';


	}

	insertLine();


	system("pause");



	// atrModification();



	return 0;

}