//
// Created by Nika on 19/02/2024.
//

#include "Account.h"
#include <string>

Account::Account(std::string number, double bal, std::string type)
    : accNumber(number), balance(bal), accType(type) {}

void Account::deposit(double amount) {
    balance += amount;
}

bool Account::withdraw(double amount) {
    if (balance - amount >= 0) {
        balance -= amount;
        return true;
    }
    return false;  // this will make the withdrawal fail
}

double Account::getBalance() const {
    return balance;
}

std::string Account::getAccType() const {
    return accType;
}

std::string Account::getAccNumber() const {
    return accNumber;
}
