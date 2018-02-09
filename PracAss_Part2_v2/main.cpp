#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
     int i = 0;
     int id = 0;
     double name = 0.0;
     double total = 0.0;
     double dollar = 0.0;
     double change = 0.0;
     double cdollar = 0.0;
     double ccent = 0;
     int cent = 0;
     double a = 0.0;
     double b = 0.0;
     
     cout <<"Welcome to our new vending machine!" <<endl;
     cout <<"                                   " <<endl;
     cout <<"Item ID     Name       Cost   "<< endl;
     cout <<"______________________________"<< endl;
     cout <<"1...... Water...........$3.60 "<< endl;
     cout <<"2...... Sandwitch.......$5.20 "<< endl;
     cout <<"3...... Chocolate.......$3.70 "<< endl;
     cout <<"4...... Fruit&Nut Bar...$2.25 "<< endl;
     cout <<"5...... Energy Drink....$4.00 "<< endl;
     cout <<"                                   " <<endl;     
     
     while(i<5)
     {     
           do
           { 
                cout << " " << endl;
                cout << "Enter an Item's ID or '0' when finished: ";
                cin >> id;            
            
                if(id >=6)
                {
                    cout << " " <<endl;
                    cout << "Incorrect Item's ID; please make another choice" << endl;
                }
            }while(id >= 6);
               
            if(id == 0)
            {
                cout << "Purchase completed" << endl;
                break;
            }
            
                         
                switch(id)
                {
                    case 1:
                        name = 3.60;
                        break;
                    case 2:
                        name = 5.20;
                        break;
                    case 3:
                        name = 3.70;
                         break;
                    case 4:
                        name = 2.25;
                        break;
                    case 5:
                        name = 4.00;
                        break;
                }
                total = total + name;              
        i++;
        
    }
    
    if(i==5)
    {
        cout <<"Total cost of all items is " << fixed << setprecision(2) << total << endl;
    }
    
    cout << "Please enter a banknote value in dollars: ";
    cin >> dollar;
    cout << endl;
    
    change = dollar - total;
    cent=change*100;
    cdollar=cent/100;
    ccent=cent%100;
    
    a = total + 0.01;
    b = total - 0.01;
    
    if(dollar == total || dollar == a || dollar == b)
    {
        cout <<"thank you for your purchase! " << endl;
    }
    else
    {   
        cout << "Please take the change: " <<endl;
        cout << cdollar << " dollars and " << ccent <<" cents"<<endl;
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
