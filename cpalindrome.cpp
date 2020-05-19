
#include <iostream>
#include <cstring>
using namespace std;

void reverse(char* s);

int main(int argc, char* argv[])
{
	char palindrome[100] = "";

	for (int i = 1; i < argc; i++) {
		strcat_s(palindrome, 100, argv[i]);

		char r[100];

		strcpy_s(r, 100, palindrome);
		reverse(r);

		if (strcmp(palindrome, r) == 0)
		{
			cout << "Valid Palindrome " << endl;
		}

		else 
			cout << "Not a valid palindrome " << endl;

	}

	return 0;
}

void reverse(char* s)
{
	for (int i = 0; i < strlen(s) / 2; i++)
	{ 
		char temp = s[i];
		s[i] = s[strlen(s) - 1 - i];
		s[strlen(s) - 1 - i] = temp;
	}

}

