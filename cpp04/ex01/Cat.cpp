#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Cat& c) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = c;
}

Cat&    Cat::operator=(Cat& c) {
	std::cout << "Cat assignment operator called" << std::endl;
	this->type = c.type;
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat deconstructor called" << std::endl;
	delete this->brain;
}

void    Cat::makeSound(void) const {
	std::cout << "MeoW MeoW negativity" << std::endl;
}
