#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <list>

class Span {
	public:
		unsigned int	n;
		std::list<int>	sp;

		Span(unsigned int _n);
		Span(Span &c);
		Span	&operator=(Span &c);
		~Span();

		void	addNumber(int num);
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
};
