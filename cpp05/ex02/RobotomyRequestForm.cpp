#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string _target): target(_target) {
    this->setName("RobotomyRequestForm");
    this->setmustGrade(72);
    this->setmustExecute(45);
    std::cout << green << "Robotomy default const called" << white << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& c) {
    *this = c;
    std::cout << green << "Robotomy copy const called" << white << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& c) {
    this->setisSigned(c.getSigned());
    this->setmustExecute(c.getmustExecute());
    this->setmustGrade(c.getmustGrade());
    this->setName(c.getName());
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << red << "Robotomy deconst called" << white << std::endl;
}

void	RobotomyRequestForm::execute(const Bureaucrat& executer) const {
    std::srand(std::time(NULL));
	if (executer.getGrade() > this->getmustGrade() || executer.getGrade() > this->getmustExecute())
		throw GradeTooLowException();
	else if (this->getSigned() == false)
		std::cout << "Form not signed" << std::endl;
	else {
		if (rand() % 2 == 0)
            std::cout << this->target << " has been robotomized succesfully" << std::endl;
        else
            std::cout << this->target << " has been robotomized failed" << std::endl;
	}
}
