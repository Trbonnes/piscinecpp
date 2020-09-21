/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:21:22 by trbonnes          #+#    #+#             */
/*   Updated: 2020/02/25 11:32:10 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <ctime>
#include "Account.class.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int     Account::getNbAccounts(){
    return Account::_nbAccounts;
}

int     Account::getTotalAmount(){
    return Account::_totalAmount;
}

int     Account::getNbDeposits(){
    return Account::_totalNbDeposits;
}

int     Account::getNbWithdrawals()
{
    return Account::_totalNbWithdrawals;
}

void    Account::displayAccountsInfos(){
    Account::_displayTimestamp();
    std::cout << " ";
    std::cout << "accounts:" << Account::_nbAccounts << ";";
    std::cout << "total:" << Account::_totalAmount << ";";
    std::cout << "deposits:" << Account::_totalNbDeposits << ";";
    std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void    Account::makeDeposit(int deposit){
    int     p_amount;

    Account::_totalNbDeposits++;
    Account::_totalAmount += deposit;
    p_amount = _amount;
    _amount += deposit;
    _nbDeposits++;

    Account::_displayTimestamp();
    std::cout << " index:" << _accountIndex << ";";
    std::cout << "p_amount:" << p_amount << ";";
    std::cout << "deposit:" << deposit << ";";
    std::cout << "amout:" << _amount << ";";
    std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal){
    int     p_amount;

    p_amount = _amount;
    if (_amount < withdrawal){
        Account::_displayTimestamp();
        std::cout << " index:" << _accountIndex << ";";
        std::cout << "p_amount:" << p_amount << ";";
        std::cout << "withdrawal:refused" << std::endl;
        return false;
    }
    Account::_totalNbWithdrawals++;
    Account::_totalAmount -= withdrawal;
    _amount -=withdrawal;
    _nbWithdrawals++;

    Account::_displayTimestamp();
    std::cout << " index:" << _accountIndex << ";";
    std::cout << "p_amount:" << p_amount << ";";
    std::cout << "withdrawal:" << withdrawal << ";";
    std::cout << "amout:" << _amount << ";";
    std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
}

int     Account::checkAmount() const{
    Account *as_mutable = const_cast<Account *>(this);
    as_mutable->_checkAmountCalledCount++;
    return _amount;
}

void    Account::displayStatus() const{
    Account::_displayTimestamp();
    std::cout << " index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void    Account::_displayTimestamp(){
    time_t      timer;
    struct tm   *t;

    time(&timer);
    t = localtime(&timer);
    std::cout << "[";
    std::cout << t->tm_year + 1900 << t->tm_mon + 1 << t->tm_mday;
    std::cout << "_";
    std::cout << t->tm_hour << t->tm_min << t->tm_sec;
    std::cout << "]";
}

Account::Account(){
    Account::_nbAccounts++;
    Account::_totalAmount += 0;

    _accountIndex = _nbAccounts - 1;
    _amount = 0;
    _nbDeposits = 0;
    _nbWithdrawals = 0;

    Account::_displayTimestamp();
    std::cout << " index:" << _accountIndex << ";";
    std::cout << "amout:" << _amount << ";created" << std::endl; 
}

Account::Account(int initial_deposit){
    Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;

    _accountIndex = _nbAccounts - 1;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;

    Account::_displayTimestamp();
    std::cout << " index:" << _accountIndex << ";";
    std::cout << "amout:" << _amount << ";created" << std::endl; 
}

Account::~Account(){
    Account::_nbAccounts--;
    Account::_totalAmount -= _amount;

    Account::_displayTimestamp();
    std::cout << " index:" << _accountIndex << ";";
    std::cout << "amout:" << _amount << ";closed" << std::endl; 
}
