#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form() {

}

PresidentialPardonForm::PresidentialPardonForm(std::string _target): target(_target) {
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

void	PresidentialPardonForm::execute(Bureaucrat const& executer) const {
	if (executer.getGrade() > this->getmustGrade() || executer.getGrade() > this->getmustExecute())
		throw GradeTooLowException();
	else if (this->getSigned() == false)
		std::cout << "Form not signed" << std::endl;
	else {
		std::cout << "Informs that " << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
}
