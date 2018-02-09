#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <ctime>

using namespace std;

const double g = 9.81;
const double PI = 3.14159265;

int main(int argc, char *argv[])
{
    ofstream outFile;
    outFile.open("projectile.txt");
    
    int v0 = 15;
    int h0 = 10;
    double angle1 = 20.0;
    double angle2 = 40.0;
    double sn1 = 0.0;
    double sn2 = 0.0;
    double  h1 = 0;
    double  h2 = 0;
    
    double t1 = 0.0;
    double t2 = 0.0;

    double vy1 = 0.0;
    double vy2 = 0.0;
    
    sn1 = sin(angle1*PI/180);
    sn2 = sin(angle2*PI/180);    
    
    vy1 = v0*sn1; 
    vy2 = v0*sn2;
    
    
    while(1)
    {
        h1 = 10 + vy1*t1 - (g*pow(t1,2))/2;
        h2 = 10 + vy2*t2 - (g*pow(t2,2))/2;
        
        if(h1<0)
            h1 = 0;
        
        if(h2<0)
            h2 = 0;
            
        cout << fixed << setprecision(4) << h1 << " ; " << fixed << setprecision(4) << t1 << " \t;\t "  << fixed << setprecision(4) << h2 << " ; " << fixed << setprecision(4) << t2 << endl;
        outFile << fixed << setprecision(4) << h1 << "," << fixed << setprecision(4) << t1 << "," <<  fixed << setprecision(4) << h2 << "," << fixed << setprecision(4) << t2 << endl;
        
        t1 = t1 + 0.005;
        t2 = t2 + 0.005;
        if(h1<=0 && h2 <= 0)
        {
            break;
        }
    }       
    
    outFile.close();
    system("PAUSE");
    return EXIT_SUCCESS;
}
