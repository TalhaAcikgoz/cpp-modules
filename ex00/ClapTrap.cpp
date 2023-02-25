#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name, int _hp, int _stamina, int _ad): name(name), hp(_hp), stamina(_stamina), ad(_ad) {}

ClapTrap::ClapTrap(): hp(10), stamina(10), ad(0) {
    std::cout << "const" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& c) {
    *this = c;
}

ClapTrap&    ClapTrap::operator=(ClapTrap& c) {
    this->name = c.name;
    this->hp = c.hp;
    this->stamina = c.stamina;
    this->ad = c.ad;
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "deconst" << std::endl;
}

std::string	ClapTrap::getName(void) {return this->name;}
int			ClapTrap::getHP(void) {return this->hp;}
int			ClapTrap::getStamina(void) {return this->stamina;}
int			ClapTrap::getAD(void) {return this->ad;}

std::ostream&   operator<<(std::ostream o, ClapTrap& c) {
	o << "Name: " << c.getName() << "HP: " << c.getHP() << "Stamina: " << c.getStamina() << "AD: " << c.getAD();
    return o;
}
