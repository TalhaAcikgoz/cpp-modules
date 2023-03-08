#pragma once

#include "Animal.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(const Dog& c);
	Dog&    operator=(const Dog& c);
	~Dog();

	void    makeSound(void) const;
};
