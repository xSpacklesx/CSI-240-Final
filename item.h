/**
* @file item.h
* @brief  Definition of the item class
* Certification of Authenticity: I certify that this assignment is entirely my own work.
* @author Hunter Spack
* @assignment Final
* @date 04/27/2020
*
*/
#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>

class Item
{
private:
	std::string name;
	int value;

public:
	//constructor
	Item();
	Item(std::string name, int value);

	//destructor
	~Item();

	//getters
	std::string getName() const { return name;}
	int getValue() const { return value; }
	virtual std::string getType() const = 0;

	//function
	/**
	* @brief prints out the info of the item
	* @author Hunter Spack
	* @assignment Final
	* @date 04/27/2020
	* @return nothing bout prints out to console info on the item
	*/
	virtual void printItem() const = 0;
	/**
* @brief gets the info about the armor and outpus a string of info
* @author Hunter Spack
* @assignment Final
* @date 04/27/2020
* @return a string that has the info about the armor
*/
	virtual std::string toString() const = 0;
};
#endif // !ITEM_H
