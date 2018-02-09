/*
ID: s3603751
Name: Yelong Qian

assignment Part 1 Question 2 version 1

find the result for pow(x,2) * (x + y)* (x+ 1/3) / (1 + (x*y - pow(PI,2)/4)
*/

#include <cstdlib>
#include <iostream>
#include <cmath> // using pow(n , x)

using namespace std;

int main(int argc, char *argv[])
{
    double x,y; //x,y input
    double result = 0.0; //final output var
    double PI = 3.14159; //define PI = 3.14159
    
    //input x
    cout << "x: ";
    cin >> x;
    cout << endl;
    
    //input y
    cout << "y: ";
    cin >> y;
    cout << endl;
    
    result = (pow(x,2) * (x + y)* (x+ 1/3)) / (1 + (x*y - pow(PI,2))/4); //fomula for result
    
    cout << "result = " << result << endl; //output value
     
    system("PAUSE");
    return EXIT_SUCCESS;
}
