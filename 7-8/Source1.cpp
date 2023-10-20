using namespace std;
#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Russian");
    // 1
    int input, range, range1, range2, save;

    cout << "1. y = x^2" << endl;
    cout << "2. y = ln(x)" << endl;
    cout << "3. y = kx^2 + b" << endl;
    cout << "4. y = x/2" << endl;

    cout << "Введите номер уравнения: " << endl;
    cin >> input;

    cout << "Введите диапазон [a, b]: " << endl;
    cin >> range1;
    cin >> range2;

    input = abs(input);

    if (range1 > range2) {
        save = range1;
        range1 = range2;
        range2 = save;
    }

    cout << "X Y" << endl;
    switch (input)
    {
    case 1:
        for (int x = range1; x <= range2; x++)
        {
            cout << x << " " << pow(x, 2) << endl;
        }
        break;

    case 2:
        for (int x = range1; x <= range2; x++)
        {
            cout << x << " " << log(x) << endl;
        }
        break;

    case 3:
        double k, b;
        cout << "Введите k: " << endl;
        cin >> k;
        cout << "Введите b: " << endl;
        cin >> b;

        for (int x = range1; x <= range2; x++)
        {
            cout << x << " " << k * pow(x, 2) + b << endl;
        }
        break;

    case 4:
        for (int x = range1; x <= range2; x++)
        {
            cout << x << " " << x / 2.0 << endl;
        }
        break;

    default:
        break;
    }

    return 0;
}
