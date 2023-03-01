#include "Zombie.hpp"

void zombie::announce(void) const {
    std::cout << this->Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

zombie::zombie(){};

zombie::zombie(std::string name) : Name(name) {}