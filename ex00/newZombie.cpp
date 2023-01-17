#include "Zombie.hpp"

zombie* newZombie( std::string name )
{
    zombie* nzombie = new zombie(name);
    nzombie->announce();
    return(nzombie);
}