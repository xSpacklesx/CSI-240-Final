/**
* @file character.cpp
* @brief  Definitions of functions, constructors, and destructors for the character class
* Certification of Authenticity: I certify that this assignment is entirely my own work.
* @author Hunter Spack
* @assignment Final
* @date 04/27/2020
*
*/
#include "character.h"

std::string Character::getRace() const
{
	switch (race)
	{
	case 1 :
		return " Human ";
		break;
	case 2 :
		return " Dwarf ";
		break;
	case 3 :
		return " Elf ";
		break;
	case 4:
		return " Dragonborn ";
		break;
	default:
		return " error no race ";
		break;
	}
}

bool Character::operator==(const Character & rhs)
{
	return(level == rhs.level);
}

bool Character::operator<(const Character & rhs)
{
	return(level < rhs.level);
}

bool Character::operator>(const Character & rhs)
{
	return(level > rhs.level);
}

Character::Character()
{
}


Character::Character(std::string name, int race, int level): name{name}, race{race}, level{level}
{
}

Character::~Character()
{
}
