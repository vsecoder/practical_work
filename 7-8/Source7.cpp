#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    double f;
    cout << "Введите значение точности (от 0.9 до 0.00001): ";
    cin >> f;

    f = abs(f);

    if (f < 0.00001 || f > 0.9) {
        cout << "Точность должна быть в диапазоне от 0.00001 до 0.9." << endl;
        return 1;
    }

    double S = 1.0;
    double znak = -1.0;
    double slug = 1.0;
    double z = 2;
    double n = 0;
    double n2 = 0;
    double save = 1.0;

    do {
        save = slug;
        znak = -znak;
        z = z + n;
        n++;
        n2 += 2;
        cout << "S += " << znak * n2 << " / " << z << " * " << pow(3, n) << endl;
        slug = (znak * n2) / (pow(3, n) * z);
        S += slug;
    } while (save >= f);

    cout << "S = " << S << endl;

    return 0;
}
