#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    // 4
    double count, sum = 0, discount;
    int user_choice;
    cout << "Выберите товар, который хотите купить: " << endl;
    cout << "1 - Чай - 150 рублей" << endl;
    cout << "2 - Кофе - 230 рублей" << endl;
    cout << "3 - Минеральная вода - 50 рублей" << endl;
    user_choice = abs(user_choice);
    cin >> user_choice;
    cout << "Выберите кол-во товара: " << endl;
    cin >> count;
    count = abs(count);
    switch (user_choice) {
    case 1:
    {
        sum = count * 150;
        break;
    }
    case 2:
    {
        sum = count * 230;
        break;
    }
    case 3:
    {
        sum = count * 50;
        break;
    }
    }
    if (sum < 500) {
        cout << "Ваша скидка составляет 0%" << endl;
    }
    else if (sum > 500 && sum < 1000) {
        cout << "Ваша скидка составляет 20%" << endl;
        discount = 20;
    }
    else if (sum > 1000) {
        cout << "Ваша скидка составляет 40%" << endl;
        discount = 40;
    }
    switch (user_choice) {
    case 1:
        cout << "Чек на покупку товара: " << endl;
        cout << "Чай - 150 рублей, в количестве " << count << endl;
        cout << "Стоимость заказа составляет: " << sum << endl;
        cout << "С учетом скидки стоимость заказа составлят: " << sum - (sum * (discount / 100)) << endl;
        break;

    case 2:
        cout << "Чек на покупку товара: " << endl;
        cout << "Кофе - 230 рублей, в количестве " << count << endl;
        cout << "Стоимость заказа составляет: " << sum << endl;
        cout << "С учетом скидки стоимость заказа составлят: " << sum - (sum * (discount / 100)) << endl;
        break;
    case 3:
        cout << "Чек на покупку товара: " << endl;
        cout << "Минеральная вода - 50 рублей, в количестве " << count << endl;
        cout << "Стоимость заказа составляет: " << sum << endl;
        cout << "С учетом скидки стоимость заказа составляет: " << sum - (sum * (discount / 100)) << endl;
        break;
    }
}

