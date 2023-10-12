#pragma once

#include <string>
#include <iostream>
#include "Form.hpp"

#define green "\033[1;32m"
#define red "\033[1;31m"
#define white "\033[0m"

class Form;

class Bureaucrat {
protected:
	const std::string name;
	int grade;
public:
	Bureaucrat(const std::string _name, int _grade);
	Bureaucrat(const Bureaucrat& _copy);
	const Bureaucrat& operator=(const Bureaucrat& _copy);
	~Bureaucrat();

	void	signForm(Form& c);

	const	std::string   getName(void) const;
	void	setName(std::string _n) ;
	int		getGrade(void) const;
	void	setGrade(int _grade);

	void	increment(void);
	void	decrement(void);

	class GradeTooLowException : public std::exception {
		public:
			virtual const char *what() const throw();
	};

	class GradeTooHighException : public std::exception {
		public:
			virtual const char *what() const throw();
	};
};

std::ostream&   operator<<(std::ostream& o, const Bureaucrat& b);
