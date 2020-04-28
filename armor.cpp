/**
* @file armor.cpp
* @brief  Definitions of functions, constructors, and destructors for the armor class
* Certification of Authenticity: I certify that this assignment is entirely my own work.
* @author Hunter Spack
* @assignment Final
* @date 04/27/2020
*
*/
#include "armor.h"

Armor::Armor() : Armor{"none", 0, 0}
{
}

Armor::Armor(std::string name, int value, int size) : Item {name, value}, size{size}
{
}

Armor::~Armor()
{
}

std::string Armor::getType() const
{
	return (" Type: Armor ");
}

void Armor::printItem() const
{
	std::cout << getName() << " Value:" << getValue() << " gp Size:" << getSize() << " " << getType() << std::endl;
}

std::string Armor::toString() const
{
	std::string armorString;
	armorString =  getName() + ","  + std::to_string(getValue()) + "," + std::to_string(getSize()) + "," + getType();

	return armorString;
}

