#include "fixed.hpp"

fixed::fixed() {
	std::cout << "default constructer called" << std::endl;
	this->setRawBits(0);
}

fixed::fixed(const int raw) {
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(raw << this->fractional);
}

fixed::fixed(const float raw) {
	std::cout << "float consturcter called" << std::endl;
	this->setRawBits(std::roundf(raw * (1 << this->fractional)));
}

fixed::fixed(fixed const &copy) {
	std::cout << "copy constructer called" << std::endl;
	*this = copy;
}

fixed& fixed::operator=(const fixed& c) {
	std::cout << "copy assignment operator called" << std::endl;
	this->setRawBits(c.getRawBits());
	return *this;
}

fixed	fixed::operator+(const fixed& o) {
	std::cout << "+" << std::endl;
	this->setRawBits(this->getRawBits() + o.getRawBits());
	return *this;
}

fixed	fixed::operator-(const fixed& o) {
	std::cout << '-' << std::endl;
	this->setRawBits(this->getRawBits() - o.getRawBits());
	return *this;
}

fixed	fixed::operator*(const fixed& o) {
	std::cout << '*' << std::endl;
	this->setRawBits(this->getRawBits() * o.getRawBits());
	return *this;
}

fixed	fixed::operator/(const fixed& o) {
	std::cout << '/' << std::endl;
	this->setRawBits(this->getRawBits() / o.getRawBits());
	return *this;
}

bool	fixed::operator>(const fixed& o) {
	if (this->getRawBits() > o.getRawBits())
		return (true);
	return (false);
}

bool	fixed::operator<(const fixed& o) {
	if (this->getRawBits() < o.getRawBits())
		return (true);
	return (false);
}

bool	fixed::operator>=(const fixed& o) {
	if (this->getRawBits() >= o.getRawBits())
		return (true);
	return (false);
}

bool	fixed::operator<=(const fixed& o) {
	if (this->getRawBits() <= o.getRawBits())
		return (true);
	return (false);
}

bool	fixed::operator==(const fixed& o) {
	if (this->getRawBits() == o.getRawBits())
		return (true);
	return (false);
}

bool	fixed::operator!=(const fixed& o) {
	if (this->getRawBits() != o.getRawBits())
		return (true);
	return (false);
}

std::ostream& operator<<(std::ostream &out, const fixed &copy) {
	out << (copy.getRawBits() / pow(2, 8));
	return out;
}

fixed::~fixed() {
	std::cout << "deconstructer called" << std::endl;
}

int fixed::getRawBits(void) const {
	return raw_bits;
}

void	fixed::setRawBits(int const raw) {
	this->raw_bits = raw;
}

int		fixed::toInt(void) const {
	int temp = this->getRawBits() / (1 << this->fractional);
	return temp;
}