#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string& _target): target(_target) {
    this->setisSigned(false);
    this->setmustGrade(145);
    this->setmustExecute(137);
    this->setName("ShrubberyCreationForm");
    std::cout << green << "ShrubberyCreation constructor called" << white << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& c) {
    *this = c;
    std::cout << green << "ShrubberyCreation copy constructor called" << white << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << green << "ShrubberyCreation deconstructor called" << white << std::endl;
}

ShrubberyCreationForm&  ShrubberyCreationForm::operator=(const ShrubberyCreationForm& c) {
    this->setisSigned(c.getSigned());
	this->setmustExecute(c.getmustExecute());
	this->setmustGrade(c.getmustGrade());
	this->setName(c.getName());
	return *this;
}

void    ShrubberyCreationForm::execute(const Bureaucrat& executer) {
	if (executer.getGrade() > this->getmustGrade() || executer.getGrade() > this->getmustExecute())
		throw GradeTooLowException();
	else if (this->getSigned() == false)
		std::cout << "Form not signed" << std::endl;
	else {
		this->beSigned(executer);
		this->target + "_shrubbery";
        const char *filename = this->target.data();
        std::ofstream   a(filename, std::ofstream::trunc | std::ofstream::out);
        for (int i = 0; i < 128; i++) {
            if (std::isprint(i) && std::isalnum(i))
            std::cout << static_cast<char>(i) << " ";
        }
        std::cout << std::endl;
        a.close();
	}
}