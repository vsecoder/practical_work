using namespace std;
#include <iostream>

string rubles(int cost)
{
    int remainder = cost % 10;

    if ((cost % 100) >= 10 && (cost % 100) <= 20)
    {
        return "рубль";
    }
    else
    {
        switch (remainder)
        {
        case 1:
            return "рубль";
        case 2:
        case 3:
        case 4:
            return "рубля";
        default:
            return "рублей";
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    // 2
    int cost, count;
    string r;
    char type;
    string hr = "-----------";

    cout << "Введите цену товара: ";
    cin >> cost;

    cout << "Введите тип функции (f - цикл for, w - цикл while, d – do-while.): ";
    cin >> type;

    cout << "Введите количество товара: ";
    cin >> count;

    r = rubles(cost);

    switch (type)
    {
    case 'f':
        for (int i = 0; i < count; i++)
        {
            cout << hr << endl;
            cout << "Ручка шариковая" << endl;
            cout << "Шт." << cost << " " << r << endl;
        }
        break;

    case 'w':
        while (count > 0)
        {
            cout << hr << endl;
            cout << "Ручка шариковая" << endl;
            cout << "Шт." << cost << " " << r << endl;
            count--;
        }
        break;

    case 'd':
        do
        {
            cout << hr << endl;
            cout << "Ручка шариковая" << endl;
            cout << "Шт." << cost << " " << r << endl;
            count--;
        } while (count > 0);
        break;

    default:
        break;
    }

    cout << hr << endl;

    return 0;
}
