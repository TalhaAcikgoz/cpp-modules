#include "PhoneBook.hpp"

extern phonebook book;

int take_input() {
	int input;
	std::cin.clear();
	std::cin >> input;
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << " Wrong input. " << std::endl;
		return (-1);
	}
	return (input);
}

std::string	take_string() {
b:
	std::string input;
	std::cin.clear();
	fflush(stdin);
	std::getline(std::cin, input);
	if (std::cin.fail()) {
		std::cout << std::endl;
		std::cout << " Input fail " << std::endl;
		goto b;
	}
	return (input);
}

int console_log(){
	std::cout	<< "+------------------------------------------------------+" << std::endl
				<< "|   Name   | Lastname | Nickname | P Number |  Secret  |" << std::endl
				<< "+------------------------------------------------------+" << std::endl;
	return 0;
}

int print_short_cnt(int i) {
	if(i < 8)
	{
		if (book.cnt[i].get_name().length() > 10)		{std::cout << '|' << std::right << std::setw(9) << book.cnt[i].get_name().substr(0, 9) << '.';}
		else											{std::cout << '|' << std::right << std::setw(10) << book.cnt[i].get_name();}
		if (book.cnt[i].get_lastname().length() > 10)	{std::cout << '|' << std::right << std::setw(9) << book.cnt[i].get_lastname().substr(0, 9) << '.';}
		else											{std::cout << '|' << std::right << std::setw(10) << book.cnt[i].get_lastname();}
		if (book.cnt[i].get_nickname().length() > 10)	{std::cout << '|' << std::right << std::setw(9) << book.cnt[i].get_nickname().substr(0, 9) << '.';}
		else											{std::cout << '|' << std::right << std::setw(10) << book.cnt[i].get_nickname();}
		if (book.cnt[i].get_pnumber().length() > 10)	{std::cout << '|' << std::right << std::setw(9) << book.cnt[i].get_pnumber().substr(0, 9) << '.';}
		else											{std::cout << '|' << std::right << std::setw(10) << book.cnt[i].get_pnumber();}
		if (book.cnt[i].get_secret().length() > 10)		{std::cout << '|' << std::right << std::setw(9) << book.cnt[i].get_secret().substr(0, 9) << '.';}
		else											{std::cout << '|' << std::right << std::setw(10) << book.cnt[i].get_secret();}
		std::cout << '|' << ' ' << i << std::endl<< "+------------------------------------------------------+" << std::endl;
	}
	return 1;
}

int print_long_cnt(int i) {
	if (book.cnt[i].get_name().length()) {
		std::cout	<< "Name: "			<< book.cnt[i].get_name() << std::endl
					<< "Lastname: "		<< book.cnt[i].get_lastname() << std::endl
					<< "Nickname: "		<< book.cnt[i].get_nickname() << std::endl
					<< "Phone Number: "	<< book.cnt[i].get_pnumber() << std::endl
					<< "Secred: "		<< book.cnt[i].get_secret() << std::endl;
	} else {
		std::cout << " Apsent contact. " << std::endl;
	}
	return 0;
}

int phonebook::search() {
	console_log();
	for (int i=0; book.cnt[i].get_name().length(); i++) {
		print_short_cnt(i);
	}
	std::cout << " + [ YOU WANNA SEE MORE THING?, GIMME NUMBER ] + " << std::endl;
	print_long_cnt(take_input());
	return (1);
}

int	phonebook::add() {
a:
	try {
		std::cout << std::endl;
		std::cout << "Name: "		 ; 
		if (!this->cnt[idx % 8].set_name(take_string())) {goto a;}
		std::cout << "Lastname: "	 ; this->cnt[idx % 8].set_lastname(take_string());
		std::cout << "Nickname: "	 ; this->cnt[idx % 8].set_nickname(take_string());
		std::cout << "Phone Number: "; this->cnt[idx % 8].set_pnumber(take_string());
		std::cout << "Secred: "		 ; this->cnt[idx % 8].set_secret(take_string());
		this->idx += 1;

	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}

std::string contact::get_name() {return (this->name);}
std::string contact::get_lastname() {return (this->lastname);}
std::string contact::get_nickname() {return (this->nickname);}
std::string contact::get_pnumber() {return (this->pnumber);}
std::string contact::get_secret() {return (this->secret);}

int contact::set_name(std::string _name) {
	if (_name.empty()){
		std::cout << " Input is cant be empty. "; return (0);}
	this->name = _name;
	return (1);
}
void	contact::set_lastname(std::string _lastname) {this->lastname = _lastname;}
void	contact::set_nickname(std::string _nickname) {this->nickname = _nickname;}
void	contact::set_pnumber(std::string _pnumber) {this->pnumber = _pnumber;}
void	contact::set_secret(std::string _secret) {this->secret = _secret;}