using namespace std;
#include <iostream>

int main()
{
    // 5
    int cost, remainder;
    string rubles;

    cout << "Введите цену товара: ";
    cin >> cost;

    remainder = cost % 10;

    if ((cost % 100) >= 10 && (cost % 100) <= 20)
    {
        rubles = "рублей";
    }
    else
    {
        switch (remainder)
        {
        case 1:
            rubles = "рубль";
            break;
        case 2:
        case 3:
        case 4:
            rubles = "рубля";
            break;
        default:
            rubles = "рублей";
            break;
        }
    }

    cout << "-----------" << endl;
    cout << "Ручка шариковая" << endl;
    cout << "Шт." << cost << " " << rubles << endl;
    cout << "-----------" << endl;

    return 0;
}
