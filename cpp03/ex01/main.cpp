#include "ScavTrap.hpp"

int main() {
	{
		ScavTrap n("clap");
		std::cout << n << std::endl;
		n.attack("aaa");
		n.beRepaired(20);
		n.takeDamage(4);
		n.attack("bb");
	}
	{
		std::cout << std::endl << "ScavTrap" << std::endl << std::endl;
		ScavTrap	a;
		ScavTrap	b("eyubi");
		ScavTrap	c(b);
		std::cout << c << std::endl;
		a.attack("ClapTrap");
		b.attack("emircan");
		b.takeDamage(39);
		b.guardGate();
	}
}
