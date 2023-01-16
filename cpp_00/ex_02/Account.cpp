#include "Account.hpp"


int     Account::_nbAccounts = 0;
int     Account::_totalAmount = 0;
int     Account::_totalNbDeposits = 0;
int     Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts() {return _nbAccounts;}
int Account::getTotalAmount() {return _totalAmount;}
int Account::getNbDeposits() {return _totalNbDeposits;}
int Account::getNbWithdrawals() {return _totalNbWithdrawals;}

int		Account::checkAmount(void) const {return _amount;}

void	Account::_displayTimestamp(void)
{
	time_t	now;

	now = time(NULL);
	std::cout << std::put_time(localtime(&now), "[%Y%m%d_%H%M%S] ");
}

Account::Account(int init_deposit) {
	_displayTimestamp();
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts++;
	this->_totalAmount += init_deposit;
	this->_amount = init_deposit;
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}
Account::~Account() {
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void    Account::makeDeposit(int deposit) {
	this->_totalAmount += deposit;
	this->_totalNbDeposits++;
	this->_nbDeposits++;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit << ";amount:";
	this->_amount += deposit;
	std::cout << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}
bool	Account::makeWithdrawal(int withdraw) {
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	if (this->_amount - withdraw > 0) {
		this->_amount -= withdraw;
		this->_totalAmount -= withdraw;
		this->_totalNbWithdrawals++; this->_nbWithdrawals++;
		std::cout << ";withdrawal:" << withdraw << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return true;
	} else {
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
}
void	Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout	<< " accounts:" << _accountIndex << ";total:" << _amount
				<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals
				<< std::endl;
}
void	Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout	<< " accounts:" << _nbAccounts << ";total:" << _totalAmount
				<< ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals
				<< std::endl;
}
