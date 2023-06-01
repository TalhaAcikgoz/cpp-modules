#include "BitcoinExchange.hpp"

void    BitcoinExchange::readdata(std::string path) {
	std::ifstream	file("data.csv", std::ios::in);
	std::string								  line;
	std::pair<std::string, std::string>		   tmp;

	if (!file.is_open()) {
		throw FileNotOpen();
	}
	std::ofstream out("out.csv", std::ios::trunc);
	getline(file, line);
	for (;getline(file, tmp.first, ',');) {
		getline(file, tmp.second);
		this->data[tmp.first] = std::stod(tmp.second);
	}
	file.close();
	file.open(path, std::ios::in);
	getline(file, line);
	for (; getline(file, tmp.first, '|');) {
		getline(file, tmp.second);
		this->exchange[tmp.first] = std::stod(tmp.second);
	}
}

print
std::ofstream out("out.csv", std::ios::trunc);
out << tmp.first << ',' << this->data[tmp.first] << std::endl;