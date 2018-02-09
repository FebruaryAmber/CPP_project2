#include <cstdlib>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

const double g = 9.81;
const double PI = 3.14159265;

int main(int argc, char *argv[])
{
    
    int h0 = 10;
    int v0 = 15;
    int angle1 = 20;
    int angle2 = 40;
    
    double t = 0.0;;    
    double sn1 = 0.0;
    double sn2 = 0.0;
    double vy1 = 0.0;
    double vy2 = 0.0;
    double h1 = 0.0;
    double h2 = 0.0; 
    
    sn1 = sin(20*PI/180);
    sn2 = sin(40*PI/180);
    
    vy1 = v0*sn1;
    vy2 = v0*sn2; 
    
    ofstream outFile;
    outFile.open("projectile.txt");
    
    if(outFile.fail())
    {
        cout << "Error openning files" << endl;
        cout << "Program terminated" << endl;
        system("pause");
        return 1;
    }
    
    if(outFile.is_open())
    {
        cout << "t \t\t h1 \t\t h2 \t\t" << endl;
        outFile << "t , h1 , h2" <<endl;
    
        while(1)
        {
            h1 = h0 + vy1*t - (g*pow(t,2)/2);
            h2 = h0 + vy2*t - (g*pow(t,2)/2);
        
            if(h1 < 0)
                h1 = 0;
            if(h2 <0 )
                h2 = 0;
        
        
            cout << fixed << setprecision(3) <<  t << "\t" << setw(16) << right << fixed << setprecision(5) << h1 << "\t" << setw(8)<< right << fixed << setprecision(5) << h2 <<endl;
            outFile << fixed << setprecision(3) << t << " , " << fixed << setprecision(5) << h1 << " , " << fixed << setprecision(5) << h2 <<endl;
        
         t = t + 0.005;
        
          if(h1 <= 0 && h2 <= 0)
          {
                break;
            }
        } 
    }

    outFile.close();
    cout << endl << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
