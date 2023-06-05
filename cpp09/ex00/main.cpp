#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
    if (ac == 2) {
        try{
            BitcoinExchange btc;
            btc.readdata();
            std::string  line;
            std::ifstream   infile(av[1]);

            std::getline(infile, line);
            while (std::getline(infile, line)) {
                std::istringstream  ss(line);
                std::string key_s, value_s;

                if (std::getline(ss, key_s, '|') && std::getline(ss, value_s)) {
                    key_s.erase(0, key_s.find_first_not_of(" \t\n\r\f\v"));
                    key_s.erase(key_s.find_last_not_of(" \t\n\r\f\v") + 1);
                    value_s.erase(0, value_s.find_first_not_of(" \t\n\r\f\v"));
                    value_s.erase(value_s.find_last_not_of(" \t\n\r\f\v") + 1);

                    //  check date format  ->   yyyy(-)mm(-)dd
                    if (key_s.length() != 10 || key_s[4] != '-' || key_s[7] != '-') {
                        std::cerr << "Error: bad input =>" << line << std::endl;
                        continue;
                    }

                    //value cast
                    double  value;
                    try {
                        value = std::stod(value_s);
                    } catch (std::exception &e) {
                        std::cerr << "Error: invalid value in line: " << line << std::endl;
                        continue;
                    }

                    //bitcoin value is within the valid range
                    if (value < 0) {
                        std::cerr << "Error: not a positive number." << std::endl;
                        continue;
                    }
                    if (value > 1000) {
                        std::cerr << "Error: too large a number." << std::endl;
                        continue;
                    }

                    //saving value
                    btc.exchange[key_s] = value;
                } else {
                    std::cerr << "Error: bad input => " << line << std::endl;
                    continue;
                }
                std::cout << key_s << " ==> " << btc.exchange[key_s] << " = " << btc.give_back_data(key_s, btc.exchange[key_s]) << std::endl;
            }
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    } else {
        std::cout << "Error: Bad arguement. " << std::endl;
    }
}
