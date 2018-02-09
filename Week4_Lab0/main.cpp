#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int firstMum = 0;
    int secondsecond = 0;

    cout << "Enter an integer: ";
    cin >> firstNum;
    cout << "Enter another integer: "
    cin >> secondNum;

    if(first > secondNum)
    {
        int temp = 0;
        temp = firstMum;
        firstMum = secondMum;
        secondNum = temp;
    }

    cout << "Lowest： “
         << firstNum << endl;
    cout << "Highest: ”
         << secondNum << endl;

    system("PAUSE");
    retern EXIT_SUCCESS;
}
