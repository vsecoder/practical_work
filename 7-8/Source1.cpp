using namespace std;
#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Russian");
    // 1
    int input, range;

    cout << "1. y = x^2" << endl;
    cout << "2. y = ln(x)" << endl;
    cout << "3. y = kx^2 + b" << endl;
    cout << "4. y = x/2" << endl;

    cout << "Введите номер уравнения: " << endl;
    cin >> input;

    cout << "Введите диапазон: " << endl;
    cin >> range;

    input = abs(input);
    range = abs(range);

    switch (input)
    {
    case 1:
        cout << "X Y" << endl;
        for (int x = 0; x < range; x++)
        {
            cout << x << " " << pow(x, 2) << endl;
        }
        break;

    case 2:
        cout << "X Y" << endl;
        for (int x = 0; x < range; x++)
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

        cout << "X Y" << endl;
        for (int x = 0; x < range; x++)
        {
            cout << x << " " << k * pow(x, 2) + b << endl;
        }
        break;

    case 4:
        cout << "X Y" << endl;
        for (int x = 0; x < range; x++)
        {
            cout << x << " " << x / 2.0 << endl;
        }
        break;

    default:
        break;
    }

    return 0;
}
