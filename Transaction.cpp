//
// Created by Nika on 20/02/2024.
//

#include "Transaction.h"

Transaction::Transaction(std::string type, double amnt, std::string dt)
    : transactionType(type), amount(amnt), date(dt) {}

std::string Transaction::getTransactionDetails() const {
    return "Type: " + transactionType + ", amount: " + std::to_string(amount) + ", date: " + date;
}
