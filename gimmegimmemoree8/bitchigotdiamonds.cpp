#include <iostream>
#include <cmath> 

using namespace std;
int main() {

int t, s, lwymmd, itoj = 1;

		for (t = 1; t <= 998; t++) {
		for (s = 1; s <= 998; s++) {
		for (lwymmd = 1; lwymmd <= 998; lwymmd++) {
		if ((t < s) && (s < lwymmd) && (t * t + s * s == lwymmd * lwymmd) && (t + s + lwymmd == 1000)) {
		itoj = t * s * lwymmd;
		cout << "first = " << t << "second = " << s << "third = " << lwymmd << endl;
}}}}
	cout << "first * second * third = " << itoj << endl;
}