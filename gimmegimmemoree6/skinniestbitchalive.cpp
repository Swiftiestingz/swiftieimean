#include <iostream>
#include <cmath> 
#include <string>

using namespace std;
void vonuchiipalindrom(string skin) {

	string temp;
	bool t = true;
			for (int i = skin.size() - 1; i >= 0; --i) {
				temp += skin[i];
				t = false;
			}
			if (skin == temp) {
				cout << "palindrome:)\n";
			}
			else {
				cout << "isn't palindrome:(\n";
		}
}



int main() {
	string skin;
	cout << "can ya enter any word?:\n";
	cin >> skin;
	vonuchiipalindrom(skin);
	return(0);
}