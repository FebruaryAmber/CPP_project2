#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    int i;
    double temp = 0.0;
    double total = 0.0;
    double avg = 0.0;
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    double d = 0.0;
    double e = 0.0;
    double f = 0.0;
    double g = 0.0;
    double minm[] = {a,b,c,d,e,f,g};
    double maxm[] = {a,b,c,d,e,f,g};
    double min;
    double max;
    string str =" ";
    int j;
    int k;

        for(i=1;i<=7;i++)
        {
            switch(i)
            {
                case 1:                         
                     cout << "Monday: ";
                     cin >> temp;          
                     cout << endl;
                     
                     while(1)
                     {
                            
                         if(temp >= -50 && temp <= 50)
                         {
                             a = temp;
                             break;
                         }
                         else
                         {
                              temp = 0;
                              cout << "Incorrect input, pleaces try again: " << endl;
                              cout << "Monday: ";
                              cin >> temp;
                              cout << endl;
                         }
                     }
                     break;
                     
                case 2:                       
                     cout << "Tuesday: ";
                     cin >> temp;
                     cout << endl;                                             
                       
                     while(1)
                     {
                            
                         if(temp >= -50 && temp <= 50)
                         {
                             b = temp;
                             break;
                         }
                         else
                         {
                              temp = 0;
                              cout << "Incorrect input, pleaces try again: " << endl;
                              cout << "Tuesday: ";
                              cin >> temp;
                              cout << endl;
                         }
                     }
                     break;
                     
                case 3:                     
                     cout << "Wednesday: ";
                     cin >> temp;
                     cout << endl;              
                     
                     while(1)
                     {
                            
                         if(temp >= -50 && temp <= 50)
                         {
                             c = temp;
                             break;
                         }
                         else
                         {
                              temp = 0;
                              cout << "Incorrect input, pleaces try again: " << endl;
                              cout << "Wednesday: ";
                              cin >> temp;
                              cout << endl;
                         }
                     }
                    break;
                    
                case 4:                       
                     cout << "Thursday: ";
                     cin >> temp;
                     cout << endl;                    
                         
                     while(1)
                     {
                            
                         if(temp >= -50 && temp <= 50)
                         {
                             d = temp;
                             break;
                         }
                         else
                         {
                              temp = 0;
                              cout << "Incorrect input, pleaces try again: " << endl;
                              cout << "Thursday: ";
                              cin >> temp;
                              cout << endl;
                         }
                     }
                     break; 
                       
                case 5:
                       
                     cout << "Friday: ";
                     cin >> temp;
                     cout << endl;                          
                                        
                     while(1)
                     {
                            
                         if(temp >= -50 && temp <= 50)
                         {
                             e = temp;
                             break;
                         }
                         else
                         {
                              temp = 0;
                              cout << "Incorrect input, pleaces try again: " << endl;
                              cout << "Friday: ";
                              cin >> temp;
                              cout << endl;
                         }
                     }
                     break;
                     
                case 6:                      
                     cout << "Saturday: ";
                     cin >> temp;
                     cout << endl;                     
                                             
                     while(1)
                     {
                            
                         if(temp >= -50 && temp <= 50)
                         {
                             f = temp;
                             break;
                         }
                         else
                         {
                              temp = 0;
                              cout << "Incorrect input, pleaces try again: " << endl;
                              cout << "Saturday: ";
                              cin >> temp;
                              cout << endl;
                         }
                     }
                     break;
                     
                case 7:
                     cout << "Sunday: ";
                     cin >> temp;
                     cout << endl;
                                           
                     while(1)
                     {
                            
                         if(temp >= -50 && temp <= 50)
                         {
                             g = temp;
                             break;
                         }
                         else
                         {
                              temp = 0;
                              cout << "Incorrect input, pleaces try again: " << endl;
                              cout << "Sunday: ";
                              cin >> temp;
                              cout << endl;
                         }
                     }                     
                     break;
            }
            total = total + temp;
                            
            if(i==7)
            {
                avg = total/7;
                
                cout << "THe lowest temperature " << " C was on " << endl;
                cout << "THe highest temperature " << " C was on " << endl;
                cout << "The average temperature this week was " << fixed << setprecision(2) << avg <<endl;
            }
        }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
