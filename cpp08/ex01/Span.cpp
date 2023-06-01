#include "Span.hpp"

Span::Span(unsigned int _n) : n(_n) {
	this->n = _n;
}

Span::Span(Span &c) {
	*this = c;
}

Span    &Span::operator=(Span &c) {
	this->n = c.n;
	this->sp = c.sp;
	return *this;
}

Span::~Span() {
	this->sp.clear();
}

void    Span::addNumber(long num) {
	if (num > INT_MAX || num < INT_MIN)
		throw OutOffLimits();
	if (this->sp.size() < this->n) {
		this->sp.push_back(num);
	} else {
		throw Fullexception();
	}
}

int Span::min() {
	int min = 0;
	for (std::list<int>::iterator ix = this->sp.begin(); ix != this->sp.end(); ix++) {
		if (ix == this->sp.begin())
			min = *ix;
		else if (*ix < min)
			min = *ix;
	}
	return min;
}

int	Span::max() {
	int max = 0;
	for (std::list<int>::iterator ix = this->sp.begin(); ix != this->sp.end(); ix++) {
		if (ix == this->sp.begin())
			max = *ix;
		else if (*ix > max)
			max = *ix;
	}
	return max;
}

int	Span::shortestSpan() {
	int min = this->min();
	int x = 0;
	for (; x <= this->max(); x++) {
		for(std::list<int>::iterator ix = this->sp.begin(); ix != sp.end(); ix++) {
			if (min + x == *ix && min != *ix) {
				return x;
			}
		}
	}
	return -1;
}

int Span::longestSpan() {
	int max = this->max();
	int min = this->min();
	return (max - min);
}
