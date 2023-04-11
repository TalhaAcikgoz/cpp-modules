#pragma once

#include <string>
#include <iostream>
#include "AForm.hpp"

class AForm;

class PresidentialPardonForm : public AForm {
private:
	std::string	target;
public:
	void	execute(Bureaucrat const& executer) const ;

	PresidentialPardonForm();
	PresidentialPardonForm(std::string _target);
	PresidentialPardonForm(const PresidentialPardonForm& _copy);
	const PresidentialPardonForm& operator=(const PresidentialPardonForm& _copy);
	~PresidentialPardonForm();
};
