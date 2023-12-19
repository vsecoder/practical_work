#include <iostream>

using namespace std;


class ComplexNumber {
private:
    double real;      // действительная часть
    double imaginary; // мнимая часть

public:
    ComplexNumber() : real(0.0), imaginary(0.0) {}

    ComplexNumber(double realPart, double imaginaryPart)
        : real(realPart), imaginary(imaginaryPart) {}

    ComplexNumber add(ComplexNumber other) {
        return ComplexNumber(real + other.real, imaginary + other.imaginary);
    }

    ComplexNumber multiply(ComplexNumber other) {
        double resultReal = real * other.real - imaginary * other.imaginary;
        double resultImaginary = real * other.imaginary + imaginary * other.real;
        return ComplexNumber(resultReal, resultImaginary);
    }

    ComplexNumber subtract(ComplexNumber other) {
        return ComplexNumber(real - other.real, imaginary - other.imaginary);
    }

    void display() {
        cout << real << (imaginary >= 0 ? " + " : " - ") << abs(imaginary) << "i";
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    // 3
    double real1, imaginary1, real2, imaginary2;
    cout << "Введите действительную и мнимую часть первого комплексного числа: ";
    cin >> real1 >> imaginary1;

    cout << "Введите действительную и мнимую часть второго комплексного числа: ";
    cin >> real2 >> imaginary2;

    ComplexNumber complex1(real1, imaginary1);
    ComplexNumber complex2(real2, imaginary2);

    ComplexNumber sum = complex1.add(complex2);
    ComplexNumber product = complex1.multiply(complex2);
    ComplexNumber difference = complex1.subtract(complex2);

    cout << "Сумма комплексных чисел: ";
    sum.display();
    cout << endl;

    cout << "Произведение комплексных чисел: ";
    product.display();
    cout << endl;

    cout << "Разность комплексных чисел: ";
    difference.display();
    cout << endl;

    return 0;
}