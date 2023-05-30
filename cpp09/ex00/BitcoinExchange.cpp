#include "BitcoinExchange.hpp"

void    BitcoinExchange::readdata(std::string path) {
	std::ifstream   file(path);
	std::string		line;
	if (file.is_open()) {
		throw FileNotOpen();
	}
	getline(file, line);

	for ()
}