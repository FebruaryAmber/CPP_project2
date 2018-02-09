#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <fstream>
#include <string>

using namespace std;

string studentRecords(string records);

int main(int argc, char *argv[])
{
    
    string intnumbers;
    int n;
    
    
    ifstream inFile;
    inFile.open("studentRecords.txt");  
    
    ofstream outFile;
    outFile.open("results.txt");
    
    int counter = 0;
    
    if(inFile.fail()||outFile.fail())
    {
        cout << "Error openning files\n "
             << "Program terminated\n";
        system("pause");
        return 1;
    }
    
    
    
    
    if(inFile.is_open())
    {
        while( getline(inFile,intnumbers) )
        {
            string fullName = "";
            string fullMark = "";
            string name = "";
            string mark = "";
            string grade = "";
            int score = 0;
            
            string rearranged = "";
            
            int spaceloc1 = 0;
            int spaceloc2 = 0;

   
            spaceloc1 = fullName.find(" ", 0);   
            name = fullName.substr(0, spaceloc1);
            
            mark = fullMark.substr(8, 1);
            
            
            
            if(mark == "8" || mark == "9")
                grade = "HD";
            else if(mark == "7")
                grade = "DI";
            else if(mark == "6")
                grade = "CR";
            else if(mark == "5")
                grade = "PA";
            else
                grade = "NN";
        
            
            cout <<  left << intnumbers << endl;
            outFile <<  left << intnumbers << endl;
            
            cout << "Name" << setw(6) << "result" << setw(5) << "grade" << endl;
            outFile << "Name" << setw(6) << "result" << setw(5) << "grade" << endl;
            rearranged =  name + "      " + mark + "     " + grade;
        }
    }
    
    outFile << endl << endl;
    int templ = 0;
    cout << "Largest in array " << endl;
    outFile << "Largest in array " << endl;
    
    cout << "The biggest number is: " << templ << endl;
    outFile << "The biggest number is: " << templ << endl;
    cout << endl;
    outFile << endl;
    
    
    int temps = 0; 
    cout << "Smallest in array " << endl;
    outFile << "Smallest in array " << endl;
    
    
    cout << "The smallest number is: " << temps << endl;
    outFile << "The smallest number is: " << temps << endl;
    cout << endl;
    outFile << endl;
    
    inFile.close();
    outFile.close();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

