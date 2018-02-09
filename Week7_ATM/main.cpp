#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    cout <<"      Welcome!      " <<endl;
    cout <<"____________________"<<endl;
    cout <<"|      Amount      |"<<endl;
    cout <<"|       100        |"<<endl;
    cout <<"|       200        |"<<endl;
    cout <<"|       300        |"<<endl;
    cout <<"|       400        |"<<endl;
    cout <<"|   Other amount   |"<<endl;
    cout <<"|__________________|"<<endl;
    
    double amount = 0.0;
    int i = 0;
    double num = 0.0;
    int out = 0;
    int fix = 0;
    
    cout << "\n0 menu        \n";
    cout << "\n1 Amount      \n";
    cout << "\n2 Other amount\n";
    
    while(1)
    {
        cout << "Enter number: ";
        cin >> amount;
        cout << endl;
        
        if(amount == 0)
        {
            cout <<"____________________"<<endl;
            cout <<"|      Amount      |"<<endl;
            cout <<"|       100        |"<<endl;
            cout <<"|       200        |"<<endl;
            cout <<"|       300        |"<<endl;
            cout <<"|       400        |"<<endl;
            cout <<"|   Other amount   |"<<endl;
            cout <<"|__________________|"<<endl;
        }
        else if(amount == 1)
        {
               
                cout << "Enter number: ";
                cin >> i;
            
                switch(i)
                {
                    case 100:
                        out = 100/50;
                    break;
                    
                    case 200:
                        out = 200/50;
                    break;
                    
                    case 300:
                        out = 300/50;
                    break;
                    
                    case 400:
                        out = 400/50;
                    break;
                    default:
                        cout <<"Error!" << endl;
                    break;
                }
                cout << "how many 50: " << out << endl;         
        }
        else if(amount == 2)
        {
            while(1)
            {               
                cout << "Enter any number below 2000: ";
                cin >> num;
                
                fix = num/50;
                cout << "how many 50: " << fix << endl;
                
                if(num <=2000)
                {
                    break;
                }
                else
                {
                    cout << "Error! try again!" << endl;
                }
            }
        }
        if( amount == 1 && amount == 2 && amount ==0)
        {
            break;
        }
    }
            
            
    system("PAUSE");
    return EXIT_SUCCESS;
}
