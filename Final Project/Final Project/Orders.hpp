//
//  Orders.hpp
//  Final Project
//
//  Created by Mirna Sumopawiro on 11/1/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#ifndef Orders_hpp
#define Orders_hpp

#include <iostream>
using namespace std;

class Orders
{
private:
    const float BOOKCASE_PRICE = 40.91;
    const float BED_WITH_STORAGE_PRICE = 86.36;
    const float BED_WO_STORAGE_PRICE = 40.91;
    const float TV_BENCH_PRICE = 86.36;
    const float WARDROBE_PRICE = 172.72;
    const float CALL_OUT_FEE = 31.82;
    const float REMOVE_PACKAGE = 13.64;
    int furnitureChoice;
    int furnitureAmount;
    
public:
    Orders();
    Orders (int furnitureChoice, int furnitureAmount);
    void setChoice();
    void setAmount();
    int getChoice();
    int getAmount();
};

#endif /* Orders_hpp */
