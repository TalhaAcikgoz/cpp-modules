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
	fixed(fixed &copy);
	~fixed();
	fixed& operator=(const fixed&);
	friend std::ostream& operator<<(std::ostream &out, const fixed &copy);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};
