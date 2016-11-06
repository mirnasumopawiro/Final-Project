//
//  main.cpp
//  Final Project
//
//  Created by Mirna Sumopawiro on 10/10/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//  Installation Booking

#include <iostream>
#include <iomanip>
#include "Orders.hpp"
#include "CustomerData.hpp"
using namespace std;

int fChoice;
int fAmount;
string inName;
string inNumber;
string inCity;
char choice;
void showMenu();
void getData();
void showSummary();


int main()
{
    
    cout << "\t\t\t WELCOME TO INSTALL 4 U\n";
    
    try
    {
        showMenu();
    }
    catch (string exceptionString)
    {
        cout << exceptionString;
        exit (0);
    }
    
    Orders orderInput (fChoice, fAmount);
    
    cout << "\t\t\tORDER SUMMARY:" << endl;
    cout << "Furniture number: " << setw(2) << fixed << orderInput.getChoice() << endl;
    cout << "Amount to install: " << setw(2) << fixed << orderInput.getAmount() << endl;
    
    orderInput.setSubTotal(fChoice, fAmount);
    
    cout << endl;
    cout << setprecision(2);
    cout << "Subtotal: " << setw(2) << fixed << "$" << orderInput.getSubTotal() << endl;
    cout << "Would you like to proceed? (Y/N)\n";
    cin >> choice;
    
    if (choice == 'Y' || choice == 'y')
    {
        getData();
    }
    else
    {
        cout << "Thank you for visiting our website" << endl;
        cout << "We look forward to your next booking" << endl;
        exit(0);
    }
    
    CustomerData customerDetails (inName, inNumber, inCity);
    
   
    showSummary();
    
    cout << "Would you like to book your installation now?" << endl;
    cin >> choice;
    
    if (choice == 'Y' || choice == 'y')
    {
        cout << "Thank you for booking an installation with us" << endl;
        cout << "Our installer will call you within 48 hours. Have a nice day!" << endl;
    }
    else
    {
        cout << "Thank you for visiting our website" << endl;
        cout << "We look forward to your next booking" << endl;
        exit(0);
    }
    
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
                string exceptionString =  "Thank you for visiting our website\nWe look forward to your next booking\n";
                throw exceptionString;
            }
    
            cout << "How much of this would you like to install?\n";
            cin >> fAmount;
}

void getData ()
{
    do
    {
        cout << "Please enter the following details\n";
        cout << "Name: ";
        cin >> inName;
        cout << "Phone number: ";
        cin >> inNumber;
        cout << "City: ";
        cin >> inCity;
        cout << endl;
        cout << "CONFIRM DETAILS" << endl;
        cout << "Name: " << inName << endl;
        cout << "Phone number: " << inNumber << endl;
        cout << "City: " << inCity << endl;
        cout << "Would you like to change your details? (Y/N)";
        cin >> choice;
    }
    while (choice == 'Y' || choice == 'y');
    
}

void showSummary()
{
    CustomerData customerDetails (inName, inNumber, inCity);
    Orders orderInput (fChoice, fAmount);
    
    cout << endl;
    cout << "\t\t\tBOOKING SUMMARY" << endl;
    cout << endl;
    cout << endl;
    cout << "CUSTOMER DETAILS" << endl;
    cout << "Name: " << "\t\t\t" << customerDetails.getName() << endl;
    cout << "Phone number: " << "\t" << customerDetails.getNumber() << endl;
    cout << "City: " << "\t\t\t" << customerDetails.getCity() << endl;
    cout << endl;
    cout << "ORDER" << endl;
    cout << "Furniture number: " << "\t\t" << orderInput.getChoice() << endl;
    cout << "Amount to install: " << "\t\t" << orderInput.getAmount() << endl;
    cout << endl;
    cout << "QUOTATION" << endl;
    orderInput.setSubTotal(fChoice, fAmount);
    cout << setprecision(2);
    cout << "Subtotal: " << "\t\t" << "$" << orderInput.getSubTotal() << endl;
    cout << "Call Out Fee:" << "\t\t" << "$" << orderInput.getCallOutFee() << endl;
    orderInput.setGrandTotal();
    cout << "Grand Total:" << "\t\t" "$" << orderInput.getGrandTotal() << endl;
    
}