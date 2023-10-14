using namespace std;
#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Russian");
    // 4

    int n, count, discount;
    int products_price[4];
    string product_name[4];

    cout << "Выберите товар: " << endl;
    cout << "№1 - Худи 1200р" << endl;
    products_price[0] = 1200;
    product_name[0] = "худи";
    cout << "№2 - Джинсы 1700р" << endl;
    products_price[1] = 1700;
    product_name[1] = "джинсы";
    cout << "№3 - Кеды 3000р" << endl;
    products_price[2] = 3000;
    product_name[2] = "кеды";
    cout << "№4 - Носки 270р" << endl;
    products_price[3] = 270;
    product_name[3] = "носки";
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

    if (products_price[n] * count < 500) {
        discount = 0;
    }
    else if (products_price[n] * count > 500 && products_price[n] * count < 1000) {
        discount = 20;
    }
    else {
        discount = 40;
    }

    cout << "----------" << endl;
    cout << "Ваш чек: " << endl;
    cout << "Товар " << product_name[n] << " по цене " << products_price[n] << "р." << endl;
    cout << "В количестве " << count << "." << endl;
    cout << "Скидка: " << discount << "%" << endl;
    cout << "К оплате без скидки: " << products_price[n] * count << endl;
    cout << "Итогово: " << products_price[n] * count - (products_price[n] * count / 100 * discount) << endl;
    cout << "----------" << endl;

    return 0;
}
