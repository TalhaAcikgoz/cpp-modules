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
	ClapTrap(std::string name);
	ClapTrap(ClapTrap& c);
	~ClapTrap();

	ClapTrap&	operator=(ClapTrap& c);

	std::string	getName(void) const ;
	int			getHP(void) const ;
	int			getStamina(void) const ;
	int			getAD(void) const ;

	void	setName(std::string);
	void	setHP(int _hp);
	void	setStamina(int _stamina);
	void	setAD(int _ad);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};
