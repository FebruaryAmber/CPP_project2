//this program uses a function rearrangeName()
//to change the order of the parts in the name
//from "first middle last"" to "last, first middle"
//Author: O.Gredeskoul

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;
//This function takes original name (first middle   last)
//as a parameter and returns re-arranged name
//in the format last, first middle
string rearrangeName(string);

int main(int argc, char *argv[])
{
    //declare variables
    string originalName = "";

    //get a full name from the keyboard
    cout << "Name (first middle last) "
         << "separated by a space: ";
    getline(cin, originalName);

    //call the function to alter the name and print the resul
    cout << "Rearranged name is " << rearrangeName(originalName) << endl;


    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}


string rearrangeName(string fullName)
{
    //local variables
    string first = "";
    string middle = "";
    string last = "";

    string rearrangedName = "";
    //variables define locations of the spaces in the origina
    int spaceloc1 = 0;
    int spaceloc2 = 0;

    //locate first space
    spaceloc1 = fullName.find(" ", 0);
    //get first name
    first = fullName.substr(0, spaceloc1);

    //returns location of second space or -1 if not found
    spaceloc2 = fullName.find(" ", spaceloc1+1);

    if(spaceloc2 != -1)
    {
        //get middle name; starts from spaceloc1+1, and has len
        //spaceloc2 -(spaceloc1 + 1)
        middle = fullName.substr(spaceloc1+1, spaceloc2 - (spaceloc1+1));

        //get last name
        last = fullName.substr(spaceloc2+1);
        //new arrangement the the name
        rearrangedName = last + ", " + first + " " + middle;
    }
    else //no second space found
    {
        last = fullName.substr(spaceloc1+1);
        rearrangedName = last + ", " + first;
    }

    return rearrangedName;

}
