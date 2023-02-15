#pragma once

#include <iostream>
#include <string>
#include <cmath>

class fixed {
private:
	int					value;
	static const int	fractional;
public:
	fixed();
	fixed(fixed &copy);
	fixed& operator=(fixed copy);
	~fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};
