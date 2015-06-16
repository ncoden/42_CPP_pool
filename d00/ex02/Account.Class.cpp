/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.Class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/15 18:45:05 by mdarriga          #+#    #+#             */
/*   Updated: 2015/06/16 16:46:42 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.class.hpp"

int			Account::_nbAccounts = 0;
int			Account::_totalAmount = 0;
int			Account::_totalNbDeposits = 0;
int			Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";created" << std::endl;

	_nbAccounts++;
	_totalAmount += initial_deposit;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";closed" << std::endl;
}

void		Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
			<< ";total:" << _totalAmount
			<< ";deposits:" << _totalNbDeposits
			<< ";withdrawals:" << _totalNbWithdrawals
			<< std::endl;
}

void		Account::_displayTimestamp(void)
{
	static time_t		t;
	static struct tm	*now;

	if (!now)
	{
		t = time(0);
		now = localtime(&t);
	}

	std::cout << '['
			<< now->tm_year + 1900
			<< std::setw(2) << std::setfill('0') << now->tm_mon
			<< std::setw(2) << std::setfill('0') << now->tm_mday
			<< '_'
			<< std::setw(2) << std::setfill('0') << now->tm_hour
			<< std::setw(2) << std::setfill('0') << now->tm_min
			<< std::setw(2) << std::setfill('0') << now->tm_sec
			<< "] ";
}

void		Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";deposits:" << _nbDeposits
			<< ";withdrawals:" << _nbWithdrawals
			<< std::endl;
}

void		Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";p_amount:" << _amount
			<< ";deposit:" << deposit;

	_amount += deposit;
	_nbDeposits++;

	std::cout << ";amount:" << _amount
			<< ";nb_deposits:" << _nbDeposits
			<< std::endl;
}

bool		Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";p_amount:" << _amount
			<< ";withdrawal:";

	if (_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}

	_amount -= withdrawal;
	_nbWithdrawals++;

	std::cout << withdrawal
			<< ";amount:" << _amount
			<< ";nb_withdrawals:" << _nbWithdrawals
			<< std::endl;
	return (true);
}


