#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

const string PASSWORD = "123aBc";

int main(int argc, char *argv[])
{
	string tempPsw = ""; 
	int count = 0; 
	cout << "Enter a password: ";
	getline(cin, tempPsw); 
	count++;

	while(tempPsw.compare(PASSWORD) != 0) 
	{

		if(count > 2)
		{
			cout << "You have no logins left.\n"
				 << "Contact the administrator to reset your password\n";
				 << "The program is terminated" << endl;
		system("pause");
		return 0;
		}

		if(tempPsw.length() != PASSWORD.length())
			cout << "The password should be 6 characters long." << endl;

		cout << "Incorrect password. Try again" << endl;
		cout << "Enter a password: ";
		getline(cin, tempPsw);
		count++;
	}

	cout << "The password is correct" << endl;
	cout << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
