//
//  main.cpp
//  Final Project
//
//  Created by Mirna Sumopawiro on 10/10/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//  Installation Booking

#include <iostream>
#include "Orders.hpp"
using namespace std;

int fChoice;
int fAmount;
int number = 0;
void showMenu();


int main()
{
    
    
    Orders orderInput (fChoice, fAmount);
    
    cout << "Welcome to Install4U\n";
    
            showMenu();
    
    cout << "Furniture number: " << orderInput.getChoice() << endl;
    cout << "Amount to install: " << orderInput.getAmount() << endl;
    
    
    return 0;
}

void showMenu()
{
    

    cout << "Which furniture would you like us to install for you? (ex: for Bookcase, enter 1)\n";
    cout << "1. Bookcase \n";
    cout << "2. Bed with Under Storage \n";
    cout << "3. Bed without Under Storage \n";
    cout << "4. TV Bench \n";

    cout << "5. 2-frame Wardrobe with Hinged Doors \n";
    cout << "6. I do not want to book an installation right now\n";
    cout << "Order: ";
        
        cin >> fChoice;
        
            if (fChoice < 1 || fChoice > 6)
            {
                cout << "Please enter a number between 1-5" << endl;
                cout << "Order: ";
                cin >> fChoice;
            }
            if (fChoice == 6)
            {
                exit(0);
            }
    
            cout << "How much of this would you like to install?\n";
            cin >> fAmount;
    
    
}
