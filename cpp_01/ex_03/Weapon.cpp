#include "Weapon.hpp"

const std::string  weapon::getType(void) const {return type;}
void    weapon::setType(std::string _type) {type = _type;}

weapon::weapon() {}

weapon::weapon(std::string _type): type(_type) {}

weapon::~weapon() {}