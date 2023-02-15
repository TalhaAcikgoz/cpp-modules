#include "fixed.hpp"

int main(int argc, char **argv) {
	fixed a;
	fixed b( a );
	fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}
