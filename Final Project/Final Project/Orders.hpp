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
    int furnitureChoice;
    int furnitureAmount;
    float subTotal;
    float grandTotal;
    
public:
    Orders();
    Orders (int furnitureChoice, int furnitureAmount);
    int getChoice();
    int getAmount();
    void setSubTotal(int furnitureChoice, int furnitureAmount);
    float getSubTotal();
    float getCallOutFee();
    void setGrandTotal();
    float getGrandTotal();
    
    
};

#endif /* Orders_hpp */
