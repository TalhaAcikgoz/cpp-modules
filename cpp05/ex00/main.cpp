#include "Bureaucrat.hpp"

int main(){
    try
    {
        throw ;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}