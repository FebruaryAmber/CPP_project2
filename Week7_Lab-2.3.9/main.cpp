#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    int c;
    int first;
    int second;
    int next;
 
    first = 1;
    second = 1;
    
    cout << "Enter the number of terms of Fibonacci series you want: " << endl;
    cin >> n;
    cout << endl;
     
    cout << "First " << n << " terms of Fibonacci series are :- " << endl;
 
    for( c = 0 ; c < n ; c++ )
    {
        if( c <= 1 )
            next = c;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
