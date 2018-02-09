#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    
    cout << "Enter i: ";
    cin >> i;
    cout << "Enter j: ";
    cin >> j;
    
    i = i + 2;
    j--;
    k = i / j;
    k = k + i;
    j = k % i;
    k = k + i * j;
    k--;
    cout << k;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
