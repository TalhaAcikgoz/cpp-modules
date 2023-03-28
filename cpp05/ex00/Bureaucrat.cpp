#include <Bureaucrat.hpp>

Bureaucrat::Bureaucrat(const std::string _name, int _grade): name(_name) {
	if (grade <= 150 || grade >= 1) {
		this->grade = _grade;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& _copy) {}

const Bureaucrat& Bureaucrat::operator=(const Bureaucrat& _copy) {
	this->grade = _copy.getGrade();
	this->name = _copy.getName();
}

Bureaucrat::~Bureaucrat() {}

const std::string Bureaucrat::getName(void) const {return(this->name);}
int Bureaucrat::getGrade(void) const {return(this->grade);}

std::ostream&   operator<<(std::ostream& o, const Bureaucrat& b) {
	o << b.getName() << ", grade level is " << b.getGrade();
	return (o);
}