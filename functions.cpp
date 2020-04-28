/**
* @file functions.cpp
* @brief  Definitions of functions
* Certification of Authenticity: I certify that this assignment is entirely my own work.
* @author Hunter Spack
* @assignment Final
* @date 04/27/2020
*
*/
#include "functions.h"
#include "menu.h"
#include "armor.h"
#include "potion.h"
#include "weapon.h"
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
void createCharacter()
{
	std::string name;
	int race, chClass, level;
	std::cout << "What is your name adventurer? " << std::endl;
	std::cout << "My name is: ";
	std::cin >> name;
	std::cout << std::endl;
	Player newCharacter = Player(name);
	std::cout << "What is your level?" << std::endl << "I am level: ";
	std::cin >> level;
	newCharacter.setLevel(level);
	std::cout << std::endl << "What is your race? (pick the number)" << std::endl;
	printRaceMenu();
	std::cout << "I am a:  ";
	std::cin >> race;
	newCharacter.setRace(race);
	std::cout << std::endl;
	std::cout << "What is your class? (pick the number)" << std::endl;
	printClassMenu();
	std::cout << "I am a: ";
	std::cin >> chClass;
	newCharacter.setClass(chClass);
	std::cout << std::endl;

	//add armor
	std::cout << "Would you like to add armor? (y/n)" << std::endl;
	char uInput;
	std::cin >> uInput;
	if (uInput == 'y' || uInput == 'Y') 
	{
		std::vector <Armor*> armorOptions = loadArmorFile();
		aVectorPrint(armorOptions);
		std::cout << std::endl << "Pick the armor you want by number" << std::endl << "I want: ";
		int aChoice = NULL;
		std::cin >> aChoice;
		std::cout << std::endl;
		newCharacter.setArmor(*armorOptions[aChoice - 1]);

	}

	//add weapon
	std::cout << "Would you like to add a weapon? (y/n)" << std::endl;
	std::cin >> uInput;
	if (uInput == 'y' || uInput == 'Y')
	{
		std::vector <Weapon*> weaponOptions = loadWeaponFile();
		wVectorPrint(weaponOptions);
		std::cout << std::endl << "Pick the weapon you want by number" << std::endl << "I want: ";
		int aChoice = NULL;
		std::cin >> aChoice;
		std::cout << std::endl;
		newCharacter.setWeapon(*weaponOptions[aChoice - 1]);

	}

	//add potion1
	std::cout << "Would you like to add potion 1? (y/n)" << std::endl;
	std::cin >> uInput;
	if (uInput == 'y' || uInput == 'Y')
	{
		std::vector <Potion*> potionOptions = loadPotionFile();
		pVectorPrint(potionOptions);
		std::cout << std::endl << "Pick the potion you want by number" << std::endl << "I want: ";
		int aChoice = NULL;
		std::cin >> aChoice;
		std::cout << std::endl;
		newCharacter.setP1(*potionOptions[aChoice - 1]);

	}
	//add potion2
	std::cout << "Would you like to add potion 2? (y/n)" << std::endl;
	std::cin >> uInput;
	if (uInput == 'y' || uInput == 'Y')
	{
		std::vector <Potion*> potionOptions = loadPotionFile();
		pVectorPrint(potionOptions);
		std::cout << std::endl << "Pick the potion you want by number" << std::endl << "I want: ";
		int aChoice = NULL;
		std::cin >> aChoice;
		std::cout << std::endl;
		newCharacter.setP2(*potionOptions[aChoice - 1]);

	}
	//add potion3
	std::cout << "Would you like to add potion 3? (y/n)" << std::endl;
	std::cin >> uInput;
	if (uInput == 'y' || uInput == 'Y')
	{
		std::vector <Potion*> potionOptions = loadPotionFile();
		pVectorPrint(potionOptions);
		std::cout << std::endl << "Pick the potion you want by number" << std::endl << "I want: ";
		int aChoice = NULL;
		std::cin >> aChoice;
		std::cout << std::endl;
		newCharacter.setP3(*potionOptions[aChoice - 1]);

	}
	//file output
	std::ofstream fOut;
	try
	{
		fOut.open(name + ".txt", std::ofstream::out | std::ofstream::trunc);
	}
	catch (std::string ex)
	{
		std::cout << "exeption caught" << ex << std::endl;
	}
	if(fOut)
	{
		fOut << name << "\n" << level << "\n" << race << "\n" << chClass << "\n" << newCharacter.getArmor() << "\n" << newCharacter.getWeapon() << "\n" << newCharacter.getPotion1() << "\n" << newCharacter.getPotion2() << "\n" << newCharacter.getPotion3();
		fOut.close();
	}
	else
	{
		std::cout << "issue writing to file";
	}
	
	printMainMenu();
}

void createNpc()
{
	std::string name;
	int race, level;
	std::cout << "What is your friends name? " << std::endl;
	std::cout << "Their name is: ";
	std::cin >> name;
	std::cout << std::endl;
	std::cout << "What is their level?" << std::endl << "Thery are level: ";
	std::cin >> level;
	std::cout << std::endl << "What is their race? (pick the number)" << std::endl;
	printRaceMenu();
	std::cout << "They are a:  ";
	std::cin >> race;
	std::cout << std::endl;
	Npc newNpc = Npc(name, race ,level);
	newNpc.setLevel(level);
	newNpc.setRace(race);
	printMainMenu();
}

void compareLevels()
{
	std::string name1, name2;
	std::cout << "First character to compare: ";
	std::cin >> name1;
	std::cout << std::endl;
	std::cout << "Second character to compare: ";
	std::cin >> name2;
	
	Player* ch1 = loadChar(name1);
	Player* ch2 = loadChar(name2);
	if (*ch1 == *ch2) 
	{
		std::cout <<  std::endl <<"The characters are equal" << std::endl << std::endl;
	}
	else if (*ch1 < *ch2) 
	{
		std::cout << std::endl << ch2->getName() << " is stronger" << std::endl << std::endl;
	}
	else if (*ch1 > * ch2)
	{
		std::cout << std::endl << ch1->getName() << " is stronger" << std::endl <<std::endl;
	}
	printMainMenu();
}

Player* loadChar(std::string charName)
{
	std::ifstream chFile;
	try
	{
		chFile.open(charName + ".txt");
	}
	catch (std::string ex)
	{
		std::cout << "exeption caught" << ex << std::endl;
	}
	if (chFile)
	{
		while (!chFile.eof())
		{
			//player parts
			std::string fName;
			std::string fLevel;
			std::string fRace;
			std::string fClass;
			//armor parts
			std::string fArmName;
			std::string fArmVal;
			std::string fArmSize;
			std::string fArmType;
			//weaponParts
			std::string fWepName;
			std::string fWepVal;
			std::string fWepStrength;
			std::string fWepType;
			//p1 parts
			std::string fP1Name;
			std::string fP1Val;
			std::string fP1Effect;
			std::string fP1Type;
			//p2 parts
			std::string fP2Name;
			std::string fP2Val;
			std::string fP2Effect;
			std::string fP2Type;
			//p3 parts
			std::string fP3Name;
			std::string fP3Val;
			std::string fP3Effect;
			std::string fP3Type;

			//player parts
			std::getline(chFile, fName);
			std::getline(chFile, fLevel);
			std::getline(chFile, fRace);
			std::getline(chFile, fClass);
			//armor parts
			std::getline(chFile, fArmName, ',');
			std::getline(chFile, fArmVal, ',');
			std::getline(chFile, fArmSize, ',');
			std::getline(chFile, fArmType, '\n');
			//wepon parts
			std::getline(chFile, fWepName, ',');
			std::getline(chFile, fWepVal, ',');
			std::getline(chFile, fWepStrength, ',');
			std::getline(chFile, fWepType, '\n');
			//p1 parts
			std::getline(chFile, fP1Name, ',');
			std::getline(chFile, fP1Val, ',');
			std::getline(chFile, fP1Effect, ',');
			std::getline(chFile, fP1Type, '\n');
			//p2 parts
			std::getline(chFile, fP2Name, ',');
			std::getline(chFile, fP2Val, ',');
			std::getline(chFile, fP2Effect, ',');
			std::getline(chFile, fP2Type, '\n');
			//p3 parts
			std::getline(chFile, fP3Name, ',');
			std::getline(chFile, fP3Val, ',');
			std::getline(chFile, fP3Effect, ',');
			std::getline(chFile, fP3Type, '\n');

			chFile.close();

			Armor* chArmor = new Armor(fArmName, std::stoi(fArmVal), std::stoi(fArmSize));
			Weapon* chWeapon = new Weapon(fWepName, std::stoi(fWepVal), std::stoi(fWepStrength));
			Potion* chP1 = new Potion(fP1Name, std::stoi(fP1Val), fP1Effect);
			Potion* chP2 = new Potion(fP2Name, std::stoi(fP2Val), fP2Effect);
			Potion* chP3 = new Potion(fP3Name, std::stoi(fP3Val), fP3Effect);
			Player* ch = new Player(charName, std::stoi(fRace), std::stoi(fClass), std::stoi(fLevel),  *chWeapon, *chArmor, *chP1, *chP2, *chP3);
			return ch;
		}
	}
}

std::vector <Weapon*> loadWeaponFile()
{
	std::ifstream inputFile;
	std::string fName;
	std::cout << "What is the name of the file you want read: ";
	std::cin >> fName;
	try
	{
		inputFile.open(fName);
	}
	catch (std::string ex)
	{
		std::cout << "exeption caught" << ex << std::endl;
	}
	std::vector <Weapon*> loadedItems;

	if (inputFile)
	{
		while (!inputFile.eof())
		{
			std::string sName = "";
			std::string sValue = "";
			std::string sType = "";
			std::string sStrength = "";
			int iValue = 0;
			int iType = 0;
			int iStrength = 0;
			Weapon* weaponPtr;

			
			std::getline(inputFile, sType, ',');
			iType = std::stoi(sType);

			switch (iType)
			{
			case 1 :
				std::getline(inputFile, sName, ',');
				std::getline(inputFile, sValue, ',');
				std::getline(inputFile, sStrength, '\n');
				iValue = std::stoi(sValue);
				iStrength = std::stoi(sStrength);
				weaponPtr = new Weapon(sName, iValue, iStrength);
				loadedItems.push_back(weaponPtr);
				break;

			default:
				std::cout << "error reading file" << std::endl;
				break;
			}

		
		}
		inputFile.close();
	}

	return loadedItems;
}

std::vector <Armor*> loadArmorFile()
{
	std::ifstream inputFile;
	std::string fName;
	std::cout << "What is the name of the file you want read: ";
	std::cin >> fName;

	try
	{
		inputFile.open(fName);
	}
	catch (std::string ex)
	{
		std::cout << "exeption caught" << ex << std::endl;
	}
	std::vector <Armor*> loadedItems;

	if (inputFile)
	{
		while (!inputFile.eof())
		{
			std::string sName = "";
			std::string sValue = "";
			std::string sType = "";
			std::string sSize = "";
			int iValue = 0;
			int iType = 0;
			int iSize = 0;
			Armor* armorPtr;


			std::getline(inputFile, sType, ',');
			iType = std::stoi(sType);

			switch (iType)
			{
			case 2:
				std::getline(inputFile, sName, ',');
				std::getline(inputFile, sValue, ',');
				std::getline(inputFile, sSize, '\n');
				iValue = std::stoi(sValue);
				iSize = std::stoi(sSize);
				armorPtr = new Armor(sName, iValue, iSize);
				loadedItems.push_back(armorPtr);
				break;

			default:
				std::cout << "error reading file" << std::endl;
				break;
			}


		}
		inputFile.close();
	}

	return loadedItems;
}

std::vector<Potion*> loadPotionFile()
{
	std::ifstream inputFile;
	std::string fName;
	std::cout << "What is the name of the file you want read: ";
	std::cin >> fName;
	try
	{
		inputFile.open(fName);
	}
	catch (std::string ex)
	{
		std::cout << "exeption caught" << ex << std::endl;
	}
	std::vector <Potion*> loadedItems;

	if (inputFile)
	{
		while (!inputFile.eof())
		{
			std::string sName = "";
			std::string sValue = "";
			std::string sType = "";
			std::string sEffect = "";
			int iValue = 0;
			int iType = 0;
			Potion* potionPtr;


			std::getline(inputFile, sType, ',');
			iType = std::stoi(sType);

			switch (iType)
			{
			case 3:
				std::getline(inputFile, sName, ',');
				std::getline(inputFile, sValue, ',');
				std::getline(inputFile, sEffect, '\n');
				iValue = std::stoi(sValue);
				potionPtr = new Potion(sName, iValue, sEffect);
				loadedItems.push_back(potionPtr);
				break;

			default:
				std::cout << "error reading file" << std::endl;
				break;
			}


		}
		inputFile.close();
	}

	return loadedItems;
}


void aVectorPrint(std::vector<Armor*> vec)
{
	int i = 0;
	for (Armor* ptr : vec) 
	{
		i++;
		std::cout << i <<". ";
		ptr->printItem();
	}
}

void wVectorPrint(std::vector<Weapon*> vec)
{
	int i = 0;
	for (Weapon* ptr : vec) 
	{
		i++;
		std::cout << i << ". ";
		ptr->printItem();
	}
}
void pVectorPrint(std::vector<Potion*> vec)
{
	int i = 0;
	for (Potion* ptr : vec) 
	{
		i++;
		std::cout << i << ".";
		ptr->printItem();
	}
}
