//
//  main.cpp
//  Final Project
//
//  Created by Mirna Sumopawiro on 10/10/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//  Installation Booking

#include <iostream>
using namespace std;

char choice = ' ';
struct orderFormat
{
    int furnitureChoice;
    int furnitureAmount;
};

void showMenu(orderFormat);

int main() {
    
    const float BOOKCASE_PRICE = 40.91;
    const float BED_WITH_STORAGE_PRICE = 86.36;
    const float BED_WO_STORAGE_PRICE = 40.91;
    const float TV_BENCH_PRICE = 86.36;
    const float WARDROBE_PRICE = 172.72;
    const float CALL_OUT_FEE = 31.82;
    const float REMOVE_PACKAGE = 13.64;
    
    orderFormat orderInput[99];
   
    
    cout << "Welcome to Install4U\n";
    
            showMenu (orderInput);
    
    return 0;
}

void showMenu(orderFormat)
{
    
    do
    {

    cout << "Which furniture would you like us to install for you? (ex: for Bookcase, enter 1)\n";
    cout << "1. Bookcase \n";
    cout << "2. Bed with Under Storage \n";
    cout << "3. Bed without Under Storage \n";
    cout << "4. TV Bench \n";
    cout << "5. 2-frame Wardrobe with Hinged Doors \n";
    cout << "Order: ";
        
        for (int i = 0; i<1; i++)
        {
            cin >> orderInput[i].furnitureChoice;
            while (orderInput[i].furnitureChoice < 1 || orderInput[i].furnitureChoice > 5)
            {
                cout << "Please enter a number between 1-5" << endl;
                cout << "Order: ";
                cin >> orderInput[i].funitureChoice;
            }
    
            cout << "How much of this would you like to install?\n";
            cin >> orderInput[i].furnitureAmount;
        }
    
    cout << "Would you like to add more items to your cart? (Y/N) \n";
    cin >> choice;
    }
    while (choice == 'Y' || choice == 'y');
}
