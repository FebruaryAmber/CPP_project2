#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    int ex;
    
    int x;
    int y;
    
    int num;
    
    int a;
    int b;
    int c;
    int d;
    
    double r1; 
    double r2;
    double s;
    double p; 
    char t;
    
    double se;
    string grade;
    
    cout << "Enter a Exercise: ";
    cin >> ex;
    cout << endl;
    
    if(ex == 1)
    {
        cout << "Enter number x: ";
        cin >> x;
        cout << endl;
    
        cout << "Enter number y: ";
        cin >> y;
    
        if(x < y)
        {
            cout << "x smaller than y" <<endl;
        }
        else if(x == y)
        {
            cout << "x equal to y" << endl;
        }
        else
        {
            cout << "x larger than y" << endl;
        }
    }
    else if(ex == 2)
    { 
        cout << "Enter an integer: ";
        cin >> num;
        cout << endl;

        // True if the number is perfectly divisible by 2
        if(num % 2 == 0)
            cout << num << " is even." << endl;
        else
            cout << num <<" is odd." << endl;
    }
    else if(ex == 3) 
    {               
        cout << "a^2 + b^2 = c^2 " << endl;
    
        cout << "Enter a number a";
        cin >> a;
        cout << endl;
      
        cout << "Enter b number b";
        cin >> b;
        cout << endl;
    
        if(a==0 || b==0 || c==0)
        {
            cout << "Error!" << endl;
        }
        else
        {
            d = pow(a , 2) + pow(b , 2);
            d = pow(c , 2);
            cout << "Output: " << c << endl;
        };
    }
    else if(ex == 4)
    {   
        cout << "Enter a number";
        cin >> t;
        cout << endl;
    
        if(t == 's' || t == 's')
        {
            cout << "Enter a number";
            cin >> r1;
            cout << endl;
    
            cout << "Enter b number";
            cin >> r2;
            cout << endl;
        
            s = r1 + r2;
        
            cout << "output" << s << endl;
        }
        else if(t == 'P' || t == 'p')
        {
            cout << "Enter a number";
            cin >> r1;
            cout << endl;
    
            cout << "Enter b number";
            cin >> r2;
            cout << endl;
        
            p = pow((1/r1) + (1/r2), -1);
            cout << "output" << p << endl;
       }
       else
       {
            cout << "Error" <<endl;
       };
    }
    else if(ex == 5)
    {
        cout << "Student GPA" << endl;
        
        cout << "Enter a grad: ";
        cin >> se;
        cout << endl;
        
        if(se >= 0 || se <=100)
        {
            if(se >= 80)
                grade = "HD";
            else if(se >= 70 || se <= 79)
                grade = "DI";
            else if(se >= 60 || se <= 69)
                grade = "CR";
            else if(se <= 50 || se <= 59)
                grade = "PA";
            else
                grade = "NN";
        };
        
        cout << "your score is: " << se << endl;
        cout << "your grade is: " << grade << endl;
    }
    else
    {
        cout << "Error!" << endl;
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}



