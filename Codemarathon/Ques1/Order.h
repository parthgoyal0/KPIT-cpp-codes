#ifndef ORDER_H
#define ORDER_H
#include<iostream>
#include "OrderType.h"

class Order{
    std::string _id;
    float _value;
    OrderType _type;
    float _discount;

public:
    Order() = delete; //default constructor
    Order(const Order&) = default; //copy constructor
    Order(Order&&) = delete; 
    Order& operator=(const Order&) = delete;
    Order& operator=(Order&&) = delete;

    ~Order() = default;

    Order(std::string id, float value, OrderType type, float discount);

    std::string id() const { return _id; }
    float value() const { return _value; }
    OrderType type() const { return _type; }
    float discount() const { return _discount; }

    friend std::ostream &operator<<(std::ostream &os, const Order &rhs);


};

std::string DisplayEnum(OrderType value);
#endif // ORDER_H
