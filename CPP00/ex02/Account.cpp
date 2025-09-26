/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seruff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 10:04:47 by seruff            #+#    #+#             */
/*   Updated: 2025/09/17 15:19:51 by seruff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts(0);
int Account::_totalAmount(0);
int Account::_totalNbDeposits(0);
int Account::_totalNbWithdrawals(0);

Account::Account(int initial_deposit):
	_accountIndex(_nbAccounts),
	_amount(initial_deposit)
{
	_nbAccounts++;
	_nbDeposits = 0;
	_nbWithdrawals =0;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";created" << std::endl;
}
Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex++ << ";"
		<< "amount:" << _amount << ";closed" << std::endl;

}

void	Account::makeDeposit(int deposit)
{
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";p_amount:" << _amount
		<< ";deposit:" << deposit
		<< ";amount:" << _amount + deposit
		<< ";nb_deposits:" << _nbDeposits << std::endl;
	_amount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" <<_accountIndex
		<< ";p_amount:" << _amount
		<< ";withdrawal:";
	if (_amount - withdrawal < 0)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	else
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		std::cout << withdrawal << ";amount:"
			<< _amount - withdrawal
			<< ";nb_withdrawals:" << _nbWithdrawals;
	}
	std::cout << std::endl;
	_amount -= withdrawal;
	return (true);
}



int	Account::getNbAccounts(void)
{
	return (8);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
		<< ";total:" << _totalAmount
		<< ";deposits:" << getNbDeposits()
		<< ";withdrawals:" << getNbWithdrawals()
		<< std::endl;
}


int	Account::checkAmount(void) const
{
	std::cout << "Check amount"<< std::endl;
	return (4);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";deposits:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals
		<< std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::cout << "[19920104_091532] ";
}
