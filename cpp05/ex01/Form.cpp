#include "Form.hpp"

Form::Form(std::string _name, int _mustGrade, int _whoSigned): isSigned(0), mustGrade(_mustGrade), whoSigned(_whoSigned) {
}

Form::Form(Form& c): isSigned(c.getSigned()), mustGrade(c.getMustGrade()), whoSigned(c.getWhoSigned()) {
}

Form::~Form() {
	std::cout << "Form Deconstructor Called" << std::endl;
}

Form& Form::operator=(Form& c) {
	this->setName(c.getName());
	this->setisSigned(c.getSigned());
	this->setMustGrade(c.getMustGrade());
	this->setWhoSigned(c.getWhoSigned());
}

const std::string	Form::getName() const {return this->name;}
const bool			Form::getSigned() const {return this->isSigned;}
const int			Form::getMustGrade() const {return this->mustGrade;}
const int			Form::getWhoSigned() const {return this->whoSigned;}


void	Form::setName(std::string nameTmp) { const_cast<std::string&>(this->name) = const_cast<std::string&>(nameTmp); }
void	Form::setisSigned(bool signedTmp) { this->isSigned = signedTmp; }
void	Form::setMustGrade(const int mustGradeTmp) { const_cast<int&>(this->mustGrade) = const_cast<int&>(mustGradeTmp); }
void	Form::setWhoGrade(int whoSignedTmp) { this->whoSigned = whoSignedTmp; }

const char *Form::GradeTooLowException::what() const throw() {
	return "Grade must bigger than 150 or equal to 150";
}

const char *Form::GradeTooHightException::what() const throw() {
	return "Grade must lower than 1 or equal to 1";
}

std::ostream& Form::operator<<(std::ostream& o, Form& n) {
	o << "name " << n.getName()
	<< "signed " << n.getSigned()
	<< "Grade " << n.getMustGrade()
	<< "Execute " << n.getWhoSigned() << std::endl;
	return o;
}
