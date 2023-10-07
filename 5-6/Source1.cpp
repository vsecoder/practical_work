using namespace std;
#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Russian");
    // 1

    int n;
    int m[6];
    bool palindrome = false, luck = false;

    cin >> n;
    n = abs(n);

    if (n < 100000 || n > 999999) {
        cout << "Invalid input";
        return 0;
    }

    // сделать потом через цикл
    m[0] = n / 100000;
    m[1] = (n % 100000) / 10000;
    m[2] = (n % 10000) / 1000;
    m[3] = (n % 1000) / 100;
    m[4] = (n % 100) / 10;
    m[5] = n % 10;

    if (m[0] + m[1] + m[2] == m[3] + m[4] + m[5]) {
        luck = true;
    }

    if (
        m[0] == m[5] &&
        m[1] == m[4] &&
        m[2] == m[3]
    ) {
        palindrome = true;
    }

    cout << "Счастливое: " << luck << endl;
    cout << "Палиндром: " << palindrome << endl;

    return 0;
}
