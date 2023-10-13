#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    // 8
    // Ввод данных от пользователя
    double distance1to2, distance2to3, fuelCapacity, cargoWeight, cargoWeight2;

    cout << "Введите расстояние между городами 1 и 2 (км): ";
    cin >> distance1to2;
    distance1to2 = abs(distance1to2);

    cout << "Введите расстояние между городами 2 и 3 (км): ";
    cin >> distance2to3;
    distance2to3 = abs(distance2to3);

    cout << "Введите количество топлива в баке (литры): ";
    cin >> fuelCapacity;
    fuelCapacity = abs(fuelCapacity);

    cout << "Введите вес груза (кг): ";
    cin >> cargoWeight;
    cargoWeight = abs(cargoWeight);

    // Рассчет расхода топлива в зависимости от веса груза
    double fuelConsumption = 0.0;

    if (cargoWeight <= 500) {
        fuelConsumption = 1.0;
    }
    else if (cargoWeight <= 1000) {
        fuelConsumption = 4.0;
    }
    else if (cargoWeight <= 1500) {
        fuelConsumption = 7.0;
    }
    else if (cargoWeight <= 2000) {
        fuelConsumption = 9.0;
    }
    else {
        cout << "Грузовик не может перевезти груз более 2000 кг. Поездка невозможна." << endl;
        return 0;
    }

    // Рассчет общего расхода топлива
    double totalFuelConsumption = (distance1to2) * fuelConsumption;

    // Проверка на возможность поездки
    if (totalFuelConsumption > fuelCapacity) {
        cout << "Недостаточно топлива для успешной доставки груза в город 2. Поездка невозможна." << endl;
        return 0;
    }
    else {
        cout << "Вы прибыли в город 2." << endl;
    }


    cout << "Введите добавочный вес груза (кг): ";
    cin >> cargoWeight2;
    cargoWeight += cargoWeight2;
    fuelCapacity -= totalFuelConsumption;

    // Рассчет расхода топлива в зависимости от веса груза
    if (cargoWeight <= 500) {
        fuelConsumption = 1.0;
    }
    else if (cargoWeight <= 1000) {
        fuelConsumption = 4.0;
    }
    else if (cargoWeight <= 1500) {
        fuelConsumption = 7.0;
    }
    else if (cargoWeight <= 2000) {
        fuelConsumption = 9.0;
    }
    else {
        cout << "Грузовик не может перевезти груз более 2000 кг. Поездка невозможна." << endl;
        return 0;
    }

    // Рассчет необходимого количества топлива для доставки груза в город 3
    totalFuelConsumption = (distance2to3)*fuelConsumption;
    double remainingFuel = fuelCapacity - totalFuelConsumption;

    cout << "Для успешной доставки груза в город 3 необходимо " << totalFuelConsumption << " литров топлива." << endl;

    if (remainingFuel >= 0) {
        cout << "Осталось " << remainingFuel << " литров топлива в баке после доставки груза в город 3." << endl;
    }
    else {
        cout << "Изначально топлива недостаточно для доставки груза в город 3." << endl;
    }

    return 0;
}
