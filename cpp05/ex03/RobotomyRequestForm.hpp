#pragma once

#include "Form.hpp"
#include <cstdlib>

class RobotomyRequestForm : public Form {
private:
    std::string target;
public:
    void    execute(const Bureaucrat& executer) const ;

    RobotomyRequestForm(std::string _target);
    RobotomyRequestForm(RobotomyRequestForm& c);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& c);
    ~RobotomyRequestForm();
};