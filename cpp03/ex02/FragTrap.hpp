#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:
    FragTrap();
	FragTrap(std::string _name, int hp, int stamina, int ad);
	FragTrap(FragTrap& copy);
	FragTrap& operator=(FragTrap& copy);
	~FragTrap();
};
