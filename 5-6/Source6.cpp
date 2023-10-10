using namespace std;
#include <iostream>
#include <cmath>

bool isRectangle(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
{
    double l1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double l2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double l3 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
    double l4 = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));
    double d1 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    double d2 = sqrt(pow(x4 - x2, 2) + pow(y4 - y2, 2));

    return l1 == l3 && l2 == l4 && d1 == d2;
}

bool isParallelogram(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
{
    double l1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double l2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double l3 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
    double l4 = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));

    return l1 == l3 && l2 == l4;
}

bool isRhombus(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
{
    double d1 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    double d2 = sqrt(pow(x4 - x2, 2) + pow(y4 - y2, 2));

    return d1 == d2;
}

bool isSquare(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
{
    double l1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double d1 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

    return l1 == d1;
}

int main()
{
    // 6
    double x1, y1, x2, y2, x3, y3, x4, y4;

    cout << "Введите координаты точки 1 (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Введите координаты точки 2 (x2, y2): ";
    cin >> x2 >> y2;
    cout << "Введите координаты точки 3 (x3, y3): ";
    cin >> x3 >> y3;
    cout << "Введите координаты точки 4 (x4, y4): ";
    cin >> x4 >> y4;

    if (isSquare(x1, y1, x2, y2, x3, y3, x4, y4))
    {
        cout << "Фигура является квадратом" << endl;
    }
    else if (isRhombus(x1, y1, x2, y2, x3, y3, x4, y4))
    {
        cout << "Фигура является ромбом" << endl;
    }
    else if (isParallelogram(x1, y1, x2, y2, x3, y3, x4, y4))
    {
        cout << "Фигура является параллелограммом" << endl;
    }
    else if (isRectangle(x1, y1, x2, y2, x3, y3, x4, y4))
    {
        cout << "Фигура является прямоугольником" << endl;
    }
    else
    {
        cout << "Фигура не является ни одной из перечисленных" << endl;
    }

    return 0;
}
