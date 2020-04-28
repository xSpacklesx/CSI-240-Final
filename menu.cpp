/**
* @file menu.cpp
* @brief  Definitions of functions for menus
* Certification of Authenticity: I certify that this assignment is entirely my own work.
* @author Hunter Spack
* @assignment Final
* @date 04/27/2020
*
*/
#include "menu.h"
#include "functions.h"
#include <iostream>

void printMainMenu()
{
	int userChoice = NULL;
	std::cout << "1. Create A New Character" << std::endl;
	std::cout << "2. Create an NPC" << std::endl;
	std::cout << "3. Compare two player levels" << std::endl;
	std::cout << "4. Quit" << std::endl;
	std::cout << "Input the number of your choice." << std::endl;
	std::cin >> userChoice;
	menuSwitch(userChoice);
}

void menuSwitch(int userChoice)
{
	//std::cout << "in the menuSwitch" << std::endl;
	switch (userChoice) {
		case 1 :
			std::cout << "you chose " << userChoice << std::endl;
			createCharacter();
			break;
		case 2 :
			std::cout << "you chose " << userChoice << std::endl;
			createNpc();
			break;
		case 3 :
			std::cout << "you chose " << userChoice << std::endl;
			compareLevels();
			break;
		case 4 :
			std::cout << "you chose " << "Quit \nHave a nice day" << std::endl;
			break;
		default :
			std::cout << "Error" << std::endl;
			break;
	}
}

void printRaceMenu()
{
	std::cout << "1. Human" << std::endl;
	std::cout << "2. Dwarf" << std::endl;
	std::cout << "3. Elf" << std::endl;
	std::cout << "4. Dragonborn" << std::endl;
}

void printClassMenu()
{
	std::cout << "1. Fighter" << std::endl;
	std::cout << "2. Cleric" << std::endl;
	std::cout << "3. Wizard" << std::endl;
	std::cout << "4. Sorcerer" << std::endl;
}
