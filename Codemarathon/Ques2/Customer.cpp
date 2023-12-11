#include "Customer.h"
#include <iostream>

Customer::Customer(std::string name, std::string id, CustomerType custtype, CreditCards creditcard)
    :_name(name), _id(id), _customer_type(custtype), _credit_card(creditcard)
{
}

std::ostream &operator<<(std::ostream &os, const Customer &rhs) {
    os << "_name: " << rhs._name
       << " _id: " << rhs._id
       << " _customer_type: " << DisplayEnum(rhs._customer_type)
       << " _credit_card: " ;
       
       for(CreditCards* cr = rhs.get){
        os << cr <<"\n";
       }
    return os;
}

std::string DisplayEnum(CustomerType value){
    if(value == CustomerType::ELITE)
        return "ELITE";
    if(value == CustomerType::PRIVILEGED)
        return "PRIVILEGED";   
    else{
        return "PRO";
    }     
}

