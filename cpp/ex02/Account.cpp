/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongkseo <dongkseo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 20:12:40 by dongkseo          #+#    #+#             */
/*   Updated: 2023/06/09 23:14:33 by dongkseo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(void)
{
	
}

Account::~Account(void)
{
	
}

void	Account::_displayTimestamp( void ) {
	std::time_t currentTime = std::time(NULL);

	struct tm *t = localtime(&currentTime);

	char	timestring[16];
	std::strftime(timestring, sizeof(timestring), "%Y%m%d_%H%M%S", t);
	std::cout << "[" << timestring << "] " << std::endl;
}

int Account::getNbAccounts( void ) {
	return (_nbAccounts);
}

int	Account::getTotalAmount( void ) {
	return (_totalAmount);
}

int	Account::getNbWithdrawals ( void ) {
	return (_totalNbDeposits);
}

int	Account::getNbDeposits( void ) {
	return (_totalNbDeposits);
}

void Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout	<< " accounts:" << getNbAccounts() \
				<< ";total:";

	
}

Account::Account ( int initial_deposit )  {
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount = _totalAmount + initial_deposit;
	
	_displayTimestamp();
	
	std::cout	<< " index:"  << _accountIndex \
				<< ";amount:" << _amount \
				<< ";created" << std::endl;
}

void Account::displayStatus( void ) const {
	_displayTimestamp();
	
	std::cout;