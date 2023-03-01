#include "fixed.hpp"

fixed::fixed() {
	this->raw_bits = 0;
	std::cout << "default constructer called" << std::endl;
}

fixed::fixed(fixed &copy) {
	std::cout << "copy constructer called" << std::endl;
	this->raw_bits = copy.getRawBits();
}

fixed& fixed::operator=(const fixed& c) {
	std::cout << "copy assignment operator called" << std::endl;
	this->raw_bits = c.getRawBits();
	return *this;
}

fixed::~fixed() {
	std::cout << "deconstructer called" << std::endl;
}

int fixed::getRawBits(void) const {
	std::cout << "getRawBits member func called" << std::endl;
	return raw_bits;
}

void	fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member func called" << std::endl;
	this->raw_bits = raw;
}
