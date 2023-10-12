#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string _name, int _grade): name(_name) {
	std::cout << green << "Bureaucrat constructor called" << white << std::endl;
	try {
		this->setGrade(_grade);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& _copy) {
	*this = _copy;
	std::cout << green << "Bureaucrat constructor called" << white << std::endl;
}

const Bureaucrat& Bureaucrat::operator=(const Bureaucrat& _copy) {
	try {
		this->setGrade(_copy.getGrade());
		this->setName(_copy.getName());
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return *this;
}

void	Bureaucrat::increment(void) {
	try {
		this->setGrade(this->getGrade() - 1);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}
void	Bureaucrat::decrement(void) {
	try {
		this->setGrade(this->getGrade() + 1);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat() { std::cout << red << "Bureaucrat deconstructor" << white << std::endl;}

void	Bureaucrat::signForm(Form& c) const {
	try {
		if (c.getmustGrade() < this->getGrade()) {
			std::cout << this->getName() << " couldn't sign " << c.getName() << " because " << std::endl;
			throw GradeTooLowException();
		} else {
			c.setisSigned(1);
			std::cout << this->getName() << " signed " << c.getName() << std::endl;
		}
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(const Form& form) {
	form.execute(*this);
	// std::cout << form.getName() << "executed from " << this->getName() << std::endl;
}

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
	return "Grade is must be lower than";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is must be bigger than";
}
