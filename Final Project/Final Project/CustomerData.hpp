//
//  CustomerData.hpp
//  Final Project
//
//  Created by Mirna Sumopawiro on 11/2/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#ifndef CustomerData_hpp
#define CustomerData_hpp

#include <iostream>
using namespace std;

//CustomerData class
class CustomerData
{
private:
    string name;
    string number;
    string city;
public:
    //Constructor
    CustomerData (string name, string number, string city);
    //Accessors
    string getName();
    string getNumber();
    string getCity();
};

#endif /* CustomerData_hpp */
