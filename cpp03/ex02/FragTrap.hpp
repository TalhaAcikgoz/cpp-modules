#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
    FragTrap();
	FragTrap(std::string _name);
	FragTrap(FragTrap& copy);
	FragTrap& operator=(FragTrap& copy);
	~FragTrap();

	void	highFivesGuys(void);
};

std::ostream&   operator<<(std::ostream& o, FragTrap& c);