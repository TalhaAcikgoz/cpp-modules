#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat b1("b1", 1);
	Bureaucrat b2("b2", 50);
	Bureaucrat b3("b3", 150);

	std::cout << std::endl;
	try
	{
		Bureaucrat b4("b4", 160);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	try{
		std::cout << "===========ShrubberyCreationForm Success Test===========" << std::endl;
		ShrubberyCreationForm s1("eyup");
		s1.beSigned(b1);
		b1.signForm(s1);
		b1.executeForm(s1);
		std::cout << std::endl;
		std::cout << s1 << std::endl;
		std::cout << std::endl << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try{

		std::cout << "============ShrubberyCreationForm Fail Test============" << std::endl;
		ShrubberyCreationForm s2("furkan");
		s2.beSigned(b3);
		b3.signForm(s2);
		b3.executeForm(s2);
		std::cout << std::endl;
		std::cout << s2 << std::endl;
		std::cout << std::endl << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try{
		std::cout << "============RobotomyRequestForm Success Test============" << std::endl;
		RobotomyRequestForm r1("Robotomy");
		r1.beSigned(b1);
		b1.signForm(r1);
		b1.executeForm(r1);
		std::cout << std::endl;
		std::cout << r1 << std::endl;
		std::cout << std::endl << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try{
		std::cout << "=============RobotomyRequestForm Fail Test=============" << std::endl;
		RobotomyRequestForm r2("Robotomy");
		r2.beSigned(b2);
		b2.signForm(r2);
		b2.executeForm(r2);
		std::cout << std::endl;
		std::cout << r2 << std::endl;
		std::cout << std::endl << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try{
		std::cout << "===========PresidentialPardonForm Success Test===========" << std::endl;
		PresidentialPardonForm p1("Presidential");
		p1.beSigned(b1);
		b1.signForm(p1);
		b1.executeForm(p1);
		std::cout << std::endl;
		std::cout << p1 << std::endl;
		std::cout << std::endl << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	try{
		std::cout << "============PresidentialPardonForm Fail Test============" << std::endl;
		PresidentialPardonForm p2("Presidential");
		p2.beSigned(b2);
		b2.signForm(p2);
		b2.executeForm(p2);
		std::cout << std::endl;
		std::cout << p2 << std::endl;
		std::cout << std::endl << std::endl;
		}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}