#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    // 1
    int N;
    cout << "Введите 6-ти значное число: " << endl;
    cin >> N;
    N = abs(N);
    if (N < 100000 && N>999999) {
        cout << "Вы ввели неправильное число: " << endl;
        cin >> N;
    }
    int ch = 0, ost, sum1 = 0, sum2 = 0;
    while (N != 0) {
        ost = N % 10;
        ch = ch * 10 + ost;
        if (N > 1000 && N < 999999) {
            sum1 += ost;
        }
        else if (N < 1000) {
            sum2 += ost;
        }
        N /= 10;
    }
    if (ch == N) {
        cout << "Число палиндром и счастливое. " << endl;
        return 0;
    }
    else if (sum1 == sum2 && ch != N) {
        cout << "Число счастливое. " << endl;
        return 0;
    }
    else if (sum1 != sum2 && ch != N) {
        cout << "Число ни палиндром, ни счастливое. " << endl;
        return 0;
    }

}

