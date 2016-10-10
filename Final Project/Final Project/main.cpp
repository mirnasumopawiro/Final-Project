//
//  main.cpp
//  Final Project
//
//  Created by Mirna Sumopawiro on 10/10/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//  Installation Booking

#include <iostream>
using namespace std;

int main() {
    
    const float BOOKCASE_PRICE = 40.91;
    const float BED_WITH_STORAGE_PRICE = 86.36;
    const float BED_WO_STORAGE_PRICE = 40.91;
    const float TV_BENCH_PRICE = 86.36;
    const float WARDROBE_PRICE = 172.72;
    const float CALL_OUT_FEE = 31.82;
    const float REMOVE_PACKAGE = 13.64;
    int order1;
    int orderAmount1;
    char choice;
    
    cout << "Welcome to Install4U\n";
    
    do {
        choice = ' ';
        cout << "Which furniture would you like us to install for you? (ex: for Bookcase, enter 1)\n";
        cout << "1. Bookcase \n";
        cout << "2. Bed with Under Storage \n";
        cout << "3. Bed without Under Storage \n";
        cout << "4. TV Bench \n";
        cout << "5. 2-frame Wardrobe with Hinged Doors \n";
        cout << "Order: ";
        cin >> order1;
        
        cout << "How much of this would you like to install?\n";
        cin >> orderAmount1;
        
        cout << "Would you like to add more items to your cart? (Y/N) \n";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y'  );
    
    
    
    
    return 0;
}


