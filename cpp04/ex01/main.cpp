#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    const Animal* j = new Dog();
    const Animal* a = new Cat();
    delete j;
    delete a;
    // system("leaks worldonfire");
}