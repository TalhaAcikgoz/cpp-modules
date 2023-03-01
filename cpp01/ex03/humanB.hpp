#pragma once

#include "weapon.hpp"

class humanB {
public:
    std::string _name;
    weapon*     _weapon;
    humanB(std::string name);
    ~humanB();
    void    setWeapon(weapon& weapon);
    void    attack(void) const;
};