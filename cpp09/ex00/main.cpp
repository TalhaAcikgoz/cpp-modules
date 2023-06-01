#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
    if (ac == 2) {
        try{
            BitcoinExchange a;
            a.readdata(av[1]);
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    } else {
        std::cout << "Error: Bad arguement. " << std::endl;
    }
}