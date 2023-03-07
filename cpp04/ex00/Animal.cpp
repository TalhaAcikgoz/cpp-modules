#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal default called" << std::endl;
}

Animal::Animal(Animal& c) {
	std::cout << "Animal copy called" << std::endl;
	*this = c;
}

Animal&	Animal::operator=(Animal& c) {
	std::cout << "Animal assignment operator called" << std::endl;
	this->type = c.type;
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal deconstructor called" << std::endl;
}

std::string		Animal::getType(void) const {
	return this->type;
}

void	Animal::makeSound(void) const {
	std::cout << "Animal sound" << std::endl;
}
