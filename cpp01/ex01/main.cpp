#include "Zombie.hpp"

void start_horde(void)
{
    int N = 5;
    std::string name = "ZombieHorde";
    zombie* horde = zombieHorde(N, name);
    for (int i = 0; i < N; i++) {
        horde[i].announce();
    }
    delete[] horde;
}

int main()
{
    start_horde();
}