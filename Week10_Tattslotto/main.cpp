#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

bool duplicates(int num, int arr[], int size);
void getRow(int row[]);
void printRow(int row[]);

const int MAX = 45;
const int MIN = 1;
const int RAND = 6;
const int ROWS = 12;

int main(int argc, char *argv[])
{
    int row[RAND] = {0};
    
    srand(time(NULL));
    
    cout << " ----Your Tattslotto Ticket----\n\n";
    
    for(int i=0;i<ROWS;i++)
    {
        getRow(row);
        printRow(row);
    }    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

bool duplicates(int num, int arr[], int size)
{
    for(int j=0;j< size; j++)
    {
        if(arr[j] == num)
        {
            return 0;
        }
    }
    return 1;
}

void getRow(int row[])
{
    int rNum;
    for(int i=0;i<RAND;i++)
    {
        rNum = rand()%(MAX-MIN+1)+MIN;
        while(duplicates(rNum,row,i)==0)
        {
            rNum = rand()%(MAX-MIN+1)+MIN;
        }
        row[i] =rNum;
    }
}

void printRow(int row[])
{
    for(int i=0; i< RAND; i++)
    {
            cout << setw(5) << row[i];
    }
    cout << "\n";
}
