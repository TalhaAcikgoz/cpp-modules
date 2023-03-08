#pragma once

#include <string>
#include <iostream>

class Animal {
protected:
	std::string type;
public:
	Animal();
	Animal(Animal& c);
	Animal& operator=(Animal& c);
	~Animal();

	std::string		getType(void) const ;
    virtual void    makeSound(void) const;
};
