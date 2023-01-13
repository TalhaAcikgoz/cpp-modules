#include "Account.hpp"


int     Account::_nbAccounts = 0;
int     Account::_totalAmount = 0;
int     Account::_totalNbDeposits = 0;
int     Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts() {return _nbAccounts;}
int Account::getTotalAmount() {return _totalAmount;}
int Account::getNbDeposits() {return _totalNbDeposits;}
int Account::getNbWithdrawals() {return _totalNbWithdrawals;}

int		Account::checkAmount( void ) const {
	return _amount;
}

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



#include <vector>

int		main( void ) {

	typedef std::vector<Account::t>							  accounts_t;
	typedef std::vector<int>								  ints_t;
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t;

	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) );
	accounts_t				accounts( amounts, amounts + amounts_size );
	accounts_t::iterator	acc_begin	= accounts.begin();
	accounts_t::iterator	acc_end		= accounts.end();

	int	const			d[]			= { 5, 765, 564, 2, 87, 23, 9, 20 };
	size_t const		d_size( sizeof(d) / sizeof(int) );
	ints_t				deposits( d, d + d_size );
	ints_t::iterator	dep_begin	= deposits.begin();
	ints_t::iterator	dep_end		= deposits.end();

	int	const			w[]			= { 321, 34, 657, 4, 76, 275, 657, 7654 };
	size_t const		w_size( sizeof(w) / sizeof(int) );
	ints_t				withdrawals( w, w + w_size );
	ints_t::iterator	wit_begin	= withdrawals.begin();
	ints_t::iterator	wit_end		= withdrawals.end();


	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	for ( acc_int_t it( acc_begin, dep_begin );
		  it.first != acc_end && it.second != dep_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeDeposit( *(it.second) );
	}

	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	for ( acc_int_t it( acc_begin, wit_begin );
		  it.first != acc_end && it.second != wit_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeWithdrawal( *(it.second) );
	}

	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	return 0;
}