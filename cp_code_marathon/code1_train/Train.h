#ifndef TRAIN_H
#define TRAIN_H

#include<iostream>
#include"traincategory.h"

class Train
{
    std::string train_name, fromPlace, toplace;
    int train_number, availableSeats;
    enum traincategory travelclass;
    double distance;

    Train();
    Train(int , std::string, std::string, std::string, traincategory,double);
    


    
    

    




};
 


#endif // TRAIN_H
