/**
* @file armor.h
* @brief Definition of the armor class
* Certification of Authenticity: I certify that this assignment is entirely my own work.
* @author Hunter Spack
* @assignment Final
* @date 04/27/2020
*
*/
#ifndef ARMOR_H
#define ARMOR_H

#include "item.h"

class Armor : public Item
{
private:
	int size;
public:
	//constructors
	Armor();
	Armor(std::string name, int value, int size);

	//destructor
	~Armor();

	//getters
	int getSize() const { return size; }

	/**
	* @brief gets a string reprisenting the type of object it is
	* @author Hunter Spack
	* @assignment Final
	* @date 04/27/2020
	* @return a string that says the type of item
	*/
	virtual std::string getType() const override;

	//setters
	void setSize(int size) { this->size = size; }

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
	* @brief gets the info about the armor and outpus a string of info
	* @author Hunter Spack
	* @assignment Final
	* @date 04/27/2020
	* @return a string that has the info about the armor
	*/
	virtual std::string toString() const override;
};
#endif // !Armor_H