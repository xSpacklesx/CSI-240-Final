/**
* @file potion.cpp
* @brief  Definitions of functions, constructors, and destructors for the potion class
* Certification of Authenticity: I certify that this assignment is entirely my own work.
* @author Hunter Spack
* @assignment Final
* @date 04/27/2020
*
*/
#include "potion.h"

Potion::Potion():Potion {"none", 0 , "none"}
{
}

Potion::Potion(std::string name, int value, std::string effect): Item {name,value}, effect{effect}
{
}

Potion::~Potion()
{
}

std::string Potion::getType() const
{
	return (" Type: Potion ");
}

void Potion::printItem() const
{
	std::cout << getName() << " Value:" << getValue() << "gp " << getEffect() << " " << getType() << std::endl;
}

std::string Potion::toString() const
{
	std::string potionString;
	potionString = getName() + "," + std::to_string(getValue()) + " ," + getEffect() + "," + getType();

	return potionString;
}

