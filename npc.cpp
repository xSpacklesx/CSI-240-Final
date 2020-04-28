/**
* @file npc.cpp
* @brief  Definitions of functions, constructors, and destructors for the npc class
* Certification of Authenticity: I certify that this assignment is entirely my own work.
* @author Hunter Spack
* @assignment Final
* @date 04/27/2020
*
*/
#include "npc.h"

std::string Npc::getRace() const
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

Npc::Npc()
{
}

Npc::Npc(std::string name, int race, int level) : Character {name,race,level}
{
}

Npc::~Npc()
{
}
