#pragma once

#include "weapon.hpp"

class humanA {
public:
    std::string _name;
    weapon&      _weapon;
    humanA(std::string name, weapon& weapon);
    ~humanA();
    void    attack(void) const;
};