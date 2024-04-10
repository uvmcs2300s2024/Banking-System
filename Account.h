//
// Created by Nika on 19/02/2024.
//

#ifndef BANKING_SYSTEM_ACCOUNT_H
#define BANKING_SYSTEM_ACCOUNT_H

#include <string>

class Account {
protected:
    std::string accNumber;
    double balance;
    std::string accType;

public:
    Account(std::string number, double bal, std::string type);

    void deposit(double amount);
    bool withdraw(double amount);
    double getBalance() const;
    std::string getAccType() const;
    std::string getAccNumber() const;
};

#endif //BANKING_SYSTEM_ACCOUNT_H
