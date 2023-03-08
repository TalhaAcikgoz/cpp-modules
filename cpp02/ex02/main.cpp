#include "fixed.hpp"

int main(int argc, char **argv) {
	fixed a;
	fixed const b( fixed( 5.05f ) * fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << fixed::max( a, b ) << std::endl;
return 0;
}
