using namespace std;
#include <iostream>

string hr = "-----------";

string rubles(int cost)
{
    int remainder = cost % 10;

    if ((cost % 100) >= 10 && (cost % 100) <= 20)
    {
        return "рублей";
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

void show(int cost, string r) {
    cout << hr << endl;
    cout << "Ручка шариковая" << endl;
    cout << "Шт." << cost << " " << r << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    // 3
    int cost, count;
    string r;
    char type;

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
            show(cost, r);
        }
        break;

    case 'w':
        while (count > 0)
        {
            show(cost, r);
            count--;
        }
        break;

    case 'd':
        do
        {
            show(cost, r);
            count--;
        } while (count > 0);
        break;

    default:
        break;
    }

    cout << hr << endl;

    return 0;
}
