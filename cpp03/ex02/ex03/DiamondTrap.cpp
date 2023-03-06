#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    std::cout << "DiamondTrap default constructor" << std::endl;
    this->setName("DiamondTrap");
    this->setAD(DiamondTrap::FragTrap::getAD());
    this->setHP(DiamondTrap::FragTrap::getHP());
    this->setStamina(DiamondTrap::ScavTrap::getStamina());
}

DiamondTrap::DiamondTrap(std::string name) {
    std::cout << "DiamondTrap assingment constructor" << std::endl;
    this->setDiaTrapName(name);
    this->setName(name + "_clap_name");
    this->setAD(FragTrap::getAD());
    this->setHP(FragTrap::getHP());
    this->setStamina(ScavTrap::getStamina());
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) {
    std::cout << "DiamondTrap copy constructor" << std::endl;
    *this = copy;
}

DiamondTrap&    DiamondTrap::operator=(const DiamondTrap& copy) {
    std::cout << "DiamondTrap assingment operator" << std::endl;
    this->setDiaTrapName(copy.getDiaTrapName());
    this->setAD(copy.getAD());
    this->setHP(copy.getHP());
    this->setName(copy.getName());
    this->setStamina(copy.getStamina());
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap deconstructor" << std::endl;
}

std::string DiamondTrap::getDiaTrapName(void) const {return this->name;}
void    DiamondTrap::setDiaTrapName(std::string name) {this->name = name;}

void    DiamondTrap::attack(const std::string& target) {
    DiamondTrap::ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI(void) {
    std::cout << "I am " << this->getDiaTrapName() << " but you can call me " << this->getName() << std::endl;
}

std::ostream&    operator<<(std::ostream& o, DiamondTrap& n) {
    o << "Name: " << n.getName() << " DiamondName " << n.getDiaTrapName() << " HP: " << n.getHP() << " Stamina: " << n.getStamina() << " AD: " << n.getAD();
    return o;
}