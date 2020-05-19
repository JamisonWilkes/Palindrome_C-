#include <iostream>
#include <string>
using namespace std;


int main()
{
	string input;

	cout << "Please enter a Palindrome: ";
	getline(cin, input);

	for (int i = 0; i < input.length(); i++)
		while (input[i] == ' ')
			input.erase(i, 1);

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == input.length() - 1)
			continue;

		for (int i = 0; i < input.length() / 2; i++)					

			if (input[i] != input[input.length() - 1 - i])
			{
				cout << "Sorry that is not a palindrome!";
				exit(0);
			}
		if (i == input.length() / 2)						
		{
			cout << "Your palindrome is valid and is: " << input << endl;
		}
	}

	return 0;
}
