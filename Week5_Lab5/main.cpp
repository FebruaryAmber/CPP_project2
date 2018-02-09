#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int id;
    int itemcost;
    int banknote;
    int num;
    int remain;
    int d;
    int c;
    int df;
     
    cout << "Item ID      Name	               Cost (in cents) " << endl;	   
    cout << "   1  	     Mars choc bar	       360	           " << endl;
    cout << "   2 	     Picnic choc bar	       320	       " << endl;
    cout << "   3         TimTam choc bar	       370	       " << endl;
    cout << "   4         Dotitos chips	       225	           " << endl;
    cout << "   5	     Smith¡¯s chips	       240	           " << endl;
    cout << "   6         Water bottle	       300	           " << endl;
    cout << "                                                  " << endl;
    
    cout << "Enter id: ";
    cin >> id;
    cout << endl;
    
    cout << "How many you want: ";
    cin >> num;
    cout << endl;
    
    cout << " Enter item coat: $";
    cin >> banknote;
    cout << endl;
    
    switch(id)
    {
        case 1:
            if( banknote*100 >= num*360)
            {
                cout << "Mars choc bar" << endl;
                d = 360/100;
                c = 360%100;
                cout << "each $" << d << "." << c << endl;
                df = (num * 360)/100; 
                cout << "total cost: $" << df << endl;           
                remain = (banknote*100 - num * 360)/100;
                cout << "change: $" << remain << endl; 
            }
            else
            {
                cout << "you need more many!" << endl;
            }           
        break;
        
        case 2:
            if( banknote*100 >= num*320)
            {  
                cout << "Picnic choc bar" << endl;
                d = 320/100;
                c = 320%100;
                cout << "each $" << d << "." << c << endl;
                df = (num * 320)/100;
                cout << "total cost: $" << df << endl;
                remain = (banknote*100 - num * 320)/100;
                cout << "change: $" << remain << endl;
            }
            else
            {
                cout << "you need more many!" << endl;
            }
        break;
        
        case 3:
            if( banknote*100 >= num*370)
            {
                cout << "TimTam choc bar" << endl;
                d = 370/100;
                c = 370%100;
                cout << "each $" << d << "." << c << endl;
                df = (num * 370)/100;            
                cout << "total cost: $" << df << endl;
                remain = (banknote*100 - num * 370)/100;
                cout << "change: $" << remain << endl;
            }
            else
            {
                cout << "you need more many!" << endl;
            }
        break;
        
        case 4:
            if( banknote*100 >= num*225)
            {
                cout << "Dotitos chips" << endl;
                d = 225/100;
                c = 225%100;
                cout << "each $" << d << "." << c << endl;
                df = (num * 225)/100;         
                cout << "total cost: $" << df << endl;  
                remain = (banknote*100 - num * 225)/100;
                cout << "change: $" << remain << endl;
            }
            else
            {
                cout << "you need more many!" << endl;
            }
        break;
        
        case 5:
            if( banknote*100 >= num*240)
            { 
                cout << "Smiths chips" << endl;
                d = 240/100;
                c = 240%100;
                cout << "each $" << d << "." << c << endl;
                df = (num * 240)/100;            
                cout << "total cost: $" << df << endl;
                remain = (banknote*100 - num * 240)/100;
                cout << "change: $" << remain << endl;
            }
            else
            {
                cout << "you need more many!" << endl;
            }
        break;
        
        case 6:
            if( banknote*100 >= num*300)
            {   
                cout << "Water bottle" << endl;
                d = 300/100;
                c = 300%100;
                cout << "each $" << d << "." << c << endl;  
                df = (num * 300)/100;         
                cout << "total cost: $" << df << endl; 
                remain = (banknote*100 - num * 300)/100;
                cout << "change: $" << remain << endl;
            }
            else
            {
                cout << "you need more many!" << endl;
            }
        break;
        
        default:
            cout << "system error!" << endl;
        break;
    }
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
