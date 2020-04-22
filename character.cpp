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

std::string Character::getClass() const
{
	switch (chClass)
	{
	case 1:
		return " Fighter ";
		break;
	case 2:
		return " Cleric ";
		break;
	case 3:
		return " Wizard ";
		break;
	case 4:
		return " Sorcerer ";
		break;
	default:
		return "error no class";
		break;
	}
}

bool Character::operator==(const Character & rhs)
{
	return(level == rhs.level);
}

bool Character::operator=<(const Character & rhs)
{
	return(level =< rhs.level);
}

bool Character::operator=>(const Character & rhs)
{
	return(level => rhs.level);
}

Character::Character()
{
}

Character::Character(std::string name)
{
}

Character::Character(std::string name, int race, int chClass, int level)
{
}

Character::~Character()
{
}
