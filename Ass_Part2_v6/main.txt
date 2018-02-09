/*
ID: s3603751
Name: Yelong Qian
version: Ass_part2_v6
Program: Overtime salary calculator
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    //variable decorator
    int weekWork = 0;
    int weekend = 0;
    int overtime = 0;
    int i;
    int weekWorkOut = 0;
    int weekTotal = 0;
    int totalOvertime = 0;
    int totalSalary = 0;
    int totalMonth = 0;
    int repeat;
    const int MAX = 7;
    const int MIN = 2;
    int j = 2;
    
    repeat = rand()%(MAX-MIN+1)+2; //random number
    
    while(j++ < repeat)
    {            
        for(i=1;i<=4;i++)
        {
            cout << "Week" << i << endl;//show which week
        
            //start loop intput
            while(1)
            {
            
                //input weekWork
                cout << "Total hours worked Mon-Fri? ";
                cin >> weekWork;
                
                //input weekend
                cout << "Hours worked overtime on weekend? ";
                cin >> weekend;
            
                //input condition & loop break
                if(weekWork <= 46 && weekend <= 16)
                {
                    break; //while loop stop
                }
                else
                {
                    weekWork = 0;//set to 0 if condition is wrong( important for total month)
                    weekend = 0;//set to 0 if condition is wrong( importan foe total salary)
                    cout << "Incorrect entry: weekday OT hours must be less than 10, weekend OT must be less that 16" << endl;
                    cout << "Please re-enter" << endl;
                }//end if
            }//end loop
        
            //weekwork condition fix
            if(weekWork <= 35)
            {
                weekWorkOut = weekWork;
            }
            else if( weekWork >= 36)
            {
                weekWorkOut = 36;
            }//end if
        
            //headache start
            //total hours overtime in week
            overtime = weekWork - weekWorkOut;
            totalOvertime = weekWork - weekWorkOut + weekend;
            cout << "Overtime hours worked this week: " << totalOvertime << endl;//output overtime  
        
            //total salary in week
            weekTotal = weekWorkOut * 20 + overtime * 1.5 * 20 + weekend * 2 * 20;
            cout << "Weekly salary: " << weekTotal <<endl;// output week salary
            cout << " " << endl;
        
            //loop back counter
            totalOvertime = totalOvertime + totalMonth;        
            totalMonth = totalOvertime;
        
            weekTotal = weekTotal + totalSalary;
            totalSalary = weekTotal;
            //end headache!!
        
            //total hours & total salary
            if(i==4)
            {
                cout << "Overtime worked this month: " << totalMonth << " hours" << endl;//output overtime in a month
                cout << "Salary this month is $" << totalSalary << endl;//output total salary in month
                cout << "Program ended with exit code: 0" << endl; 
            }//end if    
        }
        weekTotal = 0;
        totalSalary = 0;
        cout << " " << endl;
    }//end loop  
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
