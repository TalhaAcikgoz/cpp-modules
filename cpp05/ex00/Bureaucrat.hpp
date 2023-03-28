#pragma once

#include <string>
#include <iostream>

class Bureaucrat {
protected:
	const std::string name;
	int grade;
public:
	Bureaucrat(const std::string _name, int _grade);
	Bureaucrat(const Bureaucrat& _copy);
	const Bureaucrat& operator=(const Bureaucrat& _copy);
	~Bureaucrat();

	const std::string   getName(void) const;
	int getGrade(void) const;

	const std::string GradeTooHighException;
	const std::string GradeTooLowException;
};

std::ostream&   operator<<(std::ostream& o, const Bureaucrat& b);