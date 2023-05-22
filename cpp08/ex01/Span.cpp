#include "Span.hpp"

Span::Span(unsigned int _n) : n(_n) {
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

void    Span::addNumber(int num) {
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
	int x = 0;
	for (; x <= max; x++) {
		for (std::list<int>::iterator ix = this->sp.begin(); ix != sp.end(); ix++) {
			if (max - x == *ix && max != *ix)
				return x;
		}
	}
	return -1;
}
