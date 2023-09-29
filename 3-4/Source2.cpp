using namespace std;
#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846

int main()
{
    setlocale(LC_ALL, "Russian");

    // 2
    double AB, BC;       // длины сторон AB и BC
    double angle_C = 90; // угол C в радианах

    cout << "Введите длину стороны AB: ";
    cin >> AB;

    cout << "Введите длину стороны BC: ";
    cin >> BC;

    if (AB <= 0 || BC <= 0)
    {
        cout << "Ошибка: стороны не могут быть меньше или равны нулю.";
        return 0;
    }

    // Переводим угол C из градусов в радианы
    double angle_C_rad = angle_C * M_PI / 180.0;

    // Вычисляем длину стороны AC по теореме косинусов
    double AC = sqrt(pow(AB, 2) + pow(BC, 2) - 2 * AB * BC * cos(angle_C_rad));

    // Вычисляем косинус угла A по определению косинуса
    double cos_A = (pow(AB, 2) + pow(AC, 2) - pow(BC, 2)) / (2 * AB * AC);

    // Вычисляем тангенс угла A по определению тангенса
    double tan_A = sin(angle_C_rad) / (AB / AC + cos(angle_C_rad));

    cout << "Косинус угла A: " << cos_A << endl;
    cout << "Тангенс угла A: " << tan_A << endl;

    return 0;
}