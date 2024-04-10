//
// Created by Nika on 19/02/2024.
//
// SavingsAccount class inherits from the Account class
// and adds attributes and methods.
// Constructor initializes additional attributes.
// calculateInterest method calculates interest based on
// current balance and interest rate.

#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(std::string number, double bal, double rate, double minBal)
    : Account(number, bal, "Savings"), interestRate(rate), minBalance(minBal) {}

double SavingsAccount::calculateInterest() {
    return balance * interestRate / 100;
}