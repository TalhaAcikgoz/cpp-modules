#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string _name, int _grade): name(_name) {
	this->setGrade(_grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat& _copy) {
	*this = _copy;
}

const Bureaucrat& Bureaucrat::operator=(const Bureaucrat& _copy) {
	Bureaucrat n(_copy.getName(), _copy.getGrade());
	*this = n;
	return *this;
}

Bureaucrat::~Bureaucrat() {std::cout << "deconstructor" << std::endl;}

const	std::string Bureaucrat::getName(void) const {return(this->name);}
void	Bureaucrat::setName(const std::string& _n) {this->name = _n;}
int		Bureaucrat::getGrade(void) const {return(this->grade);}
void	Bureaucrat::setGrade(int _grade) {
	if (_grade > 150) {
		throw GradeTooLowException();
	} else if (_grade < 1) {
		throw GradeTooHightException();
	} else {
		this->grade = _grade;
	}
}

std::ostream&   operator<<(std::ostream& o, const Bureaucrat& b) {
	o << b.getName() << ", grade level is " << b.getGrade();
	return (o);
}

const char *Bureaucrat::GradeTooHightException::what() const throw() {
	return "Grade is must bigger than 1";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is must lower than 150";
}