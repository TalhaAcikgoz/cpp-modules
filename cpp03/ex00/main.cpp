#include "ClapTrap.hpp"

int main() {
    ClapTrap n("clap");
    std::cout << n << std::endl;
    n.attack("aaa");
    n.beRepaired(20);
    n.takeDamage(4);
    n.attack("bb");
}
