#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    double f;
    cout << "Введите значение точности (от 0.9 до 0.00001): ";
    cin >> f;

    if (f < 0.00001 || f > 0.9) {
        cout << "Точность должна быть в диапазоне от 0.00001 до 0.9." << endl;
        return 1;
    }

    double S = 0.0;
    double znak = -1.0;
    double slug = 1.0;
    double n = 1;
    double z = 2;
    double n2 = 0;
    double n3 = 0;


    while (slug >= f) {
        S += slug;
        znak = -znak;
        z = z + n2;
        n++;
        n2++;
        n3 += 2;
        cout << "S += " << znak * n3 << " / " << z << " * " << pow(3, n2) << endl;
        slug = (znak * n3) / (pow(3, n2) * z);
    }

    cout << "S = " << S << endl;

    return 0;
}
