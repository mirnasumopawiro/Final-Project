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

//Orders Class
class Orders
{
private:
    const float BOOKCASE_PRICE = 40.91; //Price of a bookcase
    const float BED_WITH_STORAGE_PRICE = 86.36; //Price of a bed with under storage
    const float BED_WO_STORAGE_PRICE = 40.91; //Price of a bed without under storage
    const float TV_BENCH_PRICE = 86.36; //Price of a TV Bench
    const float WARDROBE_PRICE = 172.72; //Price of a wardrobe
    const float CALL_OUT_FEE = 31.82; //Call out fee. A mandatory fee for the installer to come
    int furnitureChoice;
    int furnitureAmount;
    float subTotal; //furniture amount * price of furniture
    float grandTotal; //subtotal + call out fee
    
public:
    //Constructor
    Orders (int furnitureChoice, int furnitureAmount);
    
    //Accessors and mutators
    int getChoice();
    int getAmount();
    void setSubTotal(int furnitureChoice, int furnitureAmount);
    float getSubTotal();
    float getCallOutFee();
    void setGrandTotal();
    float getGrandTotal();
    
};

#endif /* Orders_hpp */
