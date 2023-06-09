/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongkseo <student.42seoul.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 20:12:40 by dongkseo          #+#    #+#             */
/*   Updated: 2023/06/10 02:18:03 by dongkseo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void ) {
	std::time_t currentTime = std::time(NULL);

	struct tm *t = localtime(&currentTime);

	char	timestring[16];
	std::strftime(timestring, sizeof(timestring), "%Y%m%d_%H%M%S", t);
	std::cout << "[" << timestring << "]";
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
				<< ";total:" << getTotalAmount() \
				<< ";deposits:" << getNbDeposits() \
				<< ";withdrawals" << getNbWithdrawals() \
				<< std::endl;	
}

Account::Account ( int initial_deposit )  {
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	
	_displayTimestamp();

	std::cout	<< " index:" << _accountIndex \
				<< ";amount:" << _amount \
				<< ";created" \
				<< std::endl;
}

Account::~Account ( void ) {
	_nbAccounts--;
	_totalAmount -= _amount;
	
	_displayTimestamp();
	
	std::cout	<< " index:" << _accountIndex \
				<< ";amount:" << _amount \
				<< ";closed" \
				<< std::endl;
}

void Account::displayStatus( void ) const {
	_displayTimestamp();
	
	std::cout	<< " index:" << _accountIndex \
				<< ";amount:" << _amount \
				<< ";deposits:" << _nbDeposits \
				<< ";withdrawals" << _nbWithdrawals \
				<< std::endl;
}

void Account::makeDeposit( int deposit )
{
	_displayTimestamp();

	std::cout	<< " index:" << _accountIndex \
				<< ";p_amount:" << _amount \
				<< ";deposit" << deposit;
	
	_nbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
	
	std::cout	<< ";amount:" << _amount \
				<< ";nb_deposits:" << _nbDeposits \
				<< std::endl;
}

int Account::checkAmount( void ) const {
	
	return (_amount);
}

bool Account::makeWithdrawal ( int withdrawal )
{
	_displayTimestamp();
	
	std::cout	<< " index:" << _nbAccounts \
				<< ";p_amount:" << _amount \
				<< ";withdrawal:";
	if (_amount >= withdrawal)
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout 	<< withdrawal \
					<< ";amount:" << _amount \
					<< ";nb_withdrawals:" << _nbWithdrawals \
					<< std::endl;
		return (true);
	}
	else
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
}