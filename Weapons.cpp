#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>

std::string sWeapons[37] =
{
	"Club",
	"Dagger",
	"Greatclub",
	"Handaxe",
	"Javelin",
	"Light hammer",
	"Mace",
	"Quarterstaff",
	"Sickle",
	"Spear",
	"Crossbow, light",
	"Darts",
	"Shortbow",
	"Sling",
	"Battleaxe",
	"Flail",
	"Glaive",
	"Greatsword",
	"Greataxe",
	"Halbred",
	"Lance",
	"Longsword",
	"Maul",
	"Morningstar",
	"Pike",
	"Rapier",
	"Scimitar",
	"Shortsword",
	"Trident",
	"War pick",
	"Warhammer",
	"Whip",
	"Blowgun",
	"Crossbow, hand",
	"Crossbow, heavy",
	"Longbow",
	"Net"
};

int randWeapon{};
const char * damageOutput;
void weaponDMG()
{
	
}

extern int dexMod;
extern int strMod;

void rollWeapon()
{
	int randWeapon = rand() % 36;
	

	//std::string armorName = sArmor[randArmor];
   	std::cout << "WEAPON: " << sWeapons[randWeapon] << '\n';
	//randWeapon = 1;
	switch (randWeapon)
	{
	case 0:
		std::cout << "DAMAGE: 1d4 bludgeoning + " << strMod << '\n';
		break;
	case 1: 
		{
		if (strMod > dexMod)
		{
			std::cout << "DAMAGE: 1d4 piercing + " << strMod << '\n';
		}
		else
			std::cout << "DAMAGE: 1d4 piercing + " << dexMod << '\n';
		}
		break;
	case 2:
		std::cout << "DAMAGE: 1d8 bludgeonin +" << strMod << '\n';
		break;
	case 3:
		std::cout << "DAMAGE: 1d6 slashing + " << strMod << '\n';
		break;
	case 4:
		std::cout << "DAMAGE: 1d6 piercing + " << strMod << '\n';
		break;
	case 5:
		std::cout << "DAMAGE: 1d4 bludgeoning + " << strMod << '\n';
		break;
	case 6:
		std::cout << "DAMAGE: 1d6 bludgeoning + " << strMod << '\n';
		break;
	case 7:
		std::cout << "DAMAGE: 1d6 bludgeoning + " << strMod << '\n';
		break;
	case 8:
		std::cout << "DAMAGE: 1d4 slashing + " << strMod << '\n';
		break;
	case 9:
		std::cout << "DAMAGE: 1d6 piercing + " << strMod << '\n';
		break;
	case 10:
		std::cout << "DAMAGE: 1d8 piercing + " << strMod << '\n';
		break;
	case 11:
	{
		if (strMod > dexMod)
		{
			std::cout << "DAMAGE: 1d4 piercing + " << strMod << '\n';
		}
		else
			std::cout << "DAMAGE: 1d4 piercing + " << dexMod << '\n';
	}
		break;
	case 12: 
		std::cout << "DAMAGE: 1d6 piercing + " << strMod << '\n';
		break;
	case 13:
		std::cout << "DAMAGE: 1d4 bludgeoning + " << strMod << '\n';
		break;
	case 14: 
		std::cout << "DAMAGE: 1d8 slashing + " << strMod << '\n';
		break;
	case 15:
		std::cout << "DAMAGE: 1d8 bludgeoning + " << strMod << '\n';
		break;
	case 16:
		std::cout << "DAMAGE: 1d10 slashing + " << strMod << '\n';
		break;
	case 17:
		std::cout << "DAMAGE: 1d12 slashing + " << strMod << '\n';
		break;
	case 18:
		std::cout << "DAMAGE: 2d6 slashing + " << strMod << '\n';
		break;
	case 19:
		std::cout << "DAMAGE: 1d10 slashing + " << strMod << '\n';
		break;
	case 20:
		std::cout << "DAMAGE: 1d12 piercing + " << strMod << '\n';
		break;
	case 21:
		std::cout << "DAMAGE: 1d8 slashing + " << strMod << '\n';
		break;
	case 22:
		std::cout << "DAMAGE: 2d6 bludgeoning + " << strMod << '\n';
		break;
	case 23:
		std::cout << "DAMAGE: 1d8 piercing + " << strMod << '\n';
		break;
	case 24:
		std::cout << "DAMAGE: 1d10 piercing + " << strMod << '\n';
		break;
	case 25:
	{
		if (strMod > dexMod)
		{
			std::cout << "DAMAGE: 1d8 piercing + " << strMod << '\n';
		}
		else
			std::cout << "DAMAGE: 1d8 piercing + " << dexMod << '\n';
	}
		break;
	case 26:
	{
		if (strMod > dexMod)
		{
			std::cout << "DAMAGE: 1d6 slashing + " << strMod << '\n';
		}
		else
			std::cout << "DAMAGE: 1d6 slashing + " << dexMod << '\n';
	}
		break;
	case 27:
	{
		if (strMod > dexMod)
		{
			std::cout << "DAMAGE: 1d6 piercing + " << strMod << '\n';
		}
		else
			std::cout << "DAMAGE: 1d6 piercing + " << dexMod << '\n';
	}
		break;
	case 28:
		std::cout << "DAMAGE: 1d6 piercing + " << strMod << '\n';
		break;
	case 29:
		std::cout << "DAMAGE: 1d8 piercing + " << strMod << '\n';
		break;
	case 30:
		std::cout << "DAMAGE: 1d8 bludgeoning + " << strMod << '\n';
		break;
	case 31:
	{
		if (strMod > dexMod)
		{
			std::cout << "DAMAGE: 1d4 slashing + " << strMod << '\n';
		}
		else
			std::cout << "DAMAGE: 1d4 slashing + " << dexMod << '\n';
	}
		break;
	case 32:
		std::cout << "DAMAGE: 1 piercing\n";
		break;
	case 33: 
		std::cout << "DAMAGE: 1d6 piercing + " << dexMod << '\n';
		break;
	case 34:
		std::cout << "DAMAGE: 1d10 piercing + " << dexMod << '\n';
		break;
	case 35:
		std::cout << "DAMAGE: 1d8 piercing + " << dexMod << '\n';
		break;
	case 36:
		std::cout << "DAMAGE: No damage\n";
		break;

	default:
		std::cout << "	This space left intentionally blank\n";
		break;
	}




	//return armorName;
};