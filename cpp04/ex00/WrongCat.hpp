#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat(WrongCat& c);
	WrongCat&    operator=(WrongCat& c);
	~WrongCat();

	void    makeSound(void) const;
};
