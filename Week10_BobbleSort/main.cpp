#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

void bubbleSort(int num[], int size);

int main(int argc, char *argv[])
{
    int sizeNum = 0;
    int numx[30] = {0};
    cout << "Enter number of elements: ";
    cin >> sizeNum;
    cout << endl;
 
    cout << "Enter %d integers" << sizeNum << endl;
 
    bubbleSort(numx , sizeNum);
    system("PAUSE");
    return EXIT_SUCCESS;
}

void bubbleSort(int num[], int size) 
{ 
    int pass, index, temp, k;
    
    for(k=0;k<size;k++)
    {
        cout << num[k];
    }
     
    for(pass = 0; pass < size; pass ++)
    { 
        for( index = 0; index < size - 1; index ++)
        { 

            if(num[index] < num[index + 1])
            { 
                temp = num[index]; 
                num[index] = num[index + 1]; 
                num[index+1] = temp; 
            }
        }
    }  
    for(k=0;k<size;k++)
    {
        cout << num[k];
    }
    
}
