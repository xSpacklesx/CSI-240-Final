/**
* @file potion.h
* @brief  Definition of the potion class
* Certification of Authenticity: I certify that this assignment is entirely my own work.
* @author Hunter Spack
* @assignment Final
* @date 04/27/2020
*
*/
#ifndef POTION_H
#define POTION_H

#include "item.h"

class Potion : public Item
{
private:
	std::string effect;
public:
	//constructors
	Potion();
	Potion(std::string name, int value, std::string effect);

	//destructor
	~Potion();

	//getters
	std::string getEffect() const { return effect; }
	/**
	* @brief gets a string reprisenting the type of object it is
	* @author Hunter Spack
	* @assignment Final
	* @date 04/27/2020
	* @return a string that says the type of item
	*/
	virtual std::string getType() const override;

	//setters
	void setEffect(std::string effect) { this->effect = effect; }

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
	* @brief gets the info about the potion and outpus a string of info
	* @author Hunter Spack
	* @assignment Final
	* @date 04/27/2020
	* @return a string that has the info about the potion
	*/
	virtual std::string toString() const override;
};
#endif // !POTION_H