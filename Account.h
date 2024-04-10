//
// Created by Nika on 19/02/2024.
//

#ifndef M2OEP_ACCOUNT_H
#define M2OEP_ACCOUNT_H

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

#endif //M2OEP_ACCOUNT_H
