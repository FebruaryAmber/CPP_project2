/*
ID: s3603751
Name: Yelong Qian

assignment Part 1 Question 1 version 2

Carlos receives 24 paychecks each year. Each paycheck, he contributes a
specific percentage of his gross pay to his retirement plan at work. His
employer also contributes to his retirement plan, but at a different rate.
Carlos wants a program that will calculate and display the total annual
contribution made to his retirement plan by him and his employer.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int Paycheck = 0; //input Paycheck
    double Carlos = 0.0; // (each) amount for Carlos
    double Other = 0.0; // (each) amount for other
    double TCarlos = 0.0; // (total) amount for Carlos
    double TOther = 0.0; // (total) amount for other
     
    //input Paycheck
    cout << "Enter Paycheck: ";
    cin >> Paycheck;
    cout << endl;
    
    //fomula
    Carlos = Paycheck * 0.04; //(each) amount for Carlos
    Other = Paycheck * 0.02; // (each) amount for other
    TCarlos = 24 * Carlos; // (total) amount for Carlos
    TOther = 24 * Other; //(total) amount for other
    
    //output
    cout << "Each paycheck for Carlos: $" << Carlos << endl;
    cout << "Total paycheck for Carlos: $" << TCarlos << endl;
    cout << "Each paycheck for Others: $" << Other << endl; 
    cout << "Total paycheck for others: $" << TOther << endl;
    
    system("pause");
    return EXIT_SUCCESS;
}
