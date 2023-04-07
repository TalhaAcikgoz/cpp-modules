#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {
	this->setName("PresidentialPardonForm");
	this->setmustExecute(5);
	this->setmustGrade(25);
	std::cout << green << "PresidentialPardonForm constructor called" << white << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& _copy) {
	*this = _copy;
	std::cout << green << "PresidentialPardonForm copy called" << white << std::endl;
}

const PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& _copy) {
	this->setisSigned(_copy.getSigned());
	this->setmustExecute(_copy.getmustExecute());
	this->setmustGrade(_copy.getmustGrade());
	this->setName(_copy.getName());
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() { std::cout << red << "PresidentialPardonForm deconstructor" << white << std::endl;}
