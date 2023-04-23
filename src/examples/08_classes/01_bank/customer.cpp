//customer.cpp
#include "customer.h"

using std::mak_unique;

Customer::Customer()
{
    accounts.push_back(make_unique<CheckingAccount>())
    accounts.push_back(make_unique<SavingsAccount>())
}