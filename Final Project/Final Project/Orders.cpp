//
//  Orders.cpp
//  Final Project
//
//  Created by Mirna Sumopawiro on 11/1/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include "Orders.hpp"

Orders::Orders (int furnitureChoice, int furnitureAmount)
{
    this->furnitureChoice = furnitureChoice;
    this->furnitureAmount = furnitureAmount;
}

int Orders::getChoice()
{
    return furnitureChoice;
}

int Orders::getAmount()
{
    return furnitureAmount;
}