#include "AForm.hpp"

AForm::AForm(): mustGrade(0), mustExecute(0) {
	std::cout << green << "AForm constructor" << white << std::endl;
}

AForm::AForm(std::string _name, int _mustGrade, int _mustExecute): isSigned(0), mustGrade(_mustGrade), mustExecute(_mustExecute) {
	this->setmustGrade(_mustGrade);
	this->setmustExecute(_mustExecute);
	this->setName(_name);
	std::cout << green << "AForm constructor" << white << std::endl;
}

AForm::AForm(AForm& c): isSigned(c.getSigned()), mustGrade(c.getmustGrade()), mustExecute(c.getmustExecute()) {
	std::cout << green << "AForm copy constructor" << white << std::endl;
}

AForm::~AForm() {
	std::cout << red << "AForm Deconstructor Called" << white << std::endl;
}

AForm& AForm::operator=(AForm& c) {
	this->setName(c.getName());
	this->setisSigned(c.getSigned());
	this->setmustGrade(c.getmustGrade());
	this->setmustExecute(c.getmustExecute());
	return *this;
}

void	AForm::beSigned(Bureaucrat& c) {
	if (c.getGrade() > this->getmustGrade()) {
		throw GradeTooLowException();
	} else {
		this->setisSigned(1);
		std::cout << this->getName() << ", signed from " << c.getName() << std::endl;
	}
}

void	AForm::execute(const Bureaucrat& executer) const {
	std::cout << this->getName() << ", executed from " << executer.getName();
}

const std::string	AForm::getName() const {return this->name;}
const bool			AForm::getSigned() const {return this->isSigned;}
const int			AForm::getmustGrade() const {return this->mustGrade;}
const int			AForm::getmustExecute() const {return this->mustExecute;}


void	AForm::setName(std::string nameTmp) { const_cast<std::string&>(this->name) = const_cast<std::string&>(nameTmp); }
void	AForm::setisSigned(bool signedTmp) { this->isSigned = signedTmp; }

void	AForm::setmustGrade(const int mustGradeTmp) {
	if (mustGradeTmp > 150) {
		throw GradeTooLowException();
	} else if (mustGradeTmp < 1) {
		throw GradeTooHightException();
	} else {
		const_cast<int&>(this->mustGrade) = const_cast<int&>(mustGradeTmp);
	}
}

void	AForm::setmustExecute(int mustExecuteTmp) {
	if (mustExecuteTmp > 150) {
		throw GradeTooLowException();
	} else if (mustExecuteTmp < 1) {
		throw GradeTooHightException();
	} else {
		const_cast<int&>(this->mustExecute) = const_cast<int&>(mustExecuteTmp);
	}
}

const char *AForm::GradeTooLowException::what() const throw() {
	return "Grade must be bigger than";
}

const char *AForm::GradeTooHightException::what() const throw() {
	return "Grade must be lower than";
}

std::ostream&	operator<<(std::ostream& o, AForm& n) {
	o << "name " << n.getName()
	<< " signed " << n.getSigned()
	<< " Grade " << n.getmustGrade()
	<< " Execute " << n.getmustExecute();
	return o;
}
