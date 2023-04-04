#pragma once

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Form {
private:
	const std::string	name;
	bool        		isSigned;
	const int   		mustGrade;
	const int			whoSigned;
public:
	Form(std::string _name, int _mustGrade, int _whoSigned);
	Form(Form& c);
	~Form();

	Form& operator=(Form& c);

	const std::string	getName() const;
	const bool       	getSigned() const;
	const int			getMustGrade() const;
	const int			getWhoSigned() const;

	void setName(std::string nameTmp);
	void setisSigned(bool signedTmp);
	void setMustGrade(const int mustGradeTmp);
	void setWhoGrade(const int whoSignedTmp);

	class GradeTooLowException : public std::exception {
		public:
			virtual const char *what() const throw();
	};
	class GradeTooHightException : public std::exception {
		public:
			virtual const char *what() const throw();
	};
};

std::ostream& operator<<(std::ostream& o, Form& n);
