#pragma once

#include <iostream>
#include <map>
#include <algorithm>
#include <fstream>

class BitcoinExchange {
	public:
		std::map<std::string, int>  data;
		void    readdata(std::string path);
		void    setdata();

		class FileNotOpen : public std::exception {
			public:
				const char *what() const throw() {
					return "File can not opened.";
				}
		}
};