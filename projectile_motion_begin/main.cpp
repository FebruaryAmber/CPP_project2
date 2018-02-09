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
    int v0 = 15;
    int h0 = 10;
    double angle1 = 20.0;
    double angle2 = 40.0;
    double sn1 = 0.0;
    double sn2 = 0.0;
    double  h1 = 0;
    double  h2 = 0;
    double tm = 0.0;
    double t1 = 0.0;
    double t2 = 0.0;
    double t3 = 0.0;
    double t4 = 0.0;
    double vx1 = 0.0;
    double vy1 = 0.0;
    double vx2 = 0.0;
    double vy2 = 0.0;
    
    double det = 0.0;
    
    sn1 = sin(angle1*PI/180);
    sn2 = sin(angle2*PI/180);
    
    vx1 = v0*cos(angle1*PI/180);
    vy1 = v0*sin(angle1*PI/180);
    vx2 = v0*cos(angle2*PI/180);
    vy2 = v0*sin(angle2*PI/180);
    
    det = pow(2*vy1,2) + 8*g*h0;
    
    if(det > 0)
    {
        t1 = (-vy1 + sqrt(pow(2*vy1,2) +8*g*h0))/(2*-g);
        t2 = (-vy1 - sqrt(pow(2*vy1,2) +8*g*h0))/(2*-g);
        h1 = vx1 * t2;
        
        t3 = (-vy1 + sqrt(pow(2*vy2,2) +8*g*h0))/(2*-g);
        t4 = (-vy1 - sqrt(pow(2*vy2,2) +8*g*h0))/(2*-g);
        h2 = vx2 * t4;
        
        cout << t1 << "\t" << t2 << endl;
        cout << t3 << "\t" << t4 << endl;
        cout << h1 << "\t" << h2 << endl;
    }
    else
    {
        cout << "error" << endl;
    }
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
