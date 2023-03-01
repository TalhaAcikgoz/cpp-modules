#include "ScavTrap.hpp"

int main() {
	{
		ScavTrap n("clap", 14, 13, 3);
		std::cout << n << std::endl;
		n.attack("aaa");
		n.beRepaired(20);
		n.takeDamage(4);
		n.attack("bb");
	}
	{
		std::cout << std::endl << "ScavTrap" << std::endl << std::endl;
		ScavTrap	a;
		ScavTrap	b("eyubi", 100, 49, 28);
		ScavTrap	c(b);
		a.attack("ClapTrap");
		b.attack("emircan");
		b.takeDamage(101);
	}
}
