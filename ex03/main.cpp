#include "humanA.hpp"
#include "humanB.hpp"

void runWar(void)
{
    {
        weapon m4 = weapon("m4");
        humanA bob("Officer Bob", m4);
        bob.attack();
        m4.setType("modified m4");
        bob.attack();
    }
    {
        weapon glock19 = weapon("glock19");
        humanB jamal("OG Jamal");
        jamal.setWeapon(glock19);
        jamal.attack();
        glock19.setType("Gold glock19");
        jamal.attack();
    }
}

int main(void) {
    runWar();
}