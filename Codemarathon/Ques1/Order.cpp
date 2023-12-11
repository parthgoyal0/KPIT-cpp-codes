#include "Order.h"
std::ostream &operator<<(std::ostream &os, const Order &rhs) {
    os << "_id: " << rhs._id
       << " _value: " << rhs._value
       << " _type: " << DisplayEnum(rhs._type)
       << " _discount: " << rhs._discount;
    return os;
}
std::string DisplayEnum(OrderType value)
{
    if( value == OrderType::COD){
        return "COD";
    }
    if( value == OrderType::PAID){
        return "PAID";
    }
    else{
        return "PROMOTION";
    }
}


Order::Order(std::string id, float value, OrderType type, float discount)
    : _id(id), _value(value), _type(type), _discount(discount)
{
}

