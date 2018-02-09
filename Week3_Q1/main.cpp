#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    //Characters as integers - ASCII codes
    char letter = 'A'; //this is a character variable
    
    //introducing 'tab' sequence to use inside a string: \t   
    //This statement prints a "letter" variable as a character:
    cout << "\tThe letter is " << letter << endl; //prints A
    
    //This converts the character to the integer
    cout << "\tIts numeric equivalent is " << (int)letter << endl; //prints 65
    
    //expression with mixed data types will expand to the largest data type
    cout << "\tletter + 1 gives " << letter + 1 << endl; //prints 66

    //converting integer to the character using its ASCII code
    cout << "\twhich is a character: " << (char)(letter + 1) << endl; //prints B

    //You can find any ASCII code using this:
    cout << "\tFor any number between 0 and 255, for instance 38: " << endl;
    cout << "\tASCII code 38 corresponds to the character " << (char)38 << endl;
    cout << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
