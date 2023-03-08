#include "weapon.hpp"

weapon::weapon(std::string type): _type(type) {}
weapon::~weapon(void) {}

std::string weapon::getType(void) const {return this->_type;}

void    weapon::setType(std::string type) {this->_type = type;}
