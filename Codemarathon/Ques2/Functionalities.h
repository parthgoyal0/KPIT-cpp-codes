#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include"CreditCard.h"
#include "Customer.h"
#include<list>



using CreditCards = std::is_object<CreditCard>;

using CustomerContainer = std::list<Customer*>;


void CreateObjects(CustomerContainer& data);

int MaximumLimit(CustomerContainer& data);

Container 








#endif // FUNCTIONALITIES_H
