#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double ts, st, TS, D, x1, x2;

cout << "Enter a\n";
cin >> ts;
cout << "Enter b\n";
cin >> st;
cout << "Enter c\n";
cin >> TS;

    D = st * st - 4 * ts * TS;
        if (D > 0)
        {
            cout << "\nD > 0 - korni uravneniya: ";
            x1 = ((-st) + sqrt(D)) / (2 * ts);
            x2 = ((-st) - sqrt(D)) / (2 * ts);
            cout << x1 << " " << x2 << "\n\n";
        }
        if (D == 0)
        {
            cout << "\nD == 0 - koren uravneniya: ";
            x1 = -(st / (2 * ts));
            cout << x1 << "\n\n";
        }
        if (D < 0)
            cout << "\nD < 0 - there's not\n\n";
        return 0;
}