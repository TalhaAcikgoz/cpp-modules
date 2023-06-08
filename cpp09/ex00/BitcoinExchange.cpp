#include "BitcoinExchange.hpp"

void    BitcoinExchange::readdata() {
    std::ifstream file("data.csv");
    if (file.is_open()) {
            std::string line;

            while (std::getline(file, line)) {
                std::stringstream ss(line);
                std::string key;
                double value;

                if (std::getline(ss, key, ',') && ss >> value) {
                    data[key] = value;
                }
            }
            file.close();
    }
}

double BitcoinExchange::give_back_data(std::string key, double value) {
    if (key < data.begin()->first)
        return (0);
    else {
        std::map<std::string, double>::iterator prev = data.begin();
        std::map<std::string, double>::iterator it;
        for (it = data.begin(); it != data.end(); ++it) {
            if (it->first >= key) {
                if (it->first == key)
                    return (value * it->second);
                else
                    return (value * prev->second);
            }
            prev = it;
        }
    }
    return (1);
}

void    BitcoinExchange::print(void) {
    for (std::map<std::string, double>::iterator it = this->data.begin(); it != this->data.end(); it++) {
        std::cout << it->first << " " << it->second << std::endl;
    }
}