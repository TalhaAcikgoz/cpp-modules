#pragma once

#include <iostream>
#include <string>

class zombie {
    public:
    zombie();
    zombie(std::string name);
    void announce( void ) const;

    private:
        mutable std::string Name;
};

    void start_horde(void);
    zombie* zombieHorde( int N, std::string name );