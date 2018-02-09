#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

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
	
	srand((unsigned)time(NULL));
	
    cout << "how big do you want the array?" << endl;
    cin >> size;
    cout << endl << endl;
   
    for(int i=0;i<size;i++)
    {
        array[i] = (rand()%100)+1;
        cout << array[i] << endl;
    }
    cout << endl << endl;
 
    cout << "Largest to smallest " << endl;
    bobbleSortL(array,size);
    cout << endl;

    cout <<"Smallest to largest " << endl;
    bobbleSortS(array,size);
    cout << endl;
    
    cout <<"Average output" << endl;
    av(array, size);
    cout << endl;
    
    cout << "Largest in array " << endl;
    largest(array, size);
    cout << endl;
    
    cout << "Smallest in array " << endl;
    smallest(array, size);
    cout << endl;
    
    cout << "\nEnter the elements to be searched :";
    cin >> ele;
    cout << endl;
    
    while (i < size && ele != array[i]) 
    { 
        i++;
    }
 
    if(i < size) 
    {
        cout << "Number found at the location = " << i + 1 << endl;
    }
    else 
    {
         cout << "Number not found" << endl;
    }
    
    system("PAUSE");
    return 0;
}

void bobbleSortL(int array[], int n)
{
    int i, j, temp =0;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(array[j] > array[j+1])
            {
                temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }            
        }
        cout <<array[j] << endl;
    }
}

void bobbleSortS(int array[], int n)
{
    int i, j, temp =0;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(array[j] < array[j+1])
            {
                temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }            
        }
        cout << array[j] << endl; 
    }
}

double av(int array[], int n)
{
    int i;
    double average = 0.0, sum = 0.0;
    for(i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }

    average = sum / n;
    cout << "Average number " << fixed << setprecision(2) << average << endl;
    return average;
}

void largest(int array[], int n)
{
    int temp = 0;

    for(int i=0;i<n;i++)
    {
        if(array[i]>temp)
        temp=array[i];
    }
    cout << "The biggest number is: " << temp << endl;
}

void smallest(int array[], int n)
{
    int i, temp = 0;
    i=0;
    while(i<n)
    {
        temp = array[i];
        if(array[i]<temp)
            temp=array[i];
        
        i++;        
    }
    cout << "The smallest number is: " << temp << endl;
}
