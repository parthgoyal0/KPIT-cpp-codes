#include "Functionalities.h"
#include "Customer.h"

using customerContainer = std::list<Customer*>;

void CreateObjects(customerContainer &data)
{
    Customer *C1 = new Customer("PARTH","C101" ,CustomerType::ELITE,
                                {});

    Customer *C2 = new Customer("YASH","C102" ,CustomerType::PRIVILEGED,
                                {});

    Customer *C3 = new Customer("ANIRUDH","C103" ,CustomerType::PRO,
                                {});


    data.push_back(C1);
    data.push_back(C2);
    data.push_back(C3);
   
}