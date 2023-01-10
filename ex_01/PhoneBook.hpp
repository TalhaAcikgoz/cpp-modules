#ifndef PHONEBOOK_CPP
#define PHONEBOOK_CPP

#include <string>
#include <iostream>

class contact {
public:
	//name
	std::string get_name();
	void		set_name(std::string);
	//surname
	std::string get_lastname();
	void		set_lastname(std::string);
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
	contact	cnt[8];
	int		idx;
};

#endif