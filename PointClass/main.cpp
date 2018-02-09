#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;
//class declaration
class Point
{
    private:
        double x;
        double y;

    public:
        //constructors
        Point();
        Point(double, double);
        //set- or mutator methods
        void setX(double);
        void setY(double);
        //get- or accessor methods
        double getX();
        double getY();

        void movePoint(double, double);
        double getDistance(Point);

        void showPoint();
};//end of class declaration

//constructors
Point::Point()
{
    x = 0.0;
    y = 0.0;
}

Point::Point(double newX, double newY)
{
    x = newX;
    y = newY;
}

//set- or mutator methods
void Point::setX(double newX)
{
    x = newX;
}
void Point::setY(double newY)
{
    y = newY;
}

//get- or accessor methods
double Point::getX()
{
    return x;
}
double Point::getY()
{
    return y;
}
void Point::movePoint(double x1, double y1)
{
    setX(x1);
    setY(y1);
}

double Point::getDistance(Point p1)
{
    double x1 = p1.getX();
    double y1 = p1.getY();

    return sqrt(pow((x - x1),2.0) + pow((y - y1),2.0));

}
void Point::showPoint()
{
    cout << "( "<< x << ", " << y << " )";

}


//driver program

int main(int argc, char *argv[])
{
    Point p1(3.0, 4.0);
    Point p2;

    p2.movePoint(-3.0, 2.0);

    cout << "Point 1: ";
    p1.showPoint();
    cout << endl;

    cout << "Point 2: ";
    p2.showPoint();
    cout << endl;



    system("PAUSE");
    return EXIT_SUCCESS;
}
