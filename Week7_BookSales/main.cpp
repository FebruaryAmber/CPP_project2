#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int all;
    int num;
    int i;
    
    all = 0;
    
    for(i=1 ; i<=4 ; i++)
    {
        cout << "Enter sales for week " << i << endl;
        cout << "Week " << i << " salary is $";
        cin >> num;
        all = all + num;  
        if(i==4)
        {
            cout <<"Total salary for this mouths is $" << all << endl;
        }
    }
    
        
    system("PAUSE");
    return EXIT_SUCCESS;
}
