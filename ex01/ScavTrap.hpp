#pragma once

#include "ClapTrap.hpp"

class ScavTrap : private ClapTrap {
public:
    ScavTrap();
    ScavTrap(ScavTrap& copy);
    ScavTrap& operator=(ScavTrap& copy);
    ~ScavTrap();
};