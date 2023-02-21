#pragma once

#include <iostream>
#include <string>
#include <cmath>
#include <ostream>

class fixed {
private:
	int					raw_bits;
	static const int	fractional = 8;
public:
	fixed();
	fixed(const int raw);
	fixed(const float raw);
	fixed(fixed const &copy);
	~fixed();

	fixed&	operator=(const fixed& c);
	fixed	operator+(const fixed& o);
	fixed	operator-(const fixed& o);
	fixed	operator*(const fixed& o);
	fixed	operator/(const fixed& o);

	bool	operator>(const fixed& o);
	bool	operator<(const fixed& o);
	bool	operator>=(const fixed& o);
	bool	operator<=(const fixed& o);
	bool	operator==(const fixed& o);
	bool	operator!=(const fixed& o);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt(void) const ;
};

std::ostream&	operator<<(std::ostream &out, const fixed &copy);
