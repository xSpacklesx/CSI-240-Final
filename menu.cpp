#include "menu.h"
#include <iostream>

void printMenu()
{
	int userChoice = NULL;
	std::cout << "1. Create A New Character" << std::endl;
	std::cout << "2. Load A Character From File" << std::endl;
	std::cout << "3. Edit A Character" << std::endl;
	std::cout << "4. Create Item" << std::endl;
	std::cout << "5. Add Item From File" << std::endl;
	std::cout << "6. Output Character Sheet" << std::endl;
	std::cout << "7. View Party" << std::endl;
	std::cout << "8. Quit" << std::endl;
	std::cout << "Input the number of your choice." << std::endl;
	std::cin >> userChoice;
	menuSwitch(userChoice);
}

void menuSwitch(int userChoice)
{
	std::cout << "in the menuSwitch" << std::endl;
	switch (userChoice) {
		case 1 :
			std::cout << "you chose " << userChoice << std::endl;
			break;
		case 2 :
			std::cout << "you chose " << userChoice << std::endl;
			break;
		case 3 :
			std::cout << "you chose " << userChoice << std::endl;
			break;
		case 4 :
			std::cout << "you chose " << userChoice << std::endl;
			break;
		case 5 :
			std::cout << "you chose " << userChoice << std::endl;
			break;
		case 6 :
			std::cout << "you chose " << userChoice << std::endl;
			break;
		case 7 :
			std::cout << "you chose " << userChoice << std::endl;
			break;
		case 8 :
			std::cout << "you chose " << userChoice << std::endl;
			break;
	}
}
