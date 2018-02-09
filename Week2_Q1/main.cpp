/* Name: Yelong Qian
   ID: s3603751
   Date: 14/02/2017
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   //declare variables
    char T;
    double ICelsius = 0.0;
    double IFahrenheit = 0.0;
    double OCelsius =  0.0;
    double OFahrenheit = 0.0;

    cout << "Enter Celsius or fahrenheit (F/c): ";
    cin >> T;
    cout << endl;
    
    if(T == 'c' || T == 'C')
    {
        cout << "Enter Celsius(number): ";
        cin >> ICelsius;
        cout << endl;
        OFahrenheit = (9.0 / 5.0) * ICelsius + 32;
        cout << "Fahrenheit: " << OFahrenheit << endl;
    }
    else if(T == 'f' || T == 'F')
    {
        cout << "Enter Fahrenheit(number): ";
        cin >> IFahrenheit;
        cout << endl;
        OCelsius = (5.0 / 9.0) * (IFahrenheit - 32);
        cout << "Celsius: " << OCelsius << endl;
    }
    else
    {
        cout << "Program error!" << endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
