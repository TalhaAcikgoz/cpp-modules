#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string _name, int _grade): name(_name) {
	std::cout << "default constructor called" << std::endl;
	this->setGrade(_grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat& _copy) {
	*this = _copy;
}

const Bureaucrat& Bureaucrat::operator=(const Bureaucrat& _copy) {
		this->setGrade(_copy.getGrade());
		this->setName(_copy.getName());
	return *this;
}

void	Bureaucrat::increment(void) {
	this->setGrade(this->getGrade() - 1);
}
void	Bureaucrat::decrement(void) {
	this->setGrade(this->getGrade() + 1);
}

Bureaucrat::~Bureaucrat() { std::cout << "deconstructor" << std::endl; }

const	std::string Bureaucrat::getName(void) const { return(this->name); }
void	Bureaucrat::setName(std::string _n) { const_cast<std::string&>(this->name) = const_cast<std::string&>(_n); }
int		Bureaucrat::getGrade(void) const { return(this->grade); }
void	Bureaucrat::setGrade(int _grade) {
	if (_grade > 150) {
		this->grade = 0;
		throw GradeTooLowException();
	} else if (_grade < 1) {
		this->grade = 0;
		throw GradeTooHighException();
	} else {
		this->grade = _grade;
	}
}

std::ostream&   operator<<(std::ostream& o, const Bureaucrat& b) {
	o << b.getName() << ", grade level is " << b.getGrade();
	return (o);
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is must lower than";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is must bigger than";
}
