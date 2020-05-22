#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double teardropsonmyface, rainonme, TS, D, x1, x2;

    cout << "Enter a\n";
    cin >> teardropsonmyface;
    cout << "Enter b\n";
    cin >> rainonme;
    cout << "Enter c\n";
    cin >> TS;
    if (teardropsonmyface != 0) {
        D = rainonme * rainonme - 4 * teardropsonmyface * TS;
        if (D > 0)
        {
            cout << "\nD > 0 - korni uravneniya: ";
            x1 = ((-rainonme) + sqrt(D)) / (2 * teardropsonmyface);
            x2 = ((-rainonme) - sqrt(D)) / (2 * teardropsonmyface);
            cout << x1 << " " << x2 << "\n\n";
        }
        if (D == 0)
        {
            cout << "\nD == 0 - koren uravneniya: ";
            x1 = -(rainonme / (2 * teardropsonmyface));
            cout << x1 << "\n\n";
        }
        if (D < 0)
            cout << "\nD < 0 - there's not\n\n";

    }
    else
    {
        cout << "\nA == 0, koren: ";
        x1 = -TS / rainonme;
        cout << x1 << " kk?\n\n";
    }
    return 0;
}



