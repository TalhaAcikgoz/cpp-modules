#include "HumanA.hpp"

humanA::humanA() {}
humanA::humanA(std::string _name, weapon _weapons): name(_name), weapons(_weapons) {}
humanA::~humanA() {}

void    humanA::attack(void) const {
    std::cout << this->name << " attacks with their weapon " << weapons.getType() << std::endl;
}