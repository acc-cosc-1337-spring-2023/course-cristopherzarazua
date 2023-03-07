//checking_account.h
#include<iostream>
#include "bank_account.h"

#ifndef CHECKING_ACCOUNT_H
#define  CHECKING_ACCOUNT_H

class CheckingAccount: public BankAccount//inherit from BankAccount
{
public:
    CheckingAccount(){BankAccount:};
    CheckingAccount(int b): BankAccount(b){}
};

#endif