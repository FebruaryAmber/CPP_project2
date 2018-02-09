#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int year;
    
    cout << "Enter a year: ";
    cin >> year;
    cout << endl;
    
    if(((year%4==0)&&(year%100!=0))||(year%400==0))
    {
         cout << "leap year" << endl;
    }
    else
    {
         cout << "common year" << endl;
    }
        
    system("pause");
    return EXIT_SUCCESS;
}
