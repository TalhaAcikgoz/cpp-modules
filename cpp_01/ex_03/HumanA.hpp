#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class humanA {
public:
    humanA();
    humanA(std::string _name, weapon _weapons);
    ~humanA();
    weapon  weapons;
    std::string name;
    void    attack(void) const ;
private:
};

#endif