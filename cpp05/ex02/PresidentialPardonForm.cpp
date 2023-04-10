#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string& _target) {
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

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << red << "PresidentialPardonForm deconstructor" << white << std::endl;
}

void	PresidentialPardonForm::execute(const Bureaucrat& executer) {
	try {
		if (executer.getGrade() > this->getmustGrade() || executer.getGrade() > this->getmustExecute())
			throw GradeTooLowException();
		else {
			this->beSigned(executer);
			std::cout << "Informs that "
		}
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}
