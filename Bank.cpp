//
// Created by Nika on 21/02/2024.
//

#include "Bank.h"
#include <iostream>

void Bank::addAccount(const Account &acct) {
    accounts.push_back(acct);
}

void Bank::removeAccount(const std::string &acctNumber) {
    for (auto it = accounts.begin(); it != accounts.end(); ++it) {
        if (it -> getAccType() == acctNumber) {
            accounts.erase(it);
            break;
        }
    }
}

bool Bank::processTransaction(const std::string &acctNumber, const std::string &transactionType, double amount,
                              const std::string &date) {
    for (auto& acct : accounts) {
        if (acct.getAccNumber() == acctNumber) {
            if (transactionType == "deposit") {
                acct.deposit(amount);
                transactions.push_back(Transaction(transactionType, amount, date));
                return true;
            } else if (transactionType == "withdraw") {
                if (acct.withdraw(amount)) {
                    transactions.push_back(Transaction(transactionType, amount, date));
                    return true;
                }
            }
        }
    }
    return false;
}

void Bank::displayAcctInfo(const std::string &acctNumber) const {
    for (const auto& acct : accounts) {
        if (acct.getAccNumber() == acctNumber) {
            std::cout << "Account number: " << acct.getAccNumber() << std::endl;
            std::cout << "Account type: " << acct.getAccType() << std::endl;
            std::cout << "Balance: " << acct.getBalance() << std::endl;
            return;
        }
    }
    std:: cout << "Sorry, account was not found." << std::endl;
}