#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
	Brain*	brain;
public:
	Cat();
	Cat(Cat& c);
	Cat&    operator=(Cat& c);
	~Cat();

	void    makeSound(void) const;
};
