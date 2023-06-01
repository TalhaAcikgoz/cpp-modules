#pragma once

#include <iostream>
#include <map>
#include <algorithm>
#include <fstream>

class BitcoinExchange {
	public:
		std::map<std::string, double>	data;
		std::map<std::string, double>	exchange;
		void    readdata(std::string path);

		class FileNotOpen : public std::exception {
			public:
				const char *what() const throw() {
					return "File can not opened.";
				}
		};
};