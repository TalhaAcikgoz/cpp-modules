#include "Form.hpp"

Form::Form(): mustGrade(0), mustExecute(0) {
	std::cout << green << "Form constructor" << white << std::endl;
}

Form::Form(std::string _name, int _mustGrade, int _mustExecute): isSigned(0), mustGrade(_mustGrade), mustExecute(_mustExecute) {
	this->setmustGrade(_mustGrade);
	this->setmustExecute(_mustExecute);
	this->setName(_name);
	std::cout << green << "Form constructor" << white << std::endl;
}

Form::Form(Form& c): isSigned(c.getSigned()), mustGrade(c.getmustGrade()), mustExecute(c.getmustExecute()) {
	std::cout << green << "Form copy constructor" << white << std::endl;
}

Form::~Form() {
	std::cout << red << "Form Deconstructor Called" << white << std::endl;
}

Form& Form::operator=(Form& c) {
	this->setName(c.getName());
	this->setisSigned(c.getSigned());
	this->setmustGrade(c.getmustGrade());
	this->setmustExecute(c.getmustExecute());
	return *this;
}

void	Form::beSigned(Bureaucrat& c) {
	if (c.getGrade() > this->getmustGrade()) {
		throw GradeTooLowException();
	} else {
		this->setisSigned(1);
		std::cout << this->getName() << ", signed from " << c.getName() << std::endl;
	}
}

void	Form::execute(const Bureaucrat& executer) const {
	std::cout << this->getName() << ", executed from " << executer.getName();
}

const std::string	Form::getName() const {return this->name;}
const bool			Form::getSigned() const {return this->isSigned;}
const int			Form::getmustGrade() const {return this->mustGrade;}
const int			Form::getmustExecute() const {return this->mustExecute;}


void	Form::setName(std::string nameTmp) { const_cast<std::string&>(this->name) = const_cast<std::string&>(nameTmp); }
void	Form::setisSigned(bool signedTmp) { this->isSigned = signedTmp; }

void	Form::setmustGrade(const int mustGradeTmp) {
	if (mustGradeTmp > 150) {
		throw GradeTooLowException();
	} else if (mustGradeTmp < 1) {
		throw GradeTooHightException();
	} else {
		const_cast<int&>(this->mustGrade) = const_cast<int&>(mustGradeTmp);
	}
}

void	Form::setmustExecute(int mustExecuteTmp) {
	if (mustExecuteTmp > 150) {
		throw GradeTooLowException();
	} else if (mustExecuteTmp < 1) {
		throw GradeTooHightException();
	} else {
		const_cast<int&>(this->mustExecute) = const_cast<int&>(mustExecuteTmp);
	}
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Grade must be bigger than";
}

const char *Form::GradeTooHightException::what() const throw() {
	return "Grade must be lower than";
}

std::ostream&	operator<<(std::ostream& o, Form& n) {
	o << "name " << n.getName()
	<< " signed " << n.getSigned()
	<< " Grade " << n.getmustGrade()
	<< " Execute " << n.getmustExecute();
	return o;
}
