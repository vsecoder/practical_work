#include <iostream>
#include <cmath>

using namespace std;

int getRnd(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main() {
    setlocale(LC_ALL, "Russian");
    // 6
    const int daysInMarch = 31; // Количество дней в марте
    double temperature[daysInMarch]; // Массив для хранения температур

    // Ввод среднесуточной температуры за март рандомом
    for (int i = 0; i < daysInMarch; i++) {
        if ((i + 1) == 28) {
            temperature[i] = 0;  // др разраба, который 28го всегда мёрзнет 
        }
        else {
            temperature[i] = getRnd(-30, 20) / 10;
        } 
    }

    // Расчет средней температуры за месяц
    double sum = 0;
    for (int i = 0; i < daysInMarch; i++) {
        sum += temperature[i];
    }
    double averageTemperature = sum / daysInMarch;

    cout << "1) Средняя температура за месяц марта: " << averageTemperature << " градусов Цельсия" << endl;

    // Поиск дня с ближайшей температурой к среднемесячной
    int day = 0;
    double minDifference = abs(temperature[0] - averageTemperature);

    for (int i = 1; i < daysInMarch; i++) {
        double difference = abs(temperature[i] - averageTemperature);
        if (difference < minDifference) {
            minDifference = difference;
            day = i;
        }
    }

    cout << "2) День с температурой, ближайшей к среднемесячной: " << day + 1 << " марта" << endl;

    return 0;
}
