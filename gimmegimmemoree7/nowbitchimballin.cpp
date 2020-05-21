#include <iostream>
#include <cmath> 

using namespace std;
int main() {
                int ts1 = 0, ts2 = 1, ts3 = 2;
                double TS = 2;
                do {
                ts1 = ts2 + ts3;
                if (ts1 % 2 == 0)
                TS += ts1;
                ts2 = ts3;
                ts3 = ts1;
 } 
                while (ts1 <= 4000000);

    cout << "ABS = " << TS << endl;
    return 0;
}