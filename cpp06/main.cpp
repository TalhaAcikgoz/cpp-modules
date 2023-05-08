#include "ScalarConverter.hpp"

int main(int ac, char **av) {
    (void)ac;
    if (ac == 2) {
        ScalarConverter a;
        a.convert(av[1]);
        return 0;
    } else {
        std::cout << "not enough arguement" << std::endl;
        return 1;
    }
}