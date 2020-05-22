#include <iostream>
#include <cmath> 
#include <string>

using namespace std;
bool vonuchiipalindrom(string augmenta)
{
		int rainonme = augmenta.length();
		for (int i = 0; i < rainonme / 2; ++i)
		{
			if (augmenta[i] != augmenta[rainonme - i - 1])
			{
				return 0;
			}
		}
		return 1;
}

int main()
{
		string TS;
		cout << "can ya'll enter the Palindrome or not and i'll find the truth about: ";
		getline(cin, TS);
		for (int j = 0; j < TS.length(); j++)
		{
			if (TS[j] == ' ') TS.erase(j, 1);
		}
		if (vonuchiipalindrom(TS))
			cout << "Palindrome:)\n";
		else
			cout << "Isn't Palindrome:(\n";
		return 0;
}
