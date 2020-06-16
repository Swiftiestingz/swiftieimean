#include "Vector3.h"
#include <iostream>
using namespace std;
int main()
{
    Vector3 a(17, -16, 41);
    Vector3 b(7, 51, 17);
    cout << "VECTOR a&b = " <<  acos(a.getScalarProduct(b) / (a.getNorma() * b.getNorma())) << "\n";
    return 0;
}