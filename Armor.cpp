#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include "ATRMod.h"

std::string sArmor[12] =
{
	"Padded armor",
	"Leather armor",
	"Studded armor",
	"Hide armor",
	"Chain shirt",
	"Scale mail",
	"Breastplate",
	"Half plate",
	"Ring mail",
	"Chain mail",
	"Splint armor",
	"Plate armor",
};

extern int dexMod;

void rollArmor()
{
	int randArmor = rand() % 12;

	//std::string armorName = sArmor[randArmor];
	std::cout << "ARMOR: " << sArmor[randArmor] << '\n';
	//randArmor = 0;
	switch (randArmor)
	{
	case 0:
		std::cout << "AC:" << dexMod + 11 << '\n';
		break;
	case 1:
		std::cout << "AC:" << dexMod + 11 << '\n';
		break;
	case 2:
		std::cout << "AC:" << dexMod + 12 << '\n';
		break;
	case 3:
		switch (dexMod)
		{
		case 3:
			dexMod = 2;
			break;
		case 4:
			dexMod = 2;
			break;
		case 5: 
			dexMod = 2;
			break;
		case 6:
			dexMod = 2;
			break;
		default:
			break;
		}
		std::cout << "AC: " << dexMod + 12 << '\n';
		break;
	case 4:
		switch (dexMod)
		{
		case 3:
			dexMod = 2;
			break;
		case 4:
			dexMod = 2;
			break;
		case 5:
			dexMod = 2;
			break;
		case 6:
			dexMod = 2;
			break;
		default:
			break;
		}
		std::cout << "AC: " << dexMod + 13 << '\n';
		break;
	case 5:
		switch (dexMod)
		{
		case 3:
			dexMod = 2;
			break;
		case 4:
			dexMod = 2;
			break;
		case 5:
			dexMod = 2;
			break;
		case 6:
			dexMod = 2;
			break;
		default:
			break;
		}
		std::cout << "AC: " << dexMod + 14 << '\n';
		break;
	case 6:
		switch (dexMod)
		{
		case 3:
			dexMod = 2;
			break;
		case 4:
			dexMod = 2;
			break;
		case 5:
			dexMod = 2;
			break;
		case 6:
			dexMod = 2;
			break;
		default:
			break;
		}
		std::cout << "AC: " << dexMod + 14 << '\n';
		break;
	case 7:
		std::cout << "AC: " << dexMod + 15 << '\n';
		break;
	case 8:
		std::cout << "AC: 14\n";
		break;
	case 9: 
		std::cout << "AC: 16\n";
		break;
	case 10:
		std::cout << "AC: 17\n";
		break;
	case 11:
		std::cout << "AC: 18\n";
		break;
	};
};

	//return armorName;