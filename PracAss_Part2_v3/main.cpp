#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    double loanAmount = 0.0;
    double interestRate = 0.0;
    double monthlyPayment = 0.0;
    int month = 1;
    double balance = 0.0;
    double fixInterestRate = 0.0;
    double principalRepayments = 0.0;
    double balanceOut =0.0;
    double amount = 0.0;
    double fix = 0.0;
    
    cout << "Enter the loan amount: ";
    cin >> loanAmount;
    cout << endl;  
           
    while(1)
    {
        cout << "The interest rate for this loan is ";
        cin >> interestRate;
        cout << endl;
        
        if( interestRate>=5 && interestRate<=15)
        {
            break;
        }
        else
        {
            cout <<"Error!" << endl;
        }
    }
    
    cout << "Enter the monthly payments: ";
    cin >> monthlyPayment;
    cout << endl;
        
    while(1)
    {
        if(monthlyPayment>=6.67)
        {
            break;
        }
        else
        {
            cout << "The monthly payment is too low. the minimum monthly payment is 6.67" <<endl;
            cout << "Please re-enter your montly payments: ";
            cin >> monthlyPayment;
            cout << endl;
        }
    }
    
    cout << "Month \t\t\t Principal repayments \t\t\t Loan Amount" <<endl;
    
    fixInterestRate = interestRate /100;
    
    amount = loanAmount;
    
    while(1)
    {                   
            balance = (amount - monthlyPayment) + amount * fixInterestRate/12;
            principalRepayments = amount - balance;
            
            fix = balance;
            
            if(fix < 0)
            {
                fix = 0;
            }
        
            cout << month << " \t\t\t " << fixed << setprecision(2) << principalRepayments << " \t\t\t\t\t " << fix <<endl;
            
            if(fix == 0)
            {
                cout << "" << endl;
                cout << "you will repay this loan in " << month << " month." <<endl;
            }
            
            amount = balance;
            
            if(balance <= 0)
            {
                break;
            }
            month = month++;
    }
     
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
