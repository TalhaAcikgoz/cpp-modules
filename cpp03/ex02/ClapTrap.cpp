#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name): name(_name), hp(10), stamina(10), ad(0) {
    std::cout << "ClapTrap asignment constructor called" << std::endl;
}

ClapTrap::ClapTrap(): hp(10), stamina(10), ad(0), name("ClapTrap") {
    std::cout << "ClapTrap default constructer called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& c) {
    *this = c;
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap&    ClapTrap::operator=(ClapTrap& c) {
    std::cout << "ClapTrap copy asignment operator called" << std::endl;
    this->name = c.name;
    this->hp = c.hp;
    this->stamina = c.stamina;
    this->ad = c.ad;
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap deconstructor called" << std::endl;
}

void    ClapTrap::attack(const std::string& target) {
    if (this->stamina > 0 && this->getHP() > 0) {
        std::cout << this->getName() << " has given " << this->ad << " damage to " << target << std::endl;
        this->stamina -= 1;
    }
}

void    ClapTrap::takeDamage(unsigned int amount) {
    if (this->stamina > 0 && this->getHP() > 0) {
        std::cout << this->getName() << " was take " << amount << " damage" << std::endl;
        this->hp -= amount;
        this->stamina -= 1;
        if (this->getHP() < 0)
            std::cout << this->getName() << " is died" << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount) {
    if (this->stamina > 0 && this->getHP() > 0) {
        this->hp += amount;
        std::cout << this->getName() << " is " << amount << " hp repaired" << std::endl;
        this->stamina -= 1;
    }
}

std::string	ClapTrap::getName(void)     {return this->name;}
int			ClapTrap::getHP(void)       {return this->hp;}
int			ClapTrap::getStamina(void)  {return this->stamina;}
int			ClapTrap::getAD(void)       {return this->ad;}

void	ClapTrap::setName(std::string _name) {this->name = _name;}
void	ClapTrap::setHP(int _hp) {this->hp = _hp;}
void	ClapTrap::setStamina(int _stamina) {this->stamina = _stamina;}
void	ClapTrap::setAD(int _ad) {this->ad = _ad;}

std::ostream&   operator<<(std::ostream& o, ClapTrap& c) {
	o << "Name: " << c.getName() << " HP: " << c.getHP() << " Stamina: " << c.getStamina() << " AD: " << c.getAD();
    return o;
}
