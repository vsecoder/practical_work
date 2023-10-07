using namespace std;
#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Russian");
    // 4

    int n, count, discount;
    int products[4];

    cout << "Выберите товар: " << endl;
    cout << "№1 - Худи 1200р" << endl;
    products[0] = 1200;
    cout << "№2 - Джинсы 1700р" << endl;
    products[1] = 1700;
    cout << "№3 - Кеды 3000р" << endl;
    products[2] = 3000;
    cout << "№4 - Носки 270р" << endl;
    products[3] = 270;
    cout << "Ввежите номер товара (1-4): " << endl;

    cin >> n;
    n = abs(n);
    if (n < 1 || n > 4) {
        cout << "Чувак, товара 4 -_-";
        return 0;
    }
    n -= 1;

    cout << "Ввежите кол-во товара: " << endl;
    cin >> count;
    count = abs(count);

    if (products[n] * count < 500) {
        discount = 0;
    }
    else if (products[n] * count > 500 && products[n] * count < 1000) {
        discount = 20;
    }
    else {
        discount = 40;
    }

    cout << "----------" << endl;
    cout << "Ваш чек: " << endl;
    cout << "Товар №" << n+1 << " по цене " << products[n] << "р." << endl;
    cout << "В количестве " << count << "." << endl;
    cout << "Скидка: " << discount << "%" << endl;
    cout << "К оплате без скидки: " << products[n] * count << endl;
    cout << "Итогово: " << products[n] * count - (products[n] * count / 100 * discount) << endl;
    cout << "----------" << endl;

    return 0;
}
