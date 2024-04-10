//
// Created by Nika on 19/02/2024.
//
// CheckingAccount class inherits from Account class
// and adds attribute and method.
// Constructor initializes overdraftLimit.
// checkOverdraft method checks if withdrawing is possible
// without exceeding overdraft limit.

#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(std::string number, double bal, double limit)
    : Account(number, bal, "Chacking"), overdraftLimit(limit) {}

bool CheckingAccount::checkOverdraft(double amount) {
    return balance - amount >= -overdraftLimit;
}
