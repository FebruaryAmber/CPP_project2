#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <fstream>
#include <string>

using namespace std;

const int MAX = 5000;
const int MIN = 1000;

int main(int argc, char *argv[])
{
    int totalTrunks = 0;
    int allowedW[num];
    int actualW[num];
    string str = "";
       
    srand(time(NULL));
    
    
    
    cout << "Enter a number: ";
    cin >> totalTrucks;

    
    cout << "NO." << "\t" << "Allowed Weight" << "\t" << "Actual Weight" << "\t" << "status" <<endl;
    
    for(int i=0; i<70 ; i++)
    {
        cout << "_";
    }
    cout << endl;
    
    for(int i=1;i<totalTrucks;i++)
    {
        allowedW[i] = (rand()%(MAX-MIN+1))+MIN;
        actualW[i] = (rand()%(MAX-MIN+1))+MIN;
        if(actualW[i] > allowedW[i])
        {
            str = "OVERLOADED";
        }
        else if(actualW[i] < allowedW[i])
        {
            str = "READY TO GO";
        }
        
        cout << setw(2) << right << i << setw(16) << allowedW[i] << setw(16) << actualW[i] << "\t" << str << endl;
    }       
      
    system("PAUSE");
    return EXIT_SUCCESS;
}
