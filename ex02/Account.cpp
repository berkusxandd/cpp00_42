/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bince < bince@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:46:16 by bince             #+#    #+#             */
/*   Updated: 2024/11/11 18:09:47 by bince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

Account::~Account()
{
	Account::_nbAccounts--;
	Account::_totalAmount -= this->_amount;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	return ;
}

void Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts <<";";
	std::cout << "total:" << Account::_totalAmount <<";";
	std::cout << "deposit:" << Account::_totalNbDeposits <<";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals <<";" << std::endl;
}

void Account::displayStatus() const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << ";" << std::endl;
}
void Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	this->_nbDeposits += 1;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount - deposit << ";deposit:"
		<< deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	if (withdrawal > this->_amount)
	{
		std::cout << "index:" << this->_accountIndex  << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
		return false;
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals += 1;
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount + withdrawal << ";withdrawal:"
		<< withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return true;
}

int	Account::checkAmount( void ) const
{
	return this->_amount;
}

int Account::getNbAccounts()
{
	return (Account::_nbAccounts);
}
int Account::getNbDeposits()
{
	return (Account::_totalNbDeposits);
}

int Account::getTotalAmount()
{
	return (Account::_totalAmount);
}

int Account::getNbWithdrawals()
{
	return (Account::_totalNbWithdrawals);
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
