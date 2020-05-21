#include <iostream>
#include <cmath> 

using namespace std;
int main() {

	int TS = 0,
	i = 0;
	int res[1000];


	cout << "can ya enter in this STROKE smth from 10th grade and i invert it into 2th grade" << endl;
	cin >> TS;


			do {
				res[i] = (TS % 2);
				i++;
				TS /= 2;
			} while (TS > 0);
			for (i = i - 1; i >= 0; i--) {
				cout << res[i];
		}
}