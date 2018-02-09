#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    int n = 0;
    int i = 0;
    int j = 0;
    int array[40]={0};
    
    srand((unsigned)time(NULL));
    
    ofstream fileOne;
    fileOne.open("names1.txt");
    
    cout << "how big do you want the array?";
    cin >> n;
    cout << endl << endl;
    
    for(int i=0;i<n;i++)
    {
        array[i]= rand()%100+1;
        cout << setw(8) << left << array[i];  
        fileOne << setw(8) << left << array[i];
    }  
    
    cout << endl << endl;
    
    fileOne.close();
    
    ifstream inFile;
    inFile.open("names1.txt");  
    
    ofstream outFile;
    outFile.open("names2.txt");
    
    int counter = 0;
     
    string intnumbers;
    if(inFile.is_open())
    {
        while( getline(inFile,intnumbers) )
        {    
            cout << setw(8) << left << intnumbers << endl;
            outFile << setw(8) << left << intnumbers << endl;
        }
    }
    outFile << endl << endl;
    
    cout << "Average output" << endl;
    outFile << "Average output" << endl;
    double average = 0.0, sum = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }
    average = sum / n;
    cout << "Average number " << fixed << setprecision(2) << average << endl;
    outFile << "Average number " << fixed << setprecision(2) << average << endl;
    cout << endl;
    outFile << endl;
    
    
    cout << "Largest in array " << endl;
    outFile << "Largest in array " << endl;
    int temp = 0;
    for(int i=0;i<n;i++)
    {
        if(array[i]>temp)
            temp=array[i];
    }
    cout << "The biggest number is: " << temp << endl;
    outFile << "The biggest number is: " << temp << endl;
    cout << endl;
    outFile << endl;
    
    
    int tempb = 0; 
    cout << "Smallest in array " << endl;
    outFile << "Smallest in array " << endl;
    
    tempb = array[i];
    while(i<n)
    {  
             
        if(array[i]<tempb)
            tempb=array[i];
        
        i++;        
    }
    cout << "The smallest number is: " << tempb << endl;
    outFile << "The smallest number is: " << tempb << endl;
    cout << endl;
    outFile << endl;
    
    inFile.close();
    outFile.close();
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

