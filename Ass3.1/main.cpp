/*
Name: Yelong Qian
ID: s3603751

THis program is show the data of a projectile motion example.
*/

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

//constant variable decoration
const double g = 9.81;
const double PI = 3.14159265;

int main(int argc, char *argv[])
{    
    //constant integer variable
    int h0 = 10;
    int v0 = 15;
    int angle1 = 20;
    int angle2 = 40;
    
    //variable decoration
    double t = 0.0;;    
    double sn1 = 0.0;
    double sn2 = 0.0;
    double vy1 = 0.0;
    double vy2 = 0.0;
    double h1 = 0.0;
    double h2 = 0.0; 
    
    //sine(degree to radiant)
    sn1 = sin(20*PI/180);
    sn2 = sin(40*PI/180);
    
    //vertical velocity
    vy1 = v0*sn1;
    vy2 = v0*sn2; 
    
    //output file
    ofstream outFile;
    outFile.open("projectile.csv");
    
    //check output file
    if(outFile.fail())
    {
        cout << "Error openning files" << endl;
        cout << "Program terminated" << endl;
        system("pause");
        return 1;
    }
    
    //if file is open
    if(outFile.is_open())
    {
        cout << "t \t\t h1 \t\t h2 \t\t" << endl; //print in program
        outFile << "t , h1 , h2" <<endl; //print in file
        
        //pring a line
        for(int i=0; i< 70 ; i++)
        {
            cout << "_";
        }
        cout << endl;
        
        //main program start    
        while(1)
        {
            //the projectile line for h1 and 2
            h1 = h0 + vy1*t - (g*pow(t,2)/2);
            h2 = h0 + vy2*t - (g*pow(t,2)/2);
            
            //if it below 0, it will initial to 0
            if(h1 < 0)
                h1 = 0;
            if(h2 <0 )
                h2 = 0;
        
            //output the data
            cout << fixed << setprecision(3) <<  t << "\t" << setw(16) << right << fixed << setprecision(5) << h1 << "\t" << setw(8)<< right << fixed << setprecision(5) << h2 <<endl;
            outFile << fixed << setprecision(3) << t << " , " << fixed << setprecision(5) << h1 << " , " << fixed << setprecision(5) << h2 <<endl;
            
            //time increments
            t = t + 0.005;
            
            //loop break condition
            if(h1 <= 0 && h2 <= 0)
            {
                break;
            }
        } 
    }
    
    //close file
    outFile.close();
    cout << endl << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
