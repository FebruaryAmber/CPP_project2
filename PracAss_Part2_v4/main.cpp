#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int townA = 0;
    int town_A = 0;
    int town_B = 0;
    int townB = 0;
    double growthA = 0;
    double growthB = 0;
    double rateA = 0;
    double rateB = 0;
    int year = 2018;
    
    
    cout << "Enter the initial population for town A: ";
    cin >> townA;
    cout << endl;
    
    cout << "Enter the initial population for town B: ";
    cin >> townB;
    cout << endl;
    
    while(1)
    {
        cout << "Enter the initial population for town A is ";
        cin >> growthA;
        cout << endl;
        if(growthA >=2 && growthA <=10)
        {
            break;
        }
    }
    
    while(1)
    {
        cout << "Enter the initial population for town B is ";
        cin >> growthB;
        cout << endl;
        if(growthB >=2 && growthB <=10)
        {
            break;
        }
    }
    
    rateA = growthA /100;
    rateB = growthB /100;
    
    if(townA > townB)
    {
        cout <<"Town A has already more people that town B" << endl;
    }
    else
    {
        cout << "\nYear \t\t Town A \t\t Town B\n";
        
        while(1)
        {
            town_A = townA * rateA + townA;
            town_B = townB * rateB + townB;
            
            cout << "\n" << year << " \t\t " << town_A << " \t\t\t " << town_B << endl;          
            
            townA = town_A;
            townB = town_B;
            
            if(town_A >= town_B)
            {
                cout << "Population A will be greater or equal of the population B in " << year <<endl;
                break;
            }
            year = year++;
        }        
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
