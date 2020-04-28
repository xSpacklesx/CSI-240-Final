/**
* @file weapon.h
* @brief  Definition of the weapon class
* Certification of Authenticity: I certify that this assignment is entirely my own work.
* @author Hunter Spack
* @assignment Final
* @date 04/27/2020
*
*/
#ifndef WEAPON_H
#define WEAPON_H

#include "item.h"

class Weapon : public Item
{
private:
	int strength;
public:
	//constructors
	Weapon();
	Weapon(std::string name, int value, int strength = 0);

	//destructor
	~Weapon();

	//getters
	int getStrength() const { return strength; }
	/**
	* @brief gets a string reprisenting the type of object it is
	* @author Hunter Spack
	* @assignment Final
	* @date 04/27/2020
	* @return a string that says the type of item
	*/
	virtual std::string getType() const override;

	//setters
	void setStrength(int strength) { this->strength = strength; }

	//functions
	/**
	* @brief prints out the info of the item
	* @author Hunter Spack
	* @assignment Final
	* @date 04/27/2020
	* @return nothing bout prints out to console info on the item
	*/
	virtual void printItem() const override;
	/**
	* @brief gets the info about the weapon and outpus a string of info
	* @author Hunter Spack
	* @assignment Final
	* @date 04/27/2020
	* @return a string that has the info about the weapon
	*/
	virtual std::string toString() const override;
};
#endif // !WEAPON_H