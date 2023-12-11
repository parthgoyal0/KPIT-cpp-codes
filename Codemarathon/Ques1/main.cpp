#include<iostream>
#include "Order.h"
#include "OrderType.h"
#include "Functionalities.h"


int main(){
    Container data;

    CreateObjects(data);

    std::string val = LowestDiscount(data);
    std::cout<<"\nId with Lowest Discount: " << val <<'\n';

    
    OrderType t = FindOrderType(data,"O101");
    std::cout<<"\nType of order: ";
    std::cout<< DisplayEnum(t);

    std::cout<<"\nAverage: "<<FindAverage(data)<<std::endl;

    Container result = FindNInstances(data,3);
    std::cout << "\nPrinting 3 instances: ";
    for(std::shared_ptr<Order> c: result){
        std::cout<< *c <<"\n";
    
    }


}

