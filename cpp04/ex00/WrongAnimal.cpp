#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal default called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& c) {
	std::cout << "WrongAnimal copy called" << std::endl;
	*this = c;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal& c) {
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	this->type = c.type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal deconstructor called" << std::endl;
}

std::string		WrongAnimal::getType(void) const {
	return this->type;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "WrongAnimal sound" << std::endl;
}
