//
// Created by Nika on 19/02/2024.
//

#ifndef BANKING_SYSTEM_CHECKINGACCOUNT_H
#define BANKING_SYSTEM_CHECKINGACCOUNT_H

#include "Account.h"

class CheckingAccount : public Account {
private:
    double overdraftLimit;

public:
    CheckingAccount(std::string number, double bal, double limit);
    bool checkOverdraft(double amount);
};

#endif //BANKING_SYSTEM_CHECKINGACCOUNT_H
