#include "DiamondTrap.hpp"

int main() {
	{
		DiamondTrap n("clap");
		std::cout << n << std::endl;
		n.attack("aaa");
		n.beRepaired(20);
		n.takeDamage(4);
		n.attack("bb");
	}
	{
		std::cout << std::endl << "DiamondTrap" << std::endl << std::endl;
		DiamondTrap	a;
		std::cout << a << std::endl;
		DiamondTrap	b("eyubi");
		std::cout << "getname: " <<  b.getName() << " dia::name: " << b.getDiaTrapName() << std::endl;
		std::cout << b << std::endl;
		DiamondTrap	c(b);
		std::cout << c.getName() << "  " << c.getDiaTrapName() <<  std::endl;
		a.attack("ClapTrap");
		b.attack("emircan");
		b.takeDamage(101);

		b.highFivesGuys();
	}
}
