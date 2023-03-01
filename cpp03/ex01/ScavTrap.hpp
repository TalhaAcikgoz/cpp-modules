#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
private:
	bool	isGate;
public:
	ScavTrap();
	ScavTrap(std::string _name, int hp, int stamina, int ad);
	ScavTrap(ScavTrap& copy);
	ScavTrap& operator=(ScavTrap& copy);
	~ScavTrap();

	void	guardGate();
	void	attack(const std::string& target);
};
