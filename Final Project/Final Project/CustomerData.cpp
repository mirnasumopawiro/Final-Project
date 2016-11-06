//
//  CustomerData.cpp
//  Final Project
//
//  Created by Mirna Sumopawiro on 11/2/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include "CustomerData.hpp"

CustomerData::CustomerData (string name, string number, string city)
{
    this->name = name;
    this->number = number;
    this->city = city;
}

string CustomerData::getName()
{
    return name;
}

string CustomerData::getNumber()
{
    return number;
}

string CustomerData::getCity()
{
    return city;
}