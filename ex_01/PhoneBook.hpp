#ifndef PHONEBOOK_CPP
#define PHONEBOOK_CPP

#include <string>
#include <iostream>
#include <fstream>

//CLASS

class contact {
public:
	//name
	std::string get_name();
	int 		set_name(std::string);
	//surname
	void		set_lastname(std::string);
	std::string get_lastname();
	//nickname
	std::string get_nickname();
	void		set_nickname(std::string);
	//p_number
	std::string get_pnumber();
	void		set_pnumber(std::string);
	//secret
	std::string get_secret();
	void		set_secret(std::string);
private:
	std::string	name;
	std::string lastname;
	std::string nickname;
	std::string pnumber;
	std::string secret;
};

class phonebook {
public:
	int		add();
	int		search();

	contact	cnt[8];
	int		idx;
};

// FUNCTION

int take_input();

#endif