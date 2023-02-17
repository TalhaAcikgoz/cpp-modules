#pragma once

#include <iostream>
#include <string>
#include <cmath>

class fixed {
private:
	int					raw_bits;
	static const int	fractional;
public:
	fixed();
	fixed(fixed &copy);
	fixed& operator=(const fixed& copy);
	~fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};
