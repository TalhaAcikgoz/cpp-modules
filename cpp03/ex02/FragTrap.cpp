#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap default constructor" << std::endl;
	this->setAD(20);
	this->setHP(100);
	this->setStamina(50);
	this->setName("FragTrap");
}

FragTrap::FragTrap(std::string _name, int _hp, int _stamina, int _ad) {

	std::cout << "FragTrap assingment constructor called" << std::endl;
	this->setAD(_ad);
	this->setHP(_hp);
	this->setName(_name);
	this->setStamina(_stamina);
}

FragTrap::FragTrap(FragTrap& copy) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = copy;
}

FragTrap&	FragTrap::operator=(FragTrap& copy) {
	std::cout << "FragTrap copy assingment operator called" << std::endl;
	this->setAD(copy.getAD());
	this->setHP(copy.getHP());
	this->setName(copy.getName());
	this->setStamina(copy.getStamina());
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap deconstructor" << std::endl;
}


