#include "Zombie.hpp"

zombie* zombieHorde(int N, std::string name)
{
    zombie* horde = new zombie[N];
    for (int i = 0; i < N; i++){
        new(&horde[i]) zombie(name);
    }
    return horde;
}