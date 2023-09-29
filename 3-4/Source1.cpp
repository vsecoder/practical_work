using namespace std;
#include <iostream>
#include <cmath>

int main()
{
    // вариант 2
    // 1
    double m = 2, b = 0.7, g = 2, c = -1, t = 1.2, f, z;

    f = pow((m * t * g * t) + abs(c * sin(t)), 1 / 3.0);
    cout << f << endl;
    z = m * cos(b * t * sin(t)) + c;
    cout << z << endl;

    return 0;
}
