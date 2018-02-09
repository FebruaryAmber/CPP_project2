#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(int argc, char argv[])
{
    double type = 0.0;
    int ch = 0;
    int i = 0;
        
    
    
    for(i=0;i<5;i++)
    {
    cout << "Enter a number: ";
    cin >> type;
    cout << endl;
    
    cout << "Enter a decimal places: ";
    cin >> ch;
    cout << endl;
    
    
        if (ch == 1)
        {
            cout << fixed << setprecision(1) << type << endl;
        }
        else if(ch == 2)
        {
            cout << fixed << setprecision(2) << type << endl;
        }
        else if(ch == 3)
        {
            cout << fixed << setprecision(3) << type << endl;
        }
        else if(ch == 4)
        {
            cout << fixed << setprecision(4) << type << endl;
        }
        else if(ch == 5)
        {
            cout << fixed << setprecision(5) << type << endl;
        }
        else if(ch == 6)
        {
            cout << fixed << setprecision(6) << type << endl;
        }
        else
        {
            cout << "too complex" << endl;
        }
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
