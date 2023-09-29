using namespace std;
#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846

int main()
{
    setlocale(LC_ALL, "Russian");

    // 3
    double n;
    cout << "Input angle: ";
    cin >> n;
    n = n * (M_PI / 180);

    cout << "cos A = " << (cos(n)) << "\n";
    cout << "sin A = " << (sin(n)) << "\n";
    return 0;
}