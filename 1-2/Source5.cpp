using namespace std;
#include <iostream>
#include <cmath>

#define Pci 1000
#define Tci 60
#define Nci 1000

int main()
{
    setlocale(LC_ALL, "Russian");
    // 5
    int
        P = 0,
        h = 0,
        t = 2,
        N = 0,
        A = 0;

    const double t = 2 * 60;

    cout << "Input P: ";
    cin >> P;
    cout << "Input h: ";
    cin >> h;

    if (P < 0)
    {
        cout << "Invalid input";
        return 0;
    }

    if (h < 0)
    {
        cout << "Invalid input";
        return 0;
    }

    P *= Pci;
    t *= Tci;
    A = P * h;
    N = A / t;
    N /= Nci;

    cout << "N = " << N << "\n";
    return 0;
}