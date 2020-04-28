/**
* @file npc.h
* @brief  Definition of the npc class
* Certification of Authenticity: I certify that this assignment is entirely my own work.
* @author Hunter Spack
* @assignment Final
* @date 04/27/2020
*
*/
#ifndef NPC_H
#define NPC_H

#include "character.h"
#include "string"

class Npc : public Character
{
private:
	std::string name;
	int race, level;
public:
	//getters
	std::string getName() const { return name; }
	/**
	* @brief gets a string reprisenting the race a character is
	* @author Hunter Spack
	* @assignment Final
	* @date 04/27/2020
	* @return a string that says the race
	*/
	std::string getRace() const;
	int getLevel() const { return level; }
	//setters
	void setName(std::string name) { this->name = name; }
	void setRace(int race) { this->race = race; }
	void setLevel(int level) { this->level = level; }
	//constructers
	Npc();
	Npc(std::string name, int race, int level);
	//destructor
	~Npc();




};


#endif // !NPC_H
