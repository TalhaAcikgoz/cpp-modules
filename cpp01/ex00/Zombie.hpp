#pragma once
#include <iostream>
#include <string>

class zombie {
    public:
    void announce( void );
    void set_name(std::string);
    std::string get_name(void);
    zombie();
    zombie(std::string _Name);
    ~zombie();

    private:
        std::string Name;
};

    zombie* newZombie( std::string name );
    void randomChump( std::string name );

