#include <iostream>
#include <cmath> 

using namespace std;
int main() {
	int first = 0,
		sec = 0;
	for (int i = 1; i <= 100; i++) {
		first = first + i * i;
		sec += i;
}
	int itoj = abs(first - sec * sec);
	cout << itoj << endl;
}