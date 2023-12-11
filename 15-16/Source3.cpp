#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    // 3
    // Ввод размеров массивов
    int n, m;

    cout << "Введите размер массива x: ";
    cin >> n;

    cout << "Введите размер массива y: ";
    cin >> m;

    // Выделение динамической памяти под массивы x и y
    char* x = new char[n];
    char* y = new char[m];

    // Ввод элементов массива x
    cout << "Введите элементы массива x: ";
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }

    // Ввод элементов массива y
    cout << "Введите элементы массива y: ";
    for (int i = 0; i < m; ++i) {
        cin >> y[i];
    }

    // Подсчет количества вхождений символов из x в y
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (x[i] == y[j]) {
                count++;
                break;  // Если символ найден, переходим к следующему символу из x
            }
        }
    }

    // Вывод результата
    cout << "Количество вхождений символов из x в y: " << count << endl;

    // Освобождение выделенной памяти
    delete[] x;
    delete[] y;

    return 0;
}