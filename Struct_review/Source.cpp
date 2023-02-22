//Created by Cameron and Don Murphy
#include<iostream>
using namespace std;

struct party //Party Members 
{
	string className, charName;
	int HP, MP, DEX, STR, INT;
	char armorType;
	enum weakness { weak_physical = 1, weak_magical = 2 };
	bool isAlive = true;
} Rogue, Warrior, Mage;

struct monsters //monsters for the party members to fight
{
	string MonsterName;
	int HP, STR, DEX, INT;
	bool isAlive = true;
	enum weakness { weak_physical = 1, weak_magical = 2 };
	
} bat, ogre, witch;


//TODO
/*make a struct for bosses
-make a function to print status
-finish switch statements to finish story (fight monsters..quest complete..thanks for playing..something like that)
-use while loops to make party fight until battle finishes
*/

//BONUS
/*
-make function to randomly generate an attack
-make a function called GAMEOVER. Conditions boss is dead or all party is dead
-make a function to rename the characters
-make use of magic and physical weakness
-make use of stats. for example the Warrior can have a base attack that gains bonus damage based on strength
 or there can be senarios that require user to pick a person to perform an action. Example the rogue picking a lock uses DEX,
 but the warrior can try to pick the lock too. The warrior has a lower chance because DEX is lower.
-killing enemies grants lvl up. So more stats? add level to party struct?
--There are a ton of things that can be implemented.  
*/

int main()
{
	//Bat
	bat.MonsterName = "bat";
	bat.weak_magical;
	bat.HP = 20;
	bat.DEX = 20;
	bat.INT = 5;
	bat.STR = 10;
	//Ogre
	ogre.MonsterName = "ogre";
	ogre.weak_magical;
	ogre.HP = 70;
	ogre.STR = 30;
	ogre.DEX = 15;
	ogre.INT = 5;

	//Witch
	witch.MonsterName = "witch";
	witch.weak_physical;
	witch.HP = 40;
	witch.INT = 25;
	witch.DEX = 10;
	witch.STR = 5;

	//Party member Rogue
	Rogue.charName = "Garrett";
	Rogue.className = "Rogue";
	Rogue.armorType = 'M';
	Rogue.weak_physical;
	Rogue.HP = 150;
	Rogue.MP = 20;
	Rogue.DEX = 10;
	Rogue.STR = 5;
	Rogue.INT = 2;

	//Party member Warrior
	Warrior.charName = "Brad";
	Warrior.className = "Warrior";
	Warrior.armorType = 'H';
	Warrior.weak_magical;
	Warrior.HP = 200;
	Warrior.MP = 0;
	Warrior.DEX = 5;
	Warrior.STR = 10;
	Warrior.INT = 2;

	//Party member Mage
	Mage.charName = "Amy";
	Mage.className = "Mage";
	Mage.armorType = 'L';
	Mage.weak_physical;
	Mage.HP = 100;
	Mage.MP = 100;
	Mage.DEX = 5;
	Mage.STR = 2;
	Mage.INT = 10;

	//finish giving values to all structs

	//write some text as a senario where the party attacks some monsters vise versa

	cout << "The party enters the : (1)Mountians, (2)Cave, (3)Woods: ";
		enum area { mountian = 1, cave = 2, woods = 3 };
	int userInput;
	cin >> userInput;
	area a = static_cast<area>(userInput);

	switch(userInput)
	{
		case mountian:
		cout << "The party starts climbing the rocky mountians." << endl;
		cout << "Normally a character would have a hard time climbing with an armortype : " << Warrior.armorType << endl;
		cout << "However " << Warrior.charName << " the " << Warrior.className << " has " << Warrior.STR << " Strength." << endl;
		cout << "This makes climbing a breeze for " << Warrior.charName << "." << endl;
		break;

		case cave:
		cout << "The party enters a hot cave with flames spewing." << endl;
		break;

		case woods:
		cout << "The party enters a damp wet forest covered in fog." << endl;
		break;

		default:
		cout << "ERROR: Only 1, 2, or 3 is valid input. Exit program." << endl;
	}

}
