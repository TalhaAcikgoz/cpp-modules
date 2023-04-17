#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target): target(_target) {
    this->setisSigned(false);
    this->setmustGrade(145);
    this->setmustExecute(137);
    this->setName("ShrubberyCreationForm");
    std::cout << green << "ShrubberyCreation constructor called" << white << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& c) {
    *this = c;
    std::cout << green << "ShrubberyCreation copy constructor called" << white << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << red << "ShrubberyCreation deconstructor called" << white << std::endl;
}

ShrubberyCreationForm&  ShrubberyCreationForm::operator=(const ShrubberyCreationForm& c) {
    this->setisSigned(c.getSigned());
	this->setmustExecute(c.getmustExecute());
	this->setmustGrade(c.getmustGrade());
	this->setName(c.getName());
	return *this;
}

void    ShrubberyCreationForm::execute(const Bureaucrat& executer) const {
	if (executer.getGrade() > this->getmustGrade() || executer.getGrade() > this->getmustExecute())
		throw GradeTooLowException();
	else if (this->getSigned() == false)
		std::cout << "Form not signed" << std::endl;
	else {
        std::string ascii_trees =       "\n" 
									"         O                     O\n"
									"        $$$                   $$$\n"
									"       $$$$$                 $$$$$\n"
									"      $$$$$$$               $$$$$$$\n"
									"     $$$$$$$$$             $$$$$$$$$\n"
									"    $$$$$$$$$$$           $$$$$$$$$$$\n"
									"   $$$$$$$$$$$$$         $$$$$$$$$$$$$\n"
									"  $$$$$$$$$$$$$$$       $$$$$$$$$$$$$$$\n"
									" $$$$$$$$$$$$$$$$$     $$$$$$$$$$$$$$$$$\n"
									"$$$$$$$$$$$$$$$$$$$   $$$$$$$$$$$$$$$$$$$\n"
									"        |||                   |||\n"
									"        |||                   |||\n"
									"        |||                   |||\n"
									"        |||                   |||";
        std::string filename(this->target+"_shrubbery");
        std::ofstream   a(filename, std::ofstream::trunc | std::ofstream::out);
        a << ascii_trees << std::endl;
        a.close();
	}
}