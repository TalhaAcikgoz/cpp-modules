#include "Bureaucrat.hpp"

int main(){
    std::string serv("servet");
    try {
        Bureaucrat servet("servet", 7);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
    return 0;
}