#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
private:
    std::string target;
public:
    ShrubberyCreationForm(std::string& _target);
    ShrubberyCreationForm(const ShrubberyCreationForm& c);
    ShrubberyCreationForm&  operator=(const ShrubberyCreationForm& c);
    ~ShrubberyCreationForm();

    void    execute();
};