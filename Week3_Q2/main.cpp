#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double pi =  3.14159265359;
    double x,y;
    
    cout << "Enter value for x: ";
    cin >> x;
    
    y = ( pow(x,2) / ( pow(pi , 2) * ( pow(x , 2) + 0.5))) *( 1 + ( pow(x , 2) / (pow(pi , 2) * pow((pow(x , 2) - 0.5), 2)))); // put your code here
    cout << "y = " << y;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
