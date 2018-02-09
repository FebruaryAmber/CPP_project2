#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    char op;
    double x;
    double y;
    
    
    while(1)
    {
        cout << "Enter operator either + or - or * or /: ";
        cin >> op;
        cout << endl;

        cout << "Enter first num: ";
        cin >> x; 
        cout << endl;
    
        cout << "Enter second num: ";
        cin >> y;
        cout << endl;
    
        switch(op)
        {
            case '+':
                cout << fixed << setprecision(4) << x+y << endl;
                break;

            case '-':
                cout << fixed << setprecision(4) << x-y << endl;
                break;

            case '*':
                cout << fixed << setprecision(4) << x*y << endl;
                break;

            case '/':
                if( y == 0)
                    cout << "Error" << endl;
                else     
                    cout << fixed << setprecision(4) << x/y << endl;
                break;

            default:
            cout << "Error! operator is not correct" << endl;
            break;
        }
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
