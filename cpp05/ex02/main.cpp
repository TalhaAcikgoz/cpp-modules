#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

int main(){
    std::string serv("servet");
    Bureaucrat servet(serv, 29);
    PresidentialPardonForm a;
    servet.signForm(a);
    std::cout << servet << std::endl << std::endl;
    return 0;
}
