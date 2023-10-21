using namespace std;
#include <iostream>


int main()
{
    setlocale(LC_ALL, "Russian");
    // 4.1
    float x, eps, F, a, n;
    cin >> x >> eps;

    x *= 3.14 / 180;
    F = x;
    a = x;
    n = 2;

    while (abs(x) >= eps) {
        a = -a * (pow(x, 2) / (n * (n + 1)));
        F = F + a;
        n = n + 2;
    }

    cout << "F = " << F << endl;
    cout << "sin x = " << sin(x) << endl;

    return 0;
}
