#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {
	weapon	m4 = weapon("m4");

	humanA bob("Officer Bob", m4);
	bob.attack();
	m4.setType("modified m4");
	bob.attack();
}
