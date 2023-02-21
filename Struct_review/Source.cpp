#include<iostream>
using namespace std;

struct { //party members
	string className, charName;
	int HP, MP, DEX,STR, INT;
	char armorType;
	bool isAlive;
} Rogue, Warrior, Mage;

//make a struct for monsters

//make a struct for bosses

//make a function to print status


//BONUS
//make function to randomly generate an attack

//make a function called GAMEOVER. Conditions boss is dead or all party is dead




int main()
{
	Rogue.charName = "Garrett";
	Rogue.charName = "Rogue";
	Rogue.armorType = 'M';
	Rogue.HP = 150;


	Warrior.charName = "Brad";
	Warrior.className = "Warrior";
	Warrior.armorType = 'H';
	Warrior.HP = 200;

	Mage.charName = "Amy";
	Mage.className = "Mage";
	Mage.armorType = 'L';
	Mage.HP = 100;

	//finish giving values to all structs

	//write some text as a senario where the party attacks some monsters vise versa

}