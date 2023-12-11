#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Order.h"
#include "OrderType.h"
#include "vector"
#include <memory>

using Container = std::vector<std::shared_ptr<Order>>;

// a function to create objects on heap
void CreateObjects(Container& data);

// a function to find id of the order whose discount amount is the lowest
std::string LowestDiscount(Container& data);

//a function to find and return the type of the order whose _id passed as an argument
OrderType FindOrderType(Container& data, std::string id);

//function to find average
float FindAverage(Container& data);

//a function to find N instances
Container FindNInstances(Container& data, int N);


#endif // FUNCTIONALITIES_H
