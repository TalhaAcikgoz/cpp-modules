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

void    execute() {
    
}