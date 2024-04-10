//
// Created by Nika on 24/02/2024.
//
#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "Transaction.h"
#include "Bank.h"

int main() {
    // creating accounts
    SavingsAccount savings("S1", 1000.0, 0.5, 500.0);
    CheckingAccount checking("C2", 1500.0, 800.0);

    // testing deposit and withdrawal
    savings.deposit(300.0);
    checking.withdraw(200.0);

    // testing calculateInterest
    std::cout << "Interest on Savings Account: " << savings.calculateInterest() << std::endl;

    // testing checkOverdraft
    if (checking.checkOverdraft(2800.0)) {
        std::cout << "Checking Account can cover the overdraft." << std::endl;
    } else {
        std::cout << "Checking Account cannot cover the overdraft." << std::endl;
    }

    // testing Transaction
    Transaction transaction("deposit", 200.0, "today");
    std::cout << "Transaction Details: " << transaction.getTransactionDetails() << std::endl;

    // testing Bank
    Bank bank;
    bank.addAccount(savings);
    bank.addAccount(checking);
    bank.processTransaction("S1", "withdraw", 50.0, "today");
    bank.processTransaction("C2", "deposit", 200.0, "today");

    bank.displayAcctInfo("S1");
    bank.displayAcctInfo("C2");

    return 0;
}