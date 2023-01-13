#include "PhoneBook.hpp"

phonebook book;
int main(void) {
	std::string input;
	while (true) {
a:
		std::cout << std::endl	
		<< "+-------------------------------------------------------+" << std::endl
		<< "|   1 : Add  |  2 : Search  |  3 : Exit  |  Maybe More  |" << std::endl
		<< "+-------------------------------------------------------+" << std::endl;
		switch (take_input())
		{
		case -1:
			goto a;
		case 1:
			book.add();
			goto a;
		case 2:
			book.search();
			break;
		case 3:
			exit(3);
		case 31:
			std::cout << "RICKROLLED";
			goto a;
		default:
			goto a;
			break;
		}
	}
	return (0);
}
