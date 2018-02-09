/*
ID: s3603751
Name: Yelong Qian

assignment Part 1 Question 1 version 1

the number of first-class tickets sold, the number of coach tickets sold,
the price of a first-class ticket, and the price of a coach ticket, 
then total amount of money.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int f = 0; // first-class tickets sold
    int c = 0; // coach tickets sold
    double a = 0.0; // first-class tickets amount
    double b = 0.0; // coach tickets amount
    int g = 0; // Total number of tickets
    double h = 0.0; // Total amount money
    
    cout << "first-class tickets sold: ";
    cin >> f;  /*input first-class tickets sold*/
    cout << endl;
    
    cout << "coach tickets sold: ";
    cin >> c;  /*input coach tickets sold*/
    cout << endl;
    
    cout << "first-class tickets amount: ";
    cin >> a;  /*input first-class tickets amount*/
    cout << endl;
    
    cout << "coach tickets amount: ";
    cin >> b;  /*input coach tickets amount*/
    cout << endl;
    
    g = f + c; //total tickets fomula
    h= f*a + c*b; //total amount fomula
    
    cout << "total amount(coach tickets): $" << c*b << endl; //total amount(coach tickets) output
    cout << "total amount(first-class tickets): $" << f*a << endl; //total amount(first-class tickets) output
    cout << "total tickets number: " << g << endl; //total tickets number output
    cout << "total amount: $" << h << endl; //total amount output

    system("PAUSE");
    return EXIT_SUCCESS;
}
