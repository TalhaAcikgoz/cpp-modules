#include <iostream>

int main(void) {
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << "Str memory adress: " << &brain << "\nstringPTR memory adress: " << &stringPTR << "\nstringREF memory adress: " << &stringREF << std::endl;
    std::cout << "\nStr: " << brain << "\nstringPTR: " << *stringPTR << "\nstringREF: " << stringREF << std::endl;
}