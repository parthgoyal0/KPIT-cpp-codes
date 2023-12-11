#include "Functionalities.h"
#include<iostream>
#include<vector>
#include<memory>
#include"Order.h"



using Container = std::vector<std::shared_ptr<Order>>;

void CreateObjects(Container &data)
{    data.push_back(
        std::make_shared<Order>("O101", 100.0f, OrderType::COD, 5.0f)
    );
    data.push_back(
        std::make_shared<Order>("O102", 200.0f, OrderType::PAID, 2.0f)
    );
    data.push_back(
        std::make_shared<Order>("O103", 300.0f, OrderType::PROMOTION, 1.0f)
    );
    data.push_back(
        std::make_shared<Order>("O104", 400.0f, OrderType::PAID, 2.0f)
    );
    data.push_back(
        std::make_shared<Order>("O105", 500.0f, OrderType::COD, 3.0f)
    );
    
}


std::string LowestDiscount(Container &data)
{
    if(data.empty()){
        throw std::runtime_error("No DATA FOUND");
    }

    std::string id = "";
    float low_Discount = data.front()->discount();

    for(std::shared_ptr<Order>& c : data)
    {
        float discount = c->discount();
        if(discount<low_Discount){

            low_Discount = discount;
            id=c->id();
        }
    }
    
    return id;
}



OrderType FindOrderType(Container &data, std::string id)
{
    if(data.empty()){
        throw std::runtime_error("NO DATA FOUND");
    }
     
    OrderType t;
    for(std::shared_ptr<Order> c : data){
        if(c->id()==id){
            t = c->type();
        }
    }
    return t;
}


float FindAverage(Container &data)
{
    if(data.empty()){
        throw std::runtime_error("NO DATA FOUND");
    }

    float total = 0.0f;

    for(std::shared_ptr<Order> c : data){
        total += c->value();
    }
    return total/data.size();
}


Container FindNInstances(Container &data, int N)
{
    if(data.empty()){
        throw std::runtime_error("NO DATA FOUND");
    }

    if(N<0 || N>data.size()){
        throw std::runtime_error("N is invalid");
    }
    
    Container result;
    int count = N;

    while (count > 0){
        result.push_back(data[count]);
        count--;
    }
    return result;
    
}
