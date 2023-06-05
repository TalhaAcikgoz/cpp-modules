#pragma once

#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <fstream>
#include <vector>
#include <utility>
#include <map>

class BitcoinExchange {
	public:
		std::map<std::string, double>	data;
		std::map<std::string, double>	exchange;

		void    readdata();
		double	give_back_data(std::string key, double value);
		void	print();

		class FileNotOpen : public std::exception {
			public:
				const char *what() const throw() {
					return "File can not opened.";
				}
		};
};
