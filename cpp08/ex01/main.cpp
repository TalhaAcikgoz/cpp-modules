#include "Span.hpp"

int main() {
	try {
		Span	l(4);
		l.addNumber(9);
		l.addNumber(5);
		l.addNumber(3);
		l.addNumber(20);
		std::cout << "shortest span is " << l.shortestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	Span c(8);
	c.addNumber(534);
	c.addNumber(34567);
	c.addNumber(6);
	c.addNumber(2345);
	c.addNumber(347);
	c.addNumber(67234);
	std::cout << c.max() << std::endl;
}
