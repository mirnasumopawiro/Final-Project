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

void showMenu();

int number = 0;



int main() {
    
    const float BOOKCASE_PRICE = 40.91;
    const float BED_WITH_STORAGE_PRICE = 86.36;
    const float BED_WO_STORAGE_PRICE = 40.91;
    const float TV_BENCH_PRICE = 86.36;
    const float WARDROBE_PRICE = 172.72;
    const float CALL_OUT_FEE = 31.82;
    const float REMOVE_PACKAGE = 13.64;
    
    orderFormat orderInput[number];
   
    
    cout << "Welcome to Install4U\n";
    
            showMenu();
    
    cout << orderInput[0].furnitureChoice << endl;
    cout << orderInput[0].furnitureAmount << endl;
    cout << orderInput[1].furnitureChoice << endl;
    
    return 0;
}

void showMenu()
{
    orderFormat orderInput[number];
    
    do
    {

    cout << "Which furniture would you like us to install for you? (ex: for Bookcase, enter 1)\n";
    cout << "1. Bookcase \n";
    cout << "2. Bed with Under Storage \n";
    cout << "3. Bed without Under Storage \n";
    cout << "4. TV Bench \n";
    cout << "5. 2-frame Wardrobe with Hinged Doors \n";
    cout << "6. I do not want to book an installation right now\n";
    cout << "Order: ";
        
        for (int i = 0; i<=number; i++)
        {
            cin >> orderInput[i].furnitureChoice;
            while (orderInput[i].furnitureChoice < 1 || orderInput[i].furnitureChoice > 5)
            {
                cout << "Please enter a number between 1-5" << endl;
                cout << "Order: ";
                cin >> orderInput[i].furnitureChoice;
            }
            if (orderInput[i].furnitureChoice == 6)
            {
                break;
            }
    
            cout << "How much of this would you like to install?\n";
            cin >> orderInput[i].furnitureAmount;
        }
    
    cout << "Would you like to add more items to your cart? (Y/N) \n";
    cin >> choice;
    }
    while (choice == 'Y' || choice == 'y');
    number++;
}
