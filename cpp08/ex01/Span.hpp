#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <list>
#include <limits>

class Span {
	public:
		unsigned int	n;
		std::list<int>	sp;

		Span(unsigned int _n);
		Span(Span &c);
		Span	&operator=(Span &c);
		~Span();

		void	addNumber(long num);
		int		shortestSpan();
		int		longestSpan();

		int	min();
		int	max();

		class Fullexception : public std::exception {
			public:
				virtual const char *what() const throw() {
					return "List is full.";
				}
		};
		class OutOffLimits : public std::exception {
			public:
				virtual const char *what() const throw() {
					return "Out off limits.";
				}
		};
};
