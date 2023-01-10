#include "PhoneBook.hpp"

int start(void) {
    int input;
    std::cout << " + 1 FOR ADD + 2 FOR SEARCH + 3 FOR EXIT +" << std::endl;
    std::cin >> input; std::cin.ignore();
    std::cout << sizeof(input) << input << std::endl;
}

int main(void) {
    phonebook book;
    while (true) {
        if (!start()) {
            
        }
    }
    return (0);
}