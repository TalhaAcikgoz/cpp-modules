#include "harl.hpp"

int main(int ac, char **av) {
    if (ac == 2) {
        std::string level(av[1]);
        harl check;
        check.complain(level);
    }
}