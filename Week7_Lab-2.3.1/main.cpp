#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int c;
    int count;

    
    cout << "enter a num: ";
    cin >> c;
    cout << endl;
    
    count = 0;    
    if( c!=0 && c!=-c)
    {
        while (c!=1)
        {
            if(c%2==0)
            {
                c/=2;
            }
            else
            {
                c=3*c+1;
            }
            
            cout << c << endl;
            count++;
        }
        cout << "couter= " << count << endl;
    }
   
    system("PAUSE");
    return EXIT_SUCCESS;
}
