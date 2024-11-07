#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int init_deposit) : _accountIndex(_nbAccounts), _amount(init_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
	this->_nbAccounts++;
	this->_totalAmount += this->_amount;
}

Account::~Account(){}

void Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts <<";";
	std::cout << "total:" << Account::_totalAmount <<";";
	std::cout << "deposit:" << Account::_totalNbDeposits <<";";
	std::cout << "accounts:" << Account::_totalNbWithdrawals <<";" << std::endl;
}

void Account::displayStatus() const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << ";" << std::endl;
}



void Account::_displayTimestamp()
{
	struct tm 	*ts;
	char		buffer[80];
	std::time_t	now;

	now = time(NULL);
	ts = std::localtime(&now);
	std::strftime(buffer,sizeof(buffer),"[%Y%m%d_%H%M%S] ",ts);
	std::cout << buffer;
}
