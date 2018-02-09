#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int Paycheck = 0;
    double Carlos = 0.0;
    double Other = 0.0;
    double TCarlos = 0.0;
    double TOther = 0.0;
     
    cout << "Enter Paycheck: ";
    cin >> Paycheck;
    cout << endl;
    
    Carlos = Paycheck * 0.04;
    Other = Paycheck * 0.02;
    TCarlos = 24 * Carlos;
    TOther = 24 * Other;
    
    cout << "Each paycheck for Carlos: $" << Carlos << endl;
    cout << "Total paycheck for Carlos: $" << TCarlos << endl;
    cout << "Each paycheck for Others: $" << Other << endl; 
    cout << "Total paycheck for others: $" << TOther << endl;
    
    system("pause");
    return EXIT_SUCCESS;
}
