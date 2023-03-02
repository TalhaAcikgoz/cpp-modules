#pragma once

#include <string>
#include <iostream>

class ClapTrap {
private:
	std::string	name;
	int     	hp;
	int     	stamina;
	int			ad;
public:
	ClapTrap();
	ClapTrap(std::string name, int hp, int stamina, int ad);
	ClapTrap(ClapTrap& c);
	~ClapTrap();

	ClapTrap&	operator=(ClapTrap& c);

	std::string	getName(void);
	int			getHP(void);
	int			getStamina(void);
	int			getAD(void);

	void	setName(std::string _name);
	void	setHP(int _hp);
	void	setStamina(int _stamina);
	void	setAD(int _ad);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

std::ostream& operator<<(std::ostream& o, ClapTrap& c);
