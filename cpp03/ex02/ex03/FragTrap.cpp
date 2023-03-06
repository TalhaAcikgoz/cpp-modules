#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap default constructor" << std::endl;
	this->setAD(30);
	this->setHP(100);
	this->setStamina(100);
	this->setName("FragTrap");
}

FragTrap::FragTrap(std::string _name) {

	std::cout << "FragTrap assingment constructor called" << std::endl;
	this->setAD(30);
	this->setHP(100);
	this->setName(_name);
	this->setStamina(100);
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

void	FragTrap::highFivesGuys(void) {
	std::cout << this->getName() << " wanna pat pat joe mama highFive" << std::endl;
}
