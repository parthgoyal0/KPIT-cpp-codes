#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "CreditCard.h"
#include <iostream>
#include "CustomerType.h"
#include <vector>

using CreditCards = std::vector<CreditCard*>;

class Customer{
    std::string _name;
    std::string _id;
    CustomerType _customer_type;
    CreditCards _credit_card;
public:
    Customer() = default; // defaulted default constructor
    Customer(const Customer&) = default; // copy constructor enabled
    Customer(Customer&&) = delete; //move copy constructor disabled
    Customer& operator=(Customer&) = default; //assignment operator enabled
    Customer& operator=(Customer&&) = delete; //move assignment disabled
    ~Customer() = default;

    Customer(std::string name, std::string _id, CustomerType custtype, CreditCards creditcard);

    std::string name() const { return _name; }
    std::string id() const { return _id; }
    CustomerType customerType() const { return _customer_type; }
    CreditCards creditCard() const { return _credit_card; }

    friend std::ostream &operator<<(std::ostream &os, const Customer &rhs);

};

std::string DisplayEnum(CustomerType value);

#endif // CUSTOMER_H
