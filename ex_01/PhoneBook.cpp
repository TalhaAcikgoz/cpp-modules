#include "PhoneBook.hpp"

std::string contact::get_name() {return (this->name);}
std::string contact::get_lastname() {return (this->lastname);}
std::string contact::get_nickname() {return (this->nickname);}
std::string contact::get_pnumber() {return (this->pnumber);}
std::string contact::get_secret() {return (this->secret);}

void	contact::set_name(std::string _name) {this->name = _name;}
void	contact::set_lastname(std::string _lastname) {this->lastname = _lastname;}
void	contact::set_nickname(std::string _nickname) {this->nickname = _nickname;}
void	contact::set_pnumber(std::string _pnumber) {this->pnumber = _pnumber;}
void	contact::set_secret(std::string _secret) {this->secret = _secret;}