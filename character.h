#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <vector>

class Character
{
private:
	std::string name;
	int race, level, chClass;
	int statSpread[5];
//	std::vector <Item> inventory;
public:
	//getters
	std::string getName() const { return name; }
	std::string getRace() const;
	std::string getClass() const;
	int getLevel() const { return level; }

	//setters
	void setName(std::string name) { this->name = name; }
	void setRace(int race) { this->race = race; }
	void setClass(int chClass) { this->chClass = chClass; }
	void setLevel(int level) { this->level = level; }

	//constructors
	Character();
	Character(std::string name);
	Character(std::string name, int race, int chClass, int level);

	//destructor
	~Character();
};



#endif // !CHARACTER_H
