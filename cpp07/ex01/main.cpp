#include "iter.hpp"

void printer(const std::string &c) {
    std::cout << c;
}

int main() {
    size_t i = 2;
    std::string a[2]={"abori","annen"};
    iter(a, i, printer);
}
