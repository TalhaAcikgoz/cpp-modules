#include "Span.hpp"

int main() {
	try {
		srand(time(NULL));
		Span	l(10000);
		for (int i = 0; i < 9999; i++) {
			l.addNumber(rand()%100000);
		}
		std::cout << "shortest span is " << l.shortestSpan() << std::endl;
		std::cout << "longest span is " << l.longestSpan() <<" max " << l.max() << " min " << l.min() << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}
