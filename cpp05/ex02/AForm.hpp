#pragma once

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
private:
	const std::string	name;
	bool        		isSigned;
	const int   		mustGrade;
	const int			mustExecute;
public:
	AForm();
	AForm(std::string _name, int _mustGrade, int _mustExecute);
	AForm(AForm& c);
	virtual ~AForm() = 0;

	AForm& operator=(AForm& c);

	void	beSigned(const Bureaucrat& c);
	virtual void	execute(const Bureaucrat& executer);

	const std::string	getName() const;
	const bool       	getSigned() const;
	const int			getmustGrade() const;
	const int			getmustExecute() const;

	void setName(std::string nameTmp);
	void setisSigned(bool signedTmp);
	void setmustGrade(const int mustGradeTmp);
	void setmustExecute(const int mustExecuteTmp);

	class GradeTooLowException : public std::exception {
		public:
			virtual const char *what() const throw();
	};
	class GradeTooHightException : public std::exception {
		public:
			virtual const char *what() const throw();
	};
};

std::ostream& operator<<(std::ostream& o, AForm& n);
