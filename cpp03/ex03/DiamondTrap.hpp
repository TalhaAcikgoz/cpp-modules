#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap {
private:
    std::string name;
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap& copy);
    DiamondTrap&    operator=(const DiamondTrap& copy);
    ~DiamondTrap();

    std::string getDiaTrapName(void) const;
    void    setDiaTrapName(std::string name);
    void    attack(const std::string& target);
    void    whoAmI(void);
};
