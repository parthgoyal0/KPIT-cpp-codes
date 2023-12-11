#ifndef CREDITCARD_H
#define CREDITCARD_H
#include<iostream>
#include "CreditCardType.h"

class CreditCard{
    std::string _number;
    CreditCardType _card_type;
    float _limit;
    int _expiry_year;
    int _card_cvv_number;
public:
    CreditCard() = delete;
    CreditCard(const CreditCard&) = delete;
    CreditCard(CreditCard&&) = delete;
    CreditCard& operator=(const CreditCard&) = delete;
    CreditCard& operator=(CreditCard&) = delete;
    ~CreditCard() = default;

    CreditCard(std::string number, CreditCardType cardtype, float limit, int expYear, int cardCvvNum); 

    std::string number() const { return _number; }
    CreditCardType cardType() const { return _card_type; }
    float limit() const { return _limit; }
    int expiryYear() const { return _expiry_year; }
    int cardCvvNumber() const { return _card_cvv_number; }

    friend std::ostream &operator<<(std::ostream &os, const CreditCard &rhs);

    

};
std::string DisplayEnum(CreditCardType value);

#endif // CREDITCARD_H
