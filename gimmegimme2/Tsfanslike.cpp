#include <iostream> 
#include <cmath> 

using namespace std;
int main() {

	string word;

	int slayyyter = -2;
	cout << "can ya enter like a word on english?:\n";
	cin >> word;



		for (int i = 0, limit = word.size(); i < limit; ++i)
		{
			if (word[i] == 'f' || word[i] == 'F')
			{
				++slayyyter;
				if (slayyyter == 0)
				{
					slayyyter = i;
					break;
				}
			}
		}


	cout << "index of this direction is: " << slayyyter << "\n";
	return 0;
}