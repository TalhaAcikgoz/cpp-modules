#include "humanB.hpp"

humanB::humanB(std::string name): _name(name) {}
humanB::~humanB() {}

void    humanB::attack(void) const {
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void    humanB::setWeapon(weapon& weapon) {
    this->_weapon = &weapon;
}