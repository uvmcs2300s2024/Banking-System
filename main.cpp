// user interface for banking system
// User can choose from multiple options what they would
// want to do with their account(s).

#include <iostream>
#include <limits>
#include "Bank.h"

int main() {
    Bank bank;

    while (true) {
        std::cout << " Banking Menu " << std::endl;
        std::cout << "Option 1: Create Account" << std::endl;
        std::cout << "Option 2: Deposit" << std::endl;
        std::cout << "Option 3: Withdraw" << std::endl;
        std::cout << "Option 4: See Account Info" << std::endl;
        std::cout << "Option 5: Exit" << std::endl;

        std::cout << "Enter your choice: ";
        int choice;
        while (!(std::cin >> choice) || choice < 1 || choice > 5) {
            std::cout << "Invalid input. Enter a number between 1 and 5." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        // in case user chooses to exit the banking menu
        if (choice == 5) {
            break;
        }

        switch (choice) {
            // in case user chooses to create an account
            case 1: {
                std::string acctNumber, acctType;
                double initialBalance;
                std::cout << "\nEnter Account Number: ";
                std::cin >> acctNumber;

                std::cout << "Enter Account Type (Savings/Checking): ";
                std::cin >> acctType;
                while (acctType != "Savings" && acctType != "Checking") {
                    std::cout << "Invalid Account Type. Enter Savings or Checking: ";
                    std::cin >> acctType;
                }

                std::cout << "Enter Initial Balance: ";
                while (!(std::cin >> initialBalance) || initialBalance < 0) {
                    std::cout << "Invalid input. Enter a non-negative number: ";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }

                Account newAccount(acctNumber, initialBalance, acctType);
                bank.addAccount(newAccount);
                std::cout <<"\nNew Account was successfully created." << std::endl;
                break;
            }

            // in case user chooses to deposit to an account
            case 2: {
                std::string acctNumber;
                double amount;
                std::cout << "\nEnter Account Number: ";
                std::cin >> acctNumber;

                std::cout << "Enter Deposit Amount: ";
                while (!(std::cin >> amount) || amount < 0) {
                    std::cout << "Invalid input. Enter a nun-negative number: ";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }

                if (bank.processTransaction(acctNumber, "deposit", amount, "today")) {
                    std::cout << "\nDeposit was successful." << std::endl;
                } else {
                    std::cout << "\nFailed to deposit. Account was not found." << std::endl;
                }
                break;
            }

            // in case user chooses to withdraw from an account
            case 3: {
                std::string acctNumber;
                double amount;
                std::cout << "\nEnter Account Number: ";
                std::cin >> acctNumber;
                std::cout << "Enter Withdrawal Amount: ";
                while (!(std::cin >> amount) || amount < 0) {
                    std::cout << "Invalid input. Enter a non-negative number: ";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }

                if (bank.processTransaction(acctNumber, "withdraw", amount, "today")) {
                    std::cout << "\nWithdrawal was successful." << std::endl;
                } else {
                    std::cout << "\nFailed to withdraw. Account was not found or there is insufficient balance." << std::endl;
                }
                break;
            }

            // in case user chooses to see account information
            case 4: {
                std::string acctNumber;
                std::cout << "\nEnter Account Number: ";
                std::cin >> acctNumber;

                bank.displayAcctInfo(acctNumber);
                break;
            }

            default:
                std::cout << "\nInvalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}
