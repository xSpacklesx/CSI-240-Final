/**
* @file item.cpp
* @brief  Definitions of a constructors and a destructor for the item class
* Certification of Authenticity: I certify that this assignment is entirely my own work.
* @author Hunter Spack
* @assignment Final
* @date 04/27/2020
*
*/
#include "item.h"

Item::Item()
{
}

Item::Item(std::string name, int value): name{name}, value{value}
{
}

Item::~Item()
{
}
