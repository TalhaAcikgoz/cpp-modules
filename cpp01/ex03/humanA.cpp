#include "humanA.hpp"

humanA::humanA(std::string name, weapon& weapon): _name(name), _weapon(weapon) {}
humanA::~humanA() {}

void    humanA::attack(void) const {
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
