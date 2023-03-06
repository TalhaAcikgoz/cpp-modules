#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap default constructor" << std::endl;
	this->setAD(30);
	this->setHP(100);
	this->setStamina(100);
	this->setName("ScavTrap");
}

ScavTrap::ScavTrap(std::string _name) {

	std::cout << "ScavTrap assingment constructor called" << std::endl;
	this->setAD(30);
	this->setHP(100);
	this->setName(_name);
	this->setStamina(100);
}

ScavTrap::ScavTrap(ScavTrap& copy) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap&	ScavTrap::operator=(ScavTrap& copy) {
	std::cout << "ScavTrap copy assingment operator called" << std::endl;
	this->setAD(copy.getAD());
	this->setHP(copy.getHP());
	this->setName(copy.getName());
	this->setStamina(copy.getStamina());
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap deconstructor" << std::endl;
}

void	ScavTrap::guardGate() {
	if (this->isGate == false) {
		std::cout << "Not gating" << std::endl;
	} else {
		std::cout << "Gate Keeping Mode: Gating is so funny" << std::endl;
	}
}

void	ScavTrap::attack(const std::string& target) {
	if (this->getStamina() > 0 && this->getHP() > 0) {
		std::cout << this->getName() << " locked the " << target 
			<< " and given " << this->getAD() << " damage." << std::endl;
	}
}

std::ostream&   operator<<(std::ostream& o, ScavTrap& c) {
	o << "Name: " << c.getName() << " HP: " << c.getHP() << " Stamina: " << c.getStamina() << " AD: " << c.getAD();
    return o;
}
