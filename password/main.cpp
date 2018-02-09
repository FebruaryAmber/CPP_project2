#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

const string PASSWORD = "123aBc";

int main(int argc, char *argv[])
{
    string tempPsw = "";
    int count = 0;
	
	while(1)
	{
		cout << "Enter a password: ";
		getline(cin, tempPsw);
		cout << endl;
		count++;
		
		if(tempPsw.length() == PASSWORD.length())
		{
			cout << "The password is corrent " << endl;
			break;
		}
		else
		{
			if(count < 2)
			{
				cout << "Incorrect password. Try again" << endl;
				cout << "Enter a password: ";
				cin.ignore(256,'\n');
				continue;
			}
			else
			{
				cout << "You have no logins left.\n";
				cout << "The program is terminated" << endl;
				break;
			}
		}
	}

    system("PAUSE");
    return EXIT_SUCCESS;
}
