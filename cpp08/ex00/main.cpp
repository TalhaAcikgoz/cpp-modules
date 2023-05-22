#include "easyfind.hpp"

int main() {
    std::vector<int> a;
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        int b = rand();
        a.push_back(b);
    }
    a.push_back(8);
    try {
        std::cout << static_cast<int>(easyfind(a, 8)) << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}