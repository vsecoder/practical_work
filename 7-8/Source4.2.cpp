using namespace std;
#include <iostream>


int main()
{
    setlocale(LC_ALL, "Russian");
    // 4.2
    float x, eps, F, a, n;
    cin >> x >> eps;

    F = x;
    a = x;
    n = 2;

    do {
        a = -a * (pow(x, 2) / (n * (n + 1)));
        F = F + a;
        n = n + 2;
    } while (abs(x) >= eps);

    cout << "F = " << F << endl;
    cout << "sin x = " << x << endl;

    return 0;
}
