#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char argv[])
{
    float grossprice, taxrate, netprice, taxvalue;

    cout << "Enter a gross price: ";
    cin >> grossprice;
    cout << "Enter a tax rate: ";
    cin >> taxrate;
    
    if(grossprice >= 0 && grossprice <= 0)
    {
    }
    cout << "Net price: " << netprice << endl;
    cout << "Tax value: " << taxvalue << endl;
    system("pause");
    return 0;
}
