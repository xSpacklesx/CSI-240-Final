/**
* @file functions.h
* @brief  contains function declarations
* Certification of Authenticity: I certify that this assignment is entirely my own work.
* @author Hunter Spack
* @assignment Final
* @date 04/27/2020
*
*/
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "character.h"
#include "player.h"
#include "item.h"
#include "npc.h"
#include <vector>

/**
* @brief collects character information and outputs it to a file
* @author Hunter Spack
* @assignment Final
* @date 04/27/2020
* @return nothing but a file is created with character info
*/
void createCharacter();
/**
* @brief collects character info and creates an NPC object
* @author Hunter Spack
* @assignment Final
* @date 04/27/2020
* @return nothing
*/
void createNpc();
/**
* @brief compares the leves of two characters and outputs a string to console telling which is more powerful
* @author Hunter Spack
* @assignment Final
* @date 04/27/2020
* @return outputs info to console
*/
void compareLevels();
/**
* @brief loads items from file 
* @author Hunter Spack
* @assignment Final
* @date 04/27/2020
* @return a vector of weapon pointers
*/
std::vector <Weapon*> loadWeaponFile();
/**
* @brief loads items from file
* @author Hunter Spack
* @assignment Final
* @date 04/27/2020
* @return a vector of armor pointers
*/
std::vector <Armor*> loadArmorFile();
/**
* @brief loads items from file
* @author Hunter Spack
* @assignment Final
* @date 04/27/2020
* @return a vector of potion pointers
*/
std::vector <Potion*> loadPotionFile();
/**
* @brief itterates through a vector of armor pointers and outputs them to the console
* @author Hunter Spack
* @assignment Final
* @date 04/27/2020
* @param a vector of armor pointers
* @return nothing, outputs armors to console
*/
void aVectorPrint(std::vector <Armor*> vec);
/**
* @brief itterates through a vector of weapon pointers and outputs them to the console
* @author Hunter Spack
* @assignment Final
* @date 04/27/2020
* @param a vector of weapon pointers
* @return nothing, outputs weapons to console
*/
void wVectorPrint(std::vector <Weapon*> vec);
/**
* @brief itterates through a vector of armor pointers and outputs them to the console
* @author Hunter Spack
* @assignment Final
* @date 04/27/2020
* @param a vector of potion pointers
* @return nothing, outputs potions to console
*/
void pVectorPrint(std::vector <Potion*> vec);
/**
* @brief loads info about a character from file
* @author Hunter Spack
* @assignment Final
* @date 04/27/2020
* @param a string of the name of the character
* @return a player pointer
*/
Player* loadChar(std::string charName);




#endif // !FUNCTIONS_H
