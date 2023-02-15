#include "fixed.hpp"

fixed::fixed() {
	this->value = 0;
	std::cout << "default constructer called" << std::endl;
}

fixed::fixed(fixed &copy) {
	std::cout << "copy constructer called" << std::endl;
	this->value = copy.getRawBits();
}

fixed& fixed::operator=(fixed c){
	this->value = c.getRawBits();
	std::cout << "copy assignment operator called" << std::endl;
	return *this;
}

fixed::~fixed() {
	std::cout << "deconstructer called" << std::endl;
}

int fixed::getRawBits(void) const {
	std::cout << "getRawBits member func called" << std::endl;
	return value;
}

void	fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member func called" << std::endl;
	this->value = raw;
}