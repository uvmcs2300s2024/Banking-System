//
// Created by Nika on 19/02/2024.
//

#ifndef BANKING_SYSTEM_SAVINGSACCOUNT_H
#define BANKING_SYSTEM_SAVINGSACCOUNT_H

#include "Account.h"

class SavingsAccount : public Account {
private:
    double interestRate;
    double minBalance;

public:
    SavingsAccount(std::string number, double bal, double rate, double minBal);

    double calculateInterest();
};

#endif //BANKING_SYSTEM_SAVINGSACCOUNT_H
