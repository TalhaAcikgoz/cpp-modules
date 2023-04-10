#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
private:
    std::string target;
public:
    void    execute(const Bureaucrat& executer);

    RobotomyRequestForm(std::string& _target);
    RobotomyRequestForm(RobotomyRequestForm& c);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& c);
    ~RobotomyRequestForm();


};