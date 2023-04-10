#pragma once

#include <string>
#include <iostream>
#include "AForm.hpp"

#define green "\033[1;32m"
#define red "\033[1;31m"
#define white "\033[0m"

class PresidentialPardonForm : public AForm {
private:
	std::string	target;
public:
	void	execute(const Bureaucrat& executer);

	PresidentialPardonForm(std::string& _target);
	PresidentialPardonForm(const PresidentialPardonForm& _copy);
	const PresidentialPardonForm& operator=(const PresidentialPardonForm& _copy);
	~PresidentialPardonForm();
};
