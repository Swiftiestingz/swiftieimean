#include <iostream>
#include <cmath> 

using namespace std;
int Factthat(int augmenta)
{
    if (augmenta <= 0)
    return 1;
    else
    return augmenta * Factthat(augmenta - 1);
}

int main()
{
    int TS;
    cout << "can ya pls enter ne otricatelnoe chislo and i will calculate Fanctorial: ";
    cin >> TS;
    cout << "Factorial = " << Factthat(TS) << "\n";
    return 0;
}