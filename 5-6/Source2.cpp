using namespace std;
#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Russian");
    // 2

    double a, b=0, c, discriminant, x1, x2;

    cout << "Введите значение a: ";
    cin >> a;
    cout << "Введите значение b: ";
    cin >> c;

    discriminant = b * b - 4 * c * a;

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Уравнение имеет два корня: x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    else if (discriminant == 0) {
        x1 = -b / (2 * a);
        cout << "Уравнение имеет один корень: x = " << x1 << endl;
    }
    else {
        cout << "Уравнение не имеет корней в действительной плоскости" << endl;
    }

    return 0;
}
