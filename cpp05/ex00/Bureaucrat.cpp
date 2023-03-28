#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string _name, int _grade): name(_name) {
	if (grade <= 150 || grade >= 1) {
		this->grade = _grade;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& _copy) {
	*this = _copy;
}

const Bureaucrat& Bureaucrat::operator=(const Bureaucrat& _copy) {
	Bureaucrat n(_copy.getName(), _copy.getGrade());
	*this = n;
	return *this;
}

Bureaucrat::~Bureaucrat() {}

const std::string Bureaucrat::getName(void) const {return(this->name);}
void	Bureaucrat::setName(const std::string _n){}
int Bureaucrat::getGrade(void) const {return(this->grade);}

std::ostream&   operator<<(std::ostream& o, const Bureaucrat& b) {
	o << b.getName() << ", grade level is " << b.getGrade();
	return (o);
}