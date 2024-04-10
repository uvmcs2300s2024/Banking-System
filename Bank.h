//
// Created by Nika on 21/02/2024.
//
// This class manages Account and Transaction objects,
// and has methods for adding and removing an account, transactions,
// and displaying account information.

#ifndef BANKING_SYSTEM_BANK_H
#define BANKING_SYSTEM_BANK_H

#include <vector>
#include "Account.h"
#include "Transaction.h"

class Bank {
private:
    std::vector<Account> accounts;
    std::vector<Transaction> transactions;

public:
    void addAccount(const Account& acct);
    void removeAccount(const std::string& acctNumber);
    bool processTransaction(const std::string& acctNumber, const std::string& transactionType, double amount, const std::string& date);
    void displayAcctInfo(const std::string& acctNumber) const;
};

#endif //BANKING_SYSTEM_BANK_H
