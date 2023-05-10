#include "ScalarConverter.hpp"

char convch(std::string str) {
	char one = static_cast<char>(str[0]);
	if (isprint(one) && !str[1]) {
		std::cout << "char : " <<  '\'' << '\'' << std::endl;
		return one;
	} else {
		std::cout << "char : " << "nan" << std::endl;
	}
	return 0;
}

float	convf(std::string str) {
	float f = static_cast<float>(atof(str.c_str()));
	int i = static_cast<int>(atoi(str.c_str()));
	if (isinf(f)) {
		std::cout << "float: " << "infinitive" << std::endl;
	} else if (f - i == 0 && f < 999999) {
		std::cout << "float: " << f << "f" << std::endl;
	} else {
		std::cout << "float: " << f << "f" << std::endl;
	}
	return f;
}

int	convi(std::string str) {
	int i = static_cast<int>(atoi(str.c_str()));
	if(atof(str.c_str()) > 2147483647 || atof(str.c_str()) < -2147483648)
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	return i;
}

void    ScalarConverter::convert(std::string str) {
	if(!str.compare("nan") || !str.compare("nanf"))
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "nanf" << std::endl;
		std::cout << "double: " << "nan" << std::endl;
		return;
	}
	convch(str);
	convf(str);
	convi(str);
}


