#pragma once

#include <string>
#include <iostream>

class WrongAnimal{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal& c);
	WrongAnimal& operator=(WrongAnimal& c);
	~WrongAnimal();

	std::string		getType(void) const ;
    void    makeSound(void) const;
};
