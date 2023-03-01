#include <iostream>
#include <string>

int main(int ac, char **av) {
    std::string tmp;
    if (ac < 2) {
        std::cout << "* SILENCE I WISH NOT TO BE H ANYMORE *";
        return 1;
    }
    for (int i=1; av[i] != '\0'; i++) {
        tmp = av[i];
        for (int j=0; av[i][j] != '\0'; j++) {
            if (tmp.at(j) >= 'a' && tmp.at(j) <= 'z') {
                std::cout << (char)std::toupper(tmp.at(j));
            }
            else
                std::cout << tmp.at(j);
            if (av[i][j + 1] == '\0')
                std::cout << ' ';
        }
    }
    std::cout << std::endl;
}
