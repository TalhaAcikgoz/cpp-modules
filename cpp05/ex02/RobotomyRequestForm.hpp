#pragma once

#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm {
private:
    std::string target;
public:
    void    execute(const Bureaucrat& executer) const ;

    RobotomyRequestForm(std::string _target);
    RobotomyRequestForm(RobotomyRequestForm& c);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& c);
    ~RobotomyRequestForm();
};