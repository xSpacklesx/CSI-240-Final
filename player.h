/**
* @file player.h
* @brief  Definition of the player class
* Certification of Authenticity: I certify that this assignment is entirely my own work.
* @author Hunter Spack
* @assignment Final
* @date 04/27/2020
*
*/
#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "character.h"
#include "item.h"
#include "weapon.h"
#include "armor.h"
#include "potion.h"

class Player : public Character
{
private:
	std::string name;
	int race, level, chClass;
	Weapon weapon;
	Potion potion1, potion2, potion3;
	Armor armor;

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
	/**
	* @brief gets a string reprisenting the class a character is
	* @author Hunter Spack
	* @assignment Final
	* @date 04/27/2020
	* @return a string that says the class
	*/
	std::string getClass() const;
	int getLevel() const { return level; }
	std::string getWeapon() const { return weapon.toString(); }
	std::string getArmor() const {return armor.toString(); }
	std::string getPotion1() const { return potion1.toString(); }
	std::string getPotion2() const { return potion2.toString(); }
	std::string getPotion3() const { return potion3.toString(); }

	//setters
	void setName(std::string name) { this->name = name; }
	void setRace(int race) { this->race = race; }
	void setClass(int chClass) { this->chClass = chClass; }
	void setLevel(int level) { this->level = level; }
	void setWeapon(Weapon newWeapon) { this->weapon = newWeapon; }
	void setArmor(Armor newArmor) { this->armor = newArmor; }
	void setP1(Potion newP1) { this->potion1 = newP1; }
	void setP2(Potion newP2) { this->potion2 = newP2; }
	void setP3(Potion newP3) { this->potion3 = newP3; }


	//overload
	bool operator == (const Player& rhs);
	bool operator < (const Player& rhs);
	bool operator > (const Player& rhs);

	//constructors
	Player();
	Player(std::string name);
	Player(std::string name, int race, int chClass, int level, Weapon weapon, Armor armor, Potion potion1, Potion potion2, Potion potion3);

	//destructor
	~Player();

};



#endif // !PLAYER_H
