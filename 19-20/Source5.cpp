#include <iostream>
#include <cmath>

using namespace std;

class Square {
protected:
    double side; // сторона квадрата

public:
    Square(double s) : side(s) {}

    double getSide() const {
        return side;
    }

    double getArea() const {
        return side * side;
    }
};

class Circle {
protected:
    double radius; // радиус круга

public:
    Circle(double r) : radius(r) {}

    double getRadius() const {
        return radius;
    }

    double getArea() const {
        return M_PI * radius * radius;
    }
};

class CircleInSquare : public Square, public Circle {
public:
    CircleInSquare(double s) : Square(s), Circle(s / 2) {}

    double getArea() const {
        double circleArea = Circle::getArea();
        return circleArea;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    // 5
    double side;
    cout << "Введите сторону квадрата: ";
    cin >> side;

    CircleInSquare circleInSquare(side);

    cout << "Площадь окружности в квадрате: " << circleInSquare.getArea() << endl;

    return 0;
}