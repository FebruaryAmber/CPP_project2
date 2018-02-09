#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double xf = 0.0, xs = 0.0;
    double a = 0.0, b = 0.0, c = 0.0;
    double d = 0.0;
    
    cout << "ax^2 + bx + c = 0" << endl;
    
    cout << "Enter a: ";
    cin >> a;
    cout << endl;
    
    cout << "Enter b: ";
    cin >> b;
    cout << endl;
    
    cout << "Enter c: ";
    cin >> c;
    cout << endl;
    
    d = pow(b,2) - 4*a*c;
    
    if(d > 0)
    {
        xf = -b/(2*a) + (1/(2*a)*sqrt(d));
        xs = -b/(2*a) - (1/(2*a)*sqrt(d));
        
        cout << "x has two solution" << endl;
        cout << "x1 = " << xf << endl;
        cout << "x2 = " << xs << endl;
    }
    else if(d == 0)
    {
        xf = -b/(2*a);
        
        cout << "x has one solution" << endl;
        cout << "x1 = " << xf << endl;
    }
    else if(d < 0)
    {
        cout << "x has two comples roots" << endl;
    }
           
    
    system("pause");
    return EXIT_SUCCESS;
}
