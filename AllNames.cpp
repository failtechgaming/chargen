#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>


/*
enum first 
{
Arjhan,
Balasar,
Bharash
};

int enumVal = rand() % 3;

char const* getTextForEnum(int enumVal)
{
	switch (enumVal)
	{
	case 0:
		return "Arjhan";
	case first::Balasar:
		return "Balasar";
	case 2:
		std::cout << "Bharash" << '\n';

	}
}

*/

/*
namespace FirstNames
{
	enum FirstNames
	{
	*/

//All names 426
//CHANGE THE STRING NUMBER
	std::string sFirstNames[426] =
	{
			"Arjhan",
			"Balasar",
			"Bharash",
			"Donaar",
			"Ghesh",
			"Heskan",
			"Kriv",
			"Medrash",
			"Mehen",
			"Nadarr",
			"Pandjed",
			"Patrin",
			"Rhogar",
			"Shamash",
			"Shedinn",
			"Tarhun",
			"Torinn",
			"Akra",
			"Biri",
			"Daar",
			"Farideh",
			"Harann",
			"Havilar",
			"Jheri",
			"Kava",
			"Korinn",
			"Mishann",
			"Nala",
			"Perra",
			"Raiann",
			"Sora",
			"Surina",
			"Thavam",
			"Uadjit",
			"Adrik",
			"Alberich",
			"Baern",
			"Barendd",
			"Brottor",
			"Bruenor",
			"Dain",
			"Darrak",
			"Delg",
			"Eberk",
			"Einkil",
			"Fargrim",
			"Flint",
			"Gardian",
			"Harbek",
			"Kildrak",
			"Morgran",
			"Orsik",
			"Oskar",
			"Rangrim",
			"Rurik",
			"Taklinn",
			"Thoradin",
			"Thorin",
			"Tordek",
			"Traubon",
			"Travok",
			"Ulfgar",
			"Veit",
			"Vondal",
			"Amber",
			"Artin",
			"Audhild",
			"Bardryn",
			"Dagnal",
			"Diesa",
			"Eldeth",
			"Falkrunn",
			"Finellen",
			"Gunnloda",
			"Gurdis",
			"Helja",
			"Hlin",
			"Kathra",
			"Kristryd",
			"Ilde",
			"Liftrasa",
			"Mardred",
			"Riswynn",
			"Sannl",
			"Robera",
			"Torgga",
			"Vistra",
			"Adran",
			"Aelar",
			"Aramil",
			"Arannis",
			"Aust",
			"Beiro",
			"Berrian",
			"Carric",
			"Enailis",
			"Erdan",
			"Erevan",
			"Galinndan",
			"Hadarai",
			"Heian",
			"Himo",
			"Immeral",
			"Ivellios",
			"Lucian",
			"Mindartis",
			"Paelias",
			"Peren",
			"Quarrion",
			"Riardon",
			"Rolen",
			"Soveliss",
			"Thamior",
			"Tharivol",
			"Theren",
			"Varis",
			"Adrie",
			"Althaea",
			"Anastrianna",
			"Andraste",
			"Antinua",
			"Bethrynna",
			"Birel",
			"Caelynn",
			"Drusilia",
			"Enna",
			"Felosial",
			"Ielenia",
			"Jelenneth",
			"Keyleth",
			"Leshanna",
			"Lia",
			"Meriele",
			"Mialee",
			"Naivara",
			"Quelenaa",
			"Theirasta",
			"Thia",
			"Vadania",
			"Valenth",
			"Xanaphia",
			"Alston",
			"Alvyn",
			"Boddynock",
			"Brocc",
			"Burgell",
			"Dimble",
			"Erky",
			"Fonkin",
			"Frug",
			"Gerbo",
			"Gimble",
			"Glim",
			"Jebeddo",
			"Kellen",
			"Namfoodle",
			"Orryn",
			"Roondar",
			"Seebo",
			"Sindir",
			"Warryn",
			"Wrenn",
			"Zook",
			"Bimpnottin",
			"Breena",
			"Caramip",
			"Carlin",
			"Donella",
			"Duvamil",
			"Ella",
			"Ellyjobell",
			"Ellywick",
			"Lilli",
			"Loopmottin",
			"Lorilla",
			"Mardnab",
			"Nissa",
			"Nyx",
			"Oda",
			"Orla",
			"Roywyn",
			"Shamil",
			"Waywocket",
			"Zanna",
			"Aleslosh",
			"Ashhearth",
			"Badger",
			"Cloak",
			"Doublelock",
			"Filchbatter",
			"Fnipper",
			"Ku",
			"Nim",
			"Oneshoe",
			"Pock",
			"Sparklegem",
			"Stumbleduck",
			"Alton",
			"Cade",
			"Corrin",
			"Eldon",
			"Errich",
			"Finnan",
			"Garret",
			"Lindal",
			"Lyle",
			"Merrie",
			"Milo",
			"Osborn",
			"Perrin",
			"Reed",
			"Roscoe",
			"Welby",
			"Andry",
			"Bree",
			"Callie",
			"Cora",
			"Euphemia",
			"Jillian",
			"Kithri",
			"Lavinia",
			"Lidda",
			"Merla",
			"Nedda",
			"Paela",
			"Portia",
			"Seraphina",
			"Shaena",
			"Trym",
			"Vani",
			"Verna",
			"Aseir",
			"Bardeid",
			"Haseid",
			"Khemed",
			"Mehmen",
			"Sudeiman",
			"Zashier",
			"Atala",
			"Ceidil",
			"Hama",
			"Jasmal",
			"Meilil",
			"Deipora",
			"Yashira",
			"Zasheida",
			"Darvin",
			"Dorn",
			"Evendur",
			"Gorstag",
			"Grim",
			"Helm",
			"Malark",
			"Morn",
			"Randal",
			"Stedd",
			"Arveene",
			"Esvele",
			"Jhessial",
			"Kerri",
			"Lureene",
			"Miri",
			"Rowan",
			"Shandri",
			"Tessele",
			"Bor",
			"Fodel",
			"Glar",
			"Grigor",
			"Igan",
			"Ivor",
			"Kosef",
			"Mival",
			"Orel",
			"Pavel",
			"Sergor",
			"Alethra",
			"Kara",
			"Katernin",
			"Mara",
			"Natali",
			"Olma",
			"Tana",
			"Zora",
			"Ander",
			"Blath",
			"Bran",
			"Frath",
			"Geth",
			"Lander",
			"Luth",
			"Malcer",
			"Stor",
			"Taman",
			"Urth",
			"Amafrey",
			"Betha",
			"Cefrey",
			"Ketha",
			"Olga",
			"Silifrey",
			"Westra",
			"Aoth",
			"Bareris",
			"EhputKi",
			"Kethoth",
			"Mumed",
			"Ramas",
			"SoKehur",
			"ThazarDe",
			"Urhur",
			"Arizima",
			"Chathi",
			"Nephis",
			"Nulara",
			"Murithi",
			"Sefris",
			"Thola",
			"Umara",
			"Zolis",
			"Borisvik",
			"Faurgar",
			"Jandar",
			"Kanitharm",
			"Madislak",
			"Ralmevik",
			"Shaumar",
			"Vladislak",
			"Fyevarra",
			"Hulmarra",
			"Immith",
			"Imzel",
			"Navarra",
			"Shevarra",
			"Tammith",
			"Yuldra",
			"An",
			"Chen",
			"Chi",
			"Fai",
			"Jiang",
			"Jun",
			"Lian",
			"Long",
			"Meng",
			"On",
			"Shan",
			"Wen",
			"Bai",
			"Chao",
			"Jia",
			"Lei",
			"Mai",
			"Qiao",
			"Shui",
			"Tai",
			"Anton",
			"Diero",
			"Marcon",
			"Pieron",
			"Rimardo",
			"Romero",
			"Salazar",
			"Umbero",
			"Balama",
			"Dona",
			"Fiala",
			"Jalana",
			"Luisa",
			"Marta",
			"Quara",
			"Selise",
			"Vonda",
			"Dench",
			"Feng",
			"Gell",
			"Henk",
			"Holg",
			"Imsh",
			"Keth",
			"Krusk",
			"Mhurren",
			"Ront",
			"Shump",
			"Thokk",
			"Baggi",
			"Emen",
			"Engong",
			"Kansif",
			"Myev",
			"Neega",
			"Ovak",
			"Ownka",
			"Shautha",
			"Sutha",
			"Vola",
			"Volen",
			"Yevelda",
			"Akmenos",
			"Amnnon",
			"Barakas",
			"Damakos",
			"Ekemon",
			"Iados",
			"Kairon",
			"Luecis",
			"Melech",
			"Mordai",
			"Morthos",
			"Pelaios",
			"Skamos",
			"Therai",
			"Akta",
			"Anakis",
			"Bryseis",
			"Criella",
			"Damaia",
			"Ea",
			"Kallista",
			"Lerissa",
			"Makaria",
			"Nemeia",
			"Orianna",
			"Phelaia",
			"Rieta",
			"Sneks"
	};
				/*
	};
}
*/

//all last names 171

	/*
namespace LastNames
{
	enum LastNames
	{
	*/
	std::string sLastNames[171]
	{
		"Clethtinthiallor",
		"Daardendrian",
		"Delmirev",
		"Drachedandion",
		"Fenkenkabradon",
		"Kepeshkmolik",
		"Kerrhylon",
		"Kimbatuul",
		"Linxakasendalor",
		"Myastan",
		"Nemmonis",
		"Norixius",
		"Ophinshtalajiir",
		"Prexijandilin",
		"Shestendeliath",
		"Turnuroth",
		"Verthisathurgeish",
		"Yarjerit",
		"Baldrk",
		"Battlehammer",
		"Brawnanvil",
		"Dankil",
		"Fireforge",
		"Frostbeard",
		"Gorunn",
		"Holderhek",
		"Ironfist",
		"Loderr",
		"Lutgehr",
		"Rumnaheim",
		"Strakeln",
		"Torunn",
		"Ungart",
		"Amakiir",
		"Amastacia",
		"Galanodel",
		"Holimion",
		"Ilphelkiir",
		"Liadon",
		"Meliamne",
		"Nailo",
		"Siannodel",
		"Xiloscient",
		"Beren",
		"Daergel",
		"Folkor",
		"Garrick",
		"Nackle",
		"Murnig",
		"Nigel",
		"Raulnor",
		"Scheppen",
		"Timbers",
		"Turen",
		"Brushgather",
		"Goodbarrel",
		"Greenbottle",
		"Highhill",
		"Hilltopple",
		"Leagallow",
		"Tealeaf",
		"Thorngage",
		"Tosscobble",
		"Underbough",
		"Basha",
		"Dumein",
		"Jassan",
		"Khalid",
		"Mostana",
		"Pashar",
		"Rein",
		"Amblecrown",
		"Buckman",
		"Dundragon",
		"Evenwood",
		"Greycastle",
		"Tallstag",
		"Bersk",
		"Chernin",
		"Dotsk",
		"Kulenov",
		"Marsk",
		"Nemetsk",
		"Shemov",
		"Starag",
		"Brightwood",
		"Helder",
		"Hornraven",
		"Lackman",
		"Stormwind",
		"Windrivver",
		"Ankhalab",
		"Ankuld",
		"Fezim",
		"Hahpet",
		"Nathandem",
		"Sepretm",
		"Uuthrakt",
		"Chergoba",
		"Dyernina",
		"Iltazyara",
		"Murnyethara",
		"Stayanoga",
		"Ulmokina",
		"Chien",
		"Huang",
		"Kao",
		"Kung",
		"Lao",
		"Ling",
		"Mei",
		"Pin",
		"Shin",
		"Sum",
		"Tan",
		"Wan",
		"Agosto",
		"Astorio",
		"Calabra",
		"Domine",
		"Falone",
		"Marivaldi",
		"Pisacar",
		"Ramondo",
		"Dench",
		"Feng",
		"Gell",
		"Henk",
		"Holg",
		"Imsh",
		"Keth",
		"Krusk",
		"Mhurren",
		"Ront",
		"Shump",
		"Thokk",
		"Baggi",
		"Emen",
		"Engong",
		"Kansif",
		"Myev",
		"Neega",
		"Ovak",
		"Ownka",
		"Shautha",
		"Sutha",
		"Vola",
		"Volen",
		"Yevelda",
		"Art",
		"Carrion",
		"Chant",
		"Creed",
		"Dispair",
		"Excellence",
		"Fear",
		"Glory",
		"Hope",
		"Ideal",
		"Music",
		"Nowhere",
		"Open",
		"Poetry",
		"Quest",
		"Random",
		"Reverence",
		"Sorry",
		"Temerity",
		"Torment",
		"Weary",
		"Butts Butts Butts"
		};

int randName{};

int rollFirstName()
{
	int randFirstName = rand() % 426;
	int randLastName = rand() % 171;
	
	//int firstName = static_cast<FirstNames::FirstNames>(randName);

	

	std::cout << "NAME: " << sFirstNames[randFirstName] << " " << sLastNames[randLastName] << '\n';


	// an attempt to test the conversion from value to char string by using a direct assignment
	/*
	randName = 4;

	std::cout << "First name variable is " << randName << '\n';
	*/

	return randName;
}

/*FirstNames::FirstNames convert(const std::string& str
	{
		if (str == '0') return Arjhan;
		else if (str == '1') return Balasar;
		else if (str == '2') return Bharash;
	}
	*/

//copy following function for last name
/*int findName(int randName)
{
	randName = rand() % 426;
	switch (randName)
	{
	case 0:
		std::cout << "Arjhan";
		break;
	case 1:
		std::cout << "Balasar";
		break;
	case 2:
		std::cout << "Bharash" << '\n';;
		break;
	case FirstNames::Donaar:
		std::cout << "Donaar";
		break;
	case FirstNames::Ghesh:
		std::cout << "Ghesh";
		break;
	case FirstNames::Heskan:
		std::cout << "Heskan";
		break;
	default:
		std::cout << "This is not working" << '\n';
	}



	return randName;
}
*/

