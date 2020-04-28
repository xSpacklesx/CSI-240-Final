/**
* @file weapon.cpp
* @brief  Definitions of functions, constructors, and destructors for the weapon class
* Certification of Authenticity: I certify that this assignment is entirely my own work.
* @author Hunter Spack
* @assignment Final
* @date 04/27/2020
*
*/
#include "weapon.h"

Weapon::Weapon():Weapon {"none", 0, 0}
{
}

Weapon::Weapon(std::string name, int value, int strength) : Item{name, value}, strength{strength}
{
}

Weapon::~Weapon()
{
}

std::string Weapon::getType() const
{
	return (" Type: Weapon ");
}

void Weapon::printItem() const
{
	std::cout << getName() << " Value:" << getValue() << "gp Strength:" << getStrength() << " " << getType() << std::endl;

}

std::string Weapon::toString() const
{
	std::string weaponString;
	weaponString = getName() + "," + std::to_string(getValue()) + "," + std::to_string(getStrength()) + "," + getType();

	return weaponString;
}

