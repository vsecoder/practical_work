using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    // 2

    int d, S, P, r;
    cout << "Input circle d: ";
    cin >> d;

    if (d < 0)
    {
        cout << "Invalid input";
        return 0;
    }

    r = d / 2;

    S = 3.14 * r * r;
    P = 2 * 3.14 * r;

    cout << "S = " << S << "\n";
    cout << "P = " << P << "\n";
    return 0;
}