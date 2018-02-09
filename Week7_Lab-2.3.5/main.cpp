#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i;
    int j;
    int num;
    int a;
    
    cout << "enter a number: ";
    cin >> num;
    cout << endl;
    
    a = num - 2;
    
    if(a < 98)
    {
        cout << "+";
        for(i=0;i<a;i++)
            cout << "-";
        cout << "+" << endl;
        for(i=0;i<a;i++)
        {
            cout << "|";
            for(j=0;j<a;j++)
                cout << " ";
            cout << "|" << endl;
        }
        cout << "+";
        for(i=0;i<a;i++)
            cout << "-";
        cout << "+" << endl;
    }
    else
    {
        cout << "dick is too big!" << endl;
    }
   
    system("PAUSE");
    return EXIT_SUCCESS;
}
