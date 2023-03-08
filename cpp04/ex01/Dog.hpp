#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
	Brain*	brain;
public:
	Dog();
	Dog(const Dog& c);
	Dog&    operator=(const Dog& c);
	~Dog();

	void    makeSound(void) const;
};
