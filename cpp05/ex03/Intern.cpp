#include "Intern.hpp"
#include <algorithm>

Intern::Intern() {
	std::cout << green << "The slave has been created" << white << std::endl;
}

Intern::Intern(Intern& c) {
	*this = c;
}

Intern& Intern::operator=(Intern& c) {
	std::cout << "assaingment" << green << "operator" << white << "called" << std::endl;
	return *this;
}

Intern::~Intern() {
	std::cout << red << "The slave need a break" << white << std::endl;
}

Form*  Intern::makeForm(std::string s1, std::string s2) {
	std::string name[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	int i = 0;
	for (; name[i].find(s1) && i < 3;i ++) {
		;
	}
	switch (i)
	{
		case 0:
			return new PresidentialPardonForm(s2);
		case 1:
			return new RobotomyRequestForm(s2);
		case 2:
			return new ShrubberyCreationForm(s2);
		default:
			break;
	}
	return NULL;
}

const char *Intern::FormNotFound::what() const throw() {
	return "Form can not created";
}
