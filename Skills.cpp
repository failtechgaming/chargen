#include <iostream>
#include <stdio.h> //printf
#include <stdlib.h> // for rand
#include <time.h> // time
#include <ctime>
#include "DiceRoll.h" // Random dice roller
//#include "attributes.h"
#include "randRace.h"
#include "ATRMod.h"


extern int strMod;
extern int dexMod;
extern int conMod;
extern int intMod;
extern int wisMod;
extern int chaMod;

void testSkill()
{
	//std::cout << "STR" << '\n';
	int athletics = strMod;
	std::cout << "STR skills - " << " | " << "Athletics: " << athletics << '\n';
	
	
	int acrobatics = dexMod;
	int sleightofhand = dexMod;
	int stealth = dexMod;
	std::cout << "DEX skills - " << " | " <<  "Acrobatics: " << acrobatics  << " | " << "Sleight of Hand: " << sleightofhand << " | " << "Stealth: " << stealth << '\n';

	int arcana = intMod;
	int history = intMod;
	int investigation = intMod;
	int nature = intMod;
	int religion = intMod;
	std::cout << "INT skills - " << " | " << "Arcana: " << arcana << " | " << " History: " << history << " | " << "Investigation: " << investigation << " | " << "Nature: " << nature << " | " << "Religion: " << religion << '\n';

	int animalhandling = wisMod;
	int insight = wisMod;
	int medicine = wisMod;
	int perception = wisMod;
	int survival = wisMod;
	std::cout << "WIS skills - " << " | " << "Animal Handling: " << animalhandling << " | " << "Insight: " << insight << " | " << "Medicine: " << medicine << " | " << "Perception: " << perception << " | " << "Survival: " << survival << '\n';

	int deception = chaMod;
	int intimidation = chaMod;
	int performance = chaMod;
	int persuasion = chaMod;
	std::cout << "CHA skills - " << " | " << "Deception: " << deception << " | " << "Intimidation: " << intimidation << " | " << "Performance: " << performance << " | " << "Persuasion: " << persuasion << '\n';
