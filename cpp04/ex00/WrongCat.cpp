#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat default called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat& c) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = c;
}

WrongCat&    WrongCat::operator=(WrongCat& c) {
	std::cout << "WrongCat assignment operator called" << std::endl;
	this->type = c.type;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat deconstructor called" << std::endl;
}

void    WrongCat::makeSound(void) const {
	std::cout << "MeoW MeoW negativity" << std::endl;
}
