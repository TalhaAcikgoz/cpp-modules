#include "harl.hpp"

int main(int ac,char** av)
{
    if(ac == 2)
    {
        harl True;
        std::string level(av[1]);
        True.complain(level);
    }
    return(0);
}