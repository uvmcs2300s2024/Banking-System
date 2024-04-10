//
// Created by Nika on 20/02/2024.
//
// This class represents a transaction with attributes type, amount and date.

#ifndef BANKING_SYSTEM_TRANSACTION_H
#define BANKING_SYSTEM_TRANSACTION_H

#include <string>

using std::string;

class Transaction {
private:
    string transactionType;
    double amount;
    string date;

public:
    Transaction(string type, double amnt, string dt);

    string getTransactionDetails() const;
};

#endif //BANKING_SYSTEM_TRANSACTION_H
