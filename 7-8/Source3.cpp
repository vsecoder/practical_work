using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    // 3
    int n;

    cout << "Вводите числа, для завершения введите 0: ";
    cin >> n;

    int max = n,
        min = n,
        count_negative = 0,
        count_positive = 0;

    do
    {
        if (n > 0)
        {
            count_positive++;
        }
        else if (n < 0)
        {
            count_negative++;
        }

        if (n > max)
        {
            max = n;
        }
        else if (n < min)
        {
            min = n;
        }

        cin >> n;
    } while (n != 0);

    cout << "Максимальное число: " << max << endl;
    cout << "Минимальное число: " << min << endl;
    cout << "Количество положительных чисел: " << count_positive << endl;
    cout << "Количество отрицательных чисел: " << count_negative << endl;

    return 0;
}
