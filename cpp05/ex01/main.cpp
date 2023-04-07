#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
    std::string serv("servet");
    Bureaucrat servet(serv, 29);
    Form   dava("newform", 38, 0);
    dava.beSigned(servet);
    servet.signForm(dava);
    std::cout << servet << std::endl << dava << std::endl;
    return 0;
}
