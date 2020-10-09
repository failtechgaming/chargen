#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>

std::string sTrinket[100] =
{
	"Mummified goblin hand",
	"A piece of crystal that faintly glows in the moonlight",
	"A gold coin minted in an unknown land",
	"A diary written in a language you don't know",
	"A brass ring that never tarnishes",
	"An old chess piece made from glass",
	"A pair of knucklebone dice",
	"A small idol depicting a nightmareish creature",
	"A rope necklace with four mummified elf fingers",
	"The deed to a parcel of land in a realm unknown to you",
	"A 1-ounce block made from an unknown material",
	"A small cloth doll skewered with needles",
	"A tooth from an known beast",
	"An enormous scale, perhaps from a dragon",
	"A bright green feather",
	"An old divination card bearing your likeness",
	"A glass orb filled with moving smoke",
	"A 1 pound egg with a bright red shell",
	"A pipe that blows bubbles",
	"A glass jar containing a weird bit of flesh floating in pickling fluid",
	"A tiny gnome-grafted music box that plays a song from your childhood",
	"A small wooden statuette of a smug halfing",
	"A brass orb etched with strange runes",
	"A multicolored stone disk",
	"A tiny silver icon of a raven",
	"A bag containing forty-seven humanoid teeth",
	"A shard of obsidian that always feels warm to the touch",
	"A dragon's bony talon hanging from a plain leather necklace",
	"A pair of old socks",
	"A black book whose pages refuse to hold ink, chalk, graphite, or any other substances",
	"A silver badge in the shape of a five pointed star",
	"A knife that belonged to a relative",
	"A glass vial filled with nail clippings",
	"A rectangular device with two tiny metal cups on one end that throws sparks when wet",
	"A white, sequined glove",
	"A vest with one hundred tiny pockets",
	"A small, weightless stone block",
	"A tiny sketch portrait of a goblin",
	"An empty glass vial that smell of perfume when opened",
	"A gemstone that looks like a lump of coal",
	"A scrap of cloth from an old banner",
	"A rank insignia from a lost legionnaire",
	"A tiny silver bell without a clapper",
	"A mechanical canary inside a gnomish lamp",
	"A tiny chest carved to look like it has numerous feet on the bottom",
	"A dead sprite inside a clear glass bottle",
	"A metal can with no opening but sounds as if filled with liquid",
	"A glass orb filled with water, in which swims a clockwork goldfish",
	"A silver spoon with an M engraved on the handle",
	"A whistle made from a gold-colored wood",
	"A dead scarab beetle the size of your hand",
	"Two toy soldiers, one with a missing head",
	"A small box filled with different sized buttons",
	"A candle that can't be lit",
	"A tiny cage with no door",
	"An old key",
	"An indecipherable treasure map",
	"A hilt from a broken sword",
	"A rabbit's foot",
	"A glass eye",
	"A cameo carved in the likeness of a hideous person",
	"a silver skull the size of a coin",
	"An alabaster mask",
	"A pyramid of sticky, black incense that smells very bad",
	"A nightcap that, when worn, gives you pleasant dreams",
	"A single caltrop made from bone",
	"A gold monocle frame without the lens",
	"A 1 inch cube, each side painted a different color",
	"A crystal knob from a door",
	"A small packet filled with pink dust",
	"A fragment of a beautiful song, written as musical notes on two pieces of parchment",
	"A silver teardrop earing made from a real teardrop",
	"A shell of an egg painted with scenes of human misery",
	"A fan that, when unfolded, shows a sleeping cat",
	"A set of bone pipes",
	"A four-leaf clover pressed inside a book discussing manners and etiquette",
	"A sheet of parchment upon which is drawn a complex mechanical contraption",
	"An orante scabbard that fits no blade you have found so far",
	"An invitation to a party where a murder happened",
	"A bronze pentacle with an etching of a rat's head in the center",
	"A purple handkerchief embroidered with the name of a powerful mage",
	"Half a floorplan for a temple",
	"A bit of folded cloth that, when unfolded, turns into a stylish cap",
	"A receipt of deposit at a bank in a far-flung city",
	"A diary with seven missing pages",
	"An empty silver snuffbox bearing an inscription on the surface of the word DREAM",
	"An iron holy symbol devoted to an unknown god",
	"A book that tells the story of a legendary hero's rise and fall, with the last chapter missing",
	"A vial of dragon blood",
	"An ancient arrow of elven design",
	"A needle that never bends",
	"An ornage brooch of dwarven design",
	"An empty wine bottle with pretty lable",
	"A mosaic tile with a multicolored, glazed surface",
	"A petrified mouse",
	"A black pirate flag adorned with a dragon's skull and crossbones",
	"A tiny mechanical crab that moves about when it's not being observed",
	"A glass jar containing lard with a label that reads GRIFFON GREASE",
	"A wooden box with a ceramic bottom that holds a living worm with a head on each end of its body",
	"A metal urn containing the ashes of a hero"

};

void randTrinket()
{
	int randTrinket = rand() % 100;

	
	std::cout << "TRINKET: " << sTrinket[randTrinket] << '\n';
}