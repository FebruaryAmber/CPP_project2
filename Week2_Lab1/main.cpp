/* Name: Yelong Qian
   ID: s3603751
   Date: 13/02/2017
   This program calculates and displays 
   the amount of the tip for a waiter 
   at a restaurant
*/
   
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   //declare variables
    double totalBill     = 0.0; //total bill
    double liquor        = 0.0; //liquor charge
    double tipPercent    = 0.0; //tip percentage
    double totalNoLiquor = 0.0; //total without
                                //liquor charge
    double tip           = 0.0; //caculated tip
    
    //Enter the total bill, liquor charge, and tip percentage
    cout << "Enter a total bill: ";
    cin >> totalBill;
    cout << endl;
   
    cout << "Enter a liquor charge: ";
    cin >> liquor;
    cout << endl;
   
    cout <<"Enter a tip percentage: ";
    cin >> tipPercent;
    cout << endl;
    
    //calculate the total bill without liquor charge
    totalNoLiquor = totalBill - liquor;
    
    // calculate the tip
    tip = totalNoLiquor*(tipPercent/100);
    
    //Display the tip
    cout << "Please pay the tip: $" << tip << endl;
        
    system("PAUSE");
    return EXIT_SUCCESS;
}
