#include "Zombie.hpp"

void    runZombie(void)
{
    zombie asd("Crazy");
    asd.announce();
    zombie* foo = newZombie("Foo");
    randomChump("Flash");
    delete foo;
}

int main()
{
    runZombie();
}