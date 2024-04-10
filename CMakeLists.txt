cmake_minimum_required(VERSION 3.26)
project(BANKING_SYSTEM)

set(CMAKE_CXX_STANDARD 17)

add_executable(BANKING_SYSTEM main.cpp
        Account.cpp
        Account.h
        SavingsAccount.cpp
        SavingsAccount.h
        CheckingAccount.cpp
        CheckingAccount.h
        Transaction.cpp
        Transaction.h
        Bank.cpp
        Bank.h)
add_executable(TEST testing.cpp
        Account.cpp
        Account.h
        SavingsAccount.cpp
        SavingsAccount.h
        CheckingAccount.cpp
        CheckingAccount.h
        Transaction.cpp
        Transaction.h
        Bank.cpp
        Bank.h)
