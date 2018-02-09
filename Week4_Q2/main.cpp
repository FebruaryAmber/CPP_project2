#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int value;
    
    cout << "Enter a number: ";
    cin >> value;
    cout << endl;
    
    if((value >= 0 && value < 10) || (value * 2 < 20 && value - 2 > 2) || value == 111)
    {
        cout << "THAT'S TRUE :(" << endl;
    }
    else
    {
        cout << "THAT'S NOT TRUE :(" << endl;
    }
    
    system("pause");
    return EXIT_SUCCESS;
}
