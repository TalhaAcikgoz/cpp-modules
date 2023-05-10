#pragma once

#include <string>
#include <iostream>
#include <ctype.h>



class ScalarConverter {
	private:
		std::string input;
		int type;
	public:
		static void    convert(std::string str);
};