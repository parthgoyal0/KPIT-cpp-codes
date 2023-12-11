#include<iostream>
#include "CreditCardType.h"
#include "CreditCard.h"

std::ostream &operator<<(std::ostream &os, const CreditCard &rhs) {
    os << "_number: " << rhs._number
       << " _card_type: " << DisplayEnum(rhs._card_type)
       << " _limit: " << rhs._limit
       << " _expiry_year: " << rhs._expiry_year
       << " _card_cvv_number: " << rhs._card_cvv_number;
    return os;
}

std::string DisplayEnum(CreditCardType value)
{
    if(value == CreditCardType::SIGNATURE)
        return "SIGNATURE";
    if(value == CreditCardType::MILES)
        return "MILES";  
    else{
        return "NEO";
    }      
}
