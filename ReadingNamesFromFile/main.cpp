//This program reads names in the form (first middle last)
//from a text file "names1.txt", uses the function
//"rearangeNames()" to print names on the screen
//as (last, first middle), and saves these names
//in a new file "names2.txt"
//Author O.Gredeskoul

#include   <cstdlib>
#include   <iostream>
#include   <iomanip>
#include   <fstream>

using namespace std;

string rearrangeName(string fullName);

int main(int argc, char *argv[])
{
    string originalName = "";

    //create and open file for reading
    ifstream inFile;
    inFile.open("names1.txt");

    //create and open file for writing
    ofstream outFile;
    outFile.open("names2.txt");

    //check if files openned successfully
    if(inFile.fail()||outFile.fail())
    {
        cout << "Error openning files\n "
             << "Program terminated\n";
        system("pause");
        return 1;
    }

    int counter = 0; //counts how many names are in the file

    //Format the output with stream manipulators
    cout << setw(5) << "No. " << setw(50)<< left << "Rearranged Name" << endl;
    cout << endl;

    //read from file until EOF
    //f.good()
    //!f.eof()
    while(!inFile.eof())
    {
        string alteredName="";

        //read one line from file
        getline(inFile, originalName);
        counter++;
        //function call to rearrange the name
        alteredName = rearrangeName(originalName);

        //print No. and the Altered Name on the screen
        //and in the output file
        //format output using stream manipulators
        cout << setw(5) << counter << setw(50) << left << alteredName << endl;

        outFile << setw(5) << counter << setw(50) << left << alteredName <<endl;
   }//end while()

   cout << "\nTotal number of resords is " << counter << endl;

   //Close files
   inFile.close();
   outFile.close();


    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}//end of main()

string rearrangeName(string fullName)
{
    //local variables
    string first = "";
    string middle ="";
    string last = "";

   string rearrangedName = "";

   int spaceloc1 = 0;
   int spaceloc2 = 0;

   //locate first space
   spaceloc1 = fullName.find(" ", 0);
   //get first name
   first = fullName.substr(0, spaceloc1);

   //locate second space
   spaceloc2 = fullName.find(" ", spaceloc1+1);

   if(spaceloc2 != -1)
   {
           //get middle name
           middle = fullName.substr(spaceloc1+1,spaceloc2-(spaceloc1+1));

           //get last name
           last = fullName.substr(spaceloc2+1);
           rearrangedName = last + ", " + first + " " + middle;
    }
    else
    {
           last = fullName.substr(spaceloc1+1);
           rearrangedName = last + ", " + first;
    }

    return rearrangedName;

}//End of rearrangeName()

