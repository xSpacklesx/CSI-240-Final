/**
* @file player.cpp
* @brief  Definitions of functions, constructors, and destructors for the player class
* Certification of Authenticity: I certify that this assignment is entirely my own work.
* @author Hunter Spack
* @assignment Final
* @date 04/27/2020
*
*/
#include "character.h"
#include "player.h"

std::string Player::getRace() const
{
	switch (race)
	{
	case 1:
		return " Human ";
		break;
	case 2:
		return " Dwarf ";
		break;
	case 3:
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

std::string Player::getClass() const
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

bool Player::operator==(const Player &rhs)
{
	return(level == rhs.level);
}

bool Player::operator<(const Player &rhs)
{
	return(level < rhs.level);
}

bool Player::operator>(const Player& rhs)
{
	return(level > rhs.level);
}

Player::Player()
{
}

Player::Player(std::string name)
{
}

Player::Player(std::string name, int race, int chClass, int level, Weapon weapon, Armor armor, Potion potion1, Potion potion2, Potion potion3)
{
	this->name = name;
	this->race = race;
	this->level = level;
	this->weapon = weapon;
	this->armor = armor;
	this->potion1 = potion1;
	this->potion2 = potion2;
	this->potion3 = potion3;
}

Player::~Player()
{
}

