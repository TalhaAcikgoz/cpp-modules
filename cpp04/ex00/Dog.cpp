#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog& c) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = c;
}

Dog&    Dog::operator=(const Dog& c) {
	std::cout << "Dog assignment operator called" << std::endl;
	this->type = c.type;
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog deconstructor called" << std::endl;
}

void    Dog::makeSound(void) const {
	std::cout << "Woof Woof" << std::endl;
}
