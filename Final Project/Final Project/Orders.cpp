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

void Orders::setSubTotal(int furnitureChoice, int furnitureAmount)
{
    switch (furnitureChoice)
    {
        case 1:
            subTotal = furnitureAmount * BOOKCASE_PRICE;
            break;
        case 2:
            subTotal = furnitureAmount * BED_WITH_STORAGE_PRICE;
            break;
        case 3:
            subTotal = furnitureAmount * BED_WO_STORAGE_PRICE;
            break;
        case 4:
            subTotal = furnitureAmount * TV_BENCH_PRICE;
            break;
        case 5:
            subTotal = furnitureAmount * WARDROBE_PRICE;
    }
}

float Orders::getSubTotal()
{
    return subTotal;
}
