#include "FragTrap.hpp"

int main() {
	{
		FragTrap n("clap");
		std::cout << n << std::endl;
		n.attack("aaa");
		n.beRepaired(20);
		n.takeDamage(4);
		n.attack("bb");
	}
	{
		std::cout << std::endl << "FragTrap" << std::endl << std::endl;
		FragTrap	a;
		FragTrap	b("eyubi");
		FragTrap	c(b);
		a.attack("ClapTrap");
		b.attack("emircan");
		b.takeDamage(101);

		b.highFivesGuys();
	}
}
