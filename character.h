/**
* @file character.h
* @brief  Definition of the character class
* Certification of Authenticity: I certify that this assignment is entirely my own work.
* @author Hunter Spack
* @assignment Final
* @date 04/27/2020
*
*/
#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

class Character
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

	//overload
	bool operator==(const Character &rhs);
	bool operator<(const Character &rhs);
	bool operator>(const Character &rhs);

	//constructors
	Character();
	Character(std::string name, int race, int level);

	//destructor
	~Character();
};



#endif // !CHARACTER_H
