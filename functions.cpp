#include "functions.h"
#include "menu.h"
#include <string>
#include <iostream>

void createCharacter()
{
	std::string name;
	int race, chClass, level;
	std::cout << "What is your name adventurer? " << std::endl;
	std::cout << "My name is: ";
	std::cin >> name;
	std::cout << std::endl;
	Character newCharacter = Character(name);
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
	//add to party
	printMainMenu();
}
