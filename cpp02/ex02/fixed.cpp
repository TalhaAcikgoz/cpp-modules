#include "fixed.hpp"

fixed::fixed() : raw_bits(0)
{}

fixed::fixed(const fixed& copy) : raw_bits(copy.getRawBits())
{}

fixed::fixed(const int nbr) : raw_bits(nbr << fractional) 
{}

fixed::fixed(const float nbr) : raw_bits(roundf(nbr * (1 << fractional)))
{}

fixed& fixed::operator=(const fixed& nbr){
	if(this != &nbr)
		raw_bits = nbr.getRawBits();
	return(*this);
}

fixed::~fixed()
{}

//gettr settr
int fixed::getRawBits(void) const {return(this->raw_bits);}
void fixed::setRawBits(int const nbr){this->raw_bits = nbr;}

//toint tofloat
float fixed::toFloat(void) const 
{return((float)getRawBits() / (1 << fractional));}

int fixed::toInt() const
{return (getRawBits() >> fractional);}

std::ostream & operator<<(std::ostream &o, const fixed &f)
{
	o << f.toFloat();
	return o;
}

//comparison operators
bool	fixed::operator>(const fixed &n) const
{return(this->raw_bits > n.getRawBits());}

bool fixed::operator<(const fixed &n) const
{return(this->raw_bits < n.getRawBits());}

bool fixed::operator>=(const fixed &n) const
{return(this->raw_bits >= n.getRawBits());}

bool fixed::operator<=(const fixed &n) const
{return(this->raw_bits <= n.getRawBits());}

bool fixed::operator==(const fixed& n) const
{return(this->raw_bits == n.getRawBits());}

bool fixed::operator!=(const fixed& n) const
{return(this->raw_bits != n.getRawBits());}

//arithmetic operators
fixed fixed::operator+(const fixed& n) const
{return(fixed(this->toFloat() + n.toFloat()));}

fixed fixed::operator-(const fixed& n) const
{return(fixed(this->toFloat() - n.toFloat()));}

fixed fixed::operator*(const fixed& n) const
{return(fixed(this->toFloat() * n.toFloat()));}

fixed fixed::operator/(const fixed& n) const
{return(fixed(this->toFloat() / n.toFloat()));}

//min max
const fixed& fixed::min(const fixed &a, const fixed &b)
{
	return(a.getRawBits() < b.getRawBits()) ? a : b;
}

const fixed& fixed::max(const fixed &a, const fixed &b)
{
	return(a.getRawBits() > b.getRawBits()) ? a : b;
}
//++ --
fixed &fixed::operator++(void)
{
	this->raw_bits++;
	return(*this);
}
//++a
fixed fixed::operator++(int)
{
	fixed a(this->toFloat());
	this->raw_bits++;
	return(a);
}
//a++
fixed &fixed::operator--(void)
{
	this->raw_bits--;
	return(*this);
}

fixed fixed::operator--(int)
{
	fixed a(this->toFloat());
	this->raw_bits--;
	return(a);
}