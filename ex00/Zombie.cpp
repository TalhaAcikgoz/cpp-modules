#include "Zombie.hpp"

void zombie::announce (void) {
    std::cout << this->get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}

std::string zombie::get_name(void) {
    return(this->Name);
}

void zombie::set_name(std::string _name) {
    this->Name = _name;
}

zombie::zombie() {}

zombie::zombie(std::string _Name) {
    set_name(_Name);
}

zombie::~zombie() {}