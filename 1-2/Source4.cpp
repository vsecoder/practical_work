using namespace std;
#include <iostream>
#include <cmath>

double g = 9.81;

int main()
{
    setlocale(LC_ALL, "Russian");

    // 4
    double
        v0,
        m,
        F = 0.0,
        U = 0.0,
        a = 0.0,
        v = 0.0,
        t = 40;

    cout << "Input m: ";
    cin >> m;
    cout << "Input V0: ";
    cin >> v0;

    if (m <= 0)
    {
        cout << "Invalid input";
        return 0;
    }
    if (v0 <= 0)
    {
        cout << "Invalid input";
        return 0;
    }

    a = (v - v0) / t;
    F = m * a;
    U = F / (m * g);

    cout << "F = " << F << "\n";
    cout << "U = " << U << "\n";
    return 0;
}