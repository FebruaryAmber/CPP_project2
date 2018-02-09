#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;
int getRandomNumber(int min,int max);
void even_odd(int number ,int &evenCounter,int &oddCounter); 

int main(int argc, char *argv[])
{
    int minNum = 0, maxNum = 0;
    int randNum = 0;
    int totalNums = 0;
    int countEven = 0;
    int countOdd = 0;
    srand(time(0));
    
    while(1)
    {
        cout << "Enter the range - smallest and largest: ";
        cin >> minNum >> maxNum;
                
        if(minNum >= 0 && maxNum <= 100)
        {
            break;
        }
        else
        {
            minNum = 0;
            maxNum = 0;
        }
    }

    while(1)
    {
        cout << "Enter how many numbers are in the sequence: ";
        cin >> totalNums;
        cout << endl << endl;
            
        if(totalNums > 0)
            break;
        else
            totalNums = 0;
    }   
            
    cout << setw(15) << "No." << setw(15) << "Random Number" << endl;
    for(int i = 0; i < totalNums; i++)
    {
        randNum = getRandomNumber(minNum, maxNum);
        cout << setw(15) << i+1 << setw(15) << randNum << endl;
        even_odd(randNum ,countEven ,countOdd);
    }
    cout << endl << endl;
        
    cout << "How many even numbers: " << countEven << endl;
    cout << "How many Odd numbers: " << countOdd << endl;
    
    cout << "Number of Even star: ";
    for(int j=0 ;j<countEven ;j++)
    {
        cout<< "*";
    }
    cout << endl;
    
    cout << "Number of Odd star: ";
    for(int j=0 ;j<countOdd ;j++)
    {
        cout<< "*";
    }
    cout << endl << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

int getRandomNumber(int min,int max)
{
    int num = 0;
    num = rand()%(max - min + 1) + min;
    return num;
}

void even_odd(int number ,int &evenCounter,int &oddCounter)
{
    if(number%2 == 0)
        evenCounter++;
    else
        oddCounter++;
}
