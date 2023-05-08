#include "ScalarConverter.hpp"

char convch(char *str) {
	char a = static_cast(str);
	if (isprint(static_cast<int>(str[0])) && !str[1]) {
		std::cout << "char : " <<  '\'' << static_cast<char>(str[0]) << '\'' << std::endl;
	} else {
		std::cout << "char : " << "nan" << std::endl;
	}
	return 0;
}

float	convf(std::string str) {
	float f;
	if (str[0]) {
		f = atof(str.c_str());
		std::cout << "float: " << static_cast<float>(f) << std::endl;
	}
	return f;
}

int	convi(std::string str) {
	if (!str.compare("+inf") || !str.compare("-inf")) {

	}
	if (str[0]) {
		int i;
		i = static_cast<int>(atoi(str.c_str()));
		std::cout << "int  : " << i << std::endl;
	}
}

void    ScalarConverter::convert(char *str) {
	if(!str.compare("nan") || !str.compare("nanf"))
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "nanf" << std::endl;
		std::cout << "double: " << "nan" << std::endl;
		return 0;
	}
	convch(str);
	convf(str);
	
	
}
