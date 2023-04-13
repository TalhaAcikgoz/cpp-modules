#pragma once

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
public:
    Intern();
    Intern(Intern& c);
    Intern& operator=(Intern& c);
    ~Intern();

    Form*   makeForm(std::string name, std::string target);

    class FormNotFound : public std::exception {
        virtual const char *what() const throw();
    };
};
