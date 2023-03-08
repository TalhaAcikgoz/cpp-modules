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
		fixed(const fixed&);
		fixed(const int);
		fixed(const float);
		~fixed();

        //comparison operators
        bool operator>(const fixed&) const;
        bool operator<(const fixed&) const;
        bool operator>=(const fixed&) const;
        bool operator<=(const fixed&) const;
        bool operator==(const fixed&) const;
        bool operator!=(const fixed&) const;
		
        //arithmetic operators
        fixed operator+(const fixed&) const;
        fixed operator-(const fixed&)const;
        fixed operator*(const fixed&)const;
        fixed operator/(const fixed&)const;

        //assignment operator
        fixed& operator=(const fixed&);

        //min max
        static const fixed& min(const fixed &, const fixed &);
        static const fixed& max(const fixed &, const fixed &);

        //++ --
        fixed &operator++(void);
        fixed operator++(int);
        fixed &operator--(void);
        fixed operator--(int);




		int getRawBits(void) const;
		void setRawBits(int const);
		
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream&	operator<<(std::ostream &out, const fixed &copy);
