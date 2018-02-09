#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <fstream>

using namespace std;

void bobbleSortL(int array[], int n);
void bobbleSortS(int array[], int n);
double av(int array[], int n);
void largest(int array[], int n);
void smallest(int array[], int n);
void search(int array[], int ele);

int main(void)
{
	int size=0;
	int i = 0;
	int ele =0 ;
	int array[size];
	int j =0;
	int temp=0;
	
	srand((unsigned)time(NULL));

    cout << "how big do you want the array?" << endl;
    cin >> size;
    cout << endl << endl;
    
    ofstream outFile;
	outFile.open("limits.txt");
	if(outFile.fail())
	{
		cout << "Error output" << endl;
		cin.get();
		return 1;
	}
	
	outFile <<  "how big do you want the array?  " << size << endl;

    for(int i=0;i<size;i++)
    {
        array[i] = (rand()%100)+1;
        outFile << array[i] << endl;
    }
    cout << endl << endl;

    outFile << "Largest to smallest " << endl;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(array[j] > array[j+1])
            {
                temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
        outFile <<array[j] << endl;
    }
    outFile << endl;

	outFile.close();

    system("PAUSE");
    return 0;
}

