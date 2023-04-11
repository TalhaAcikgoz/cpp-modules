#pragma once

#include "AForm.hpp"
#include <iostream>
#include <fstream>

class ShrubberyCreationForm : public AForm {
private:
    std::string target;
public:
    ShrubberyCreationForm(std::string _target);
    ShrubberyCreationForm(const ShrubberyCreationForm& c);
    ShrubberyCreationForm&  operator=(const ShrubberyCreationForm& c);
    virtual ~ShrubberyCreationForm();

    void    execute(const Bureaucrat& executer) const ;
};