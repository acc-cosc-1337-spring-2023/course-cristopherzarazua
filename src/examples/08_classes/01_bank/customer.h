//customer.h
#include "bank_account.h"
#include "checking_account.h"
#include<memory>
#include<vector>

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer
{
public:
    Customer();
    
private:
    std::vector<std::unique_ptr<BankAccount>> accounts;

};

#endif