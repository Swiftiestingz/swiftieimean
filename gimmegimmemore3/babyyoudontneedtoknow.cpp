#include <iostream> 
#include <cmath> 

using namespace std;
int main() {

    int ts, TS;
    cout << "vvedite 2 ne otricatelnih chisla: \n";
    cin >> ts >> TS;
     

        while (ts > 0 && TS > 0) {
            if (ts > TS) {
                ts  %=  TS;
            }
            else {
                TS %= ts;
            }
        }

    cout << "NOD= " << ts + TS << "\n";

}