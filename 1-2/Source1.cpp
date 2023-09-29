using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    // 1

    const int n = 4;
    int m[n];
    int res_1 = 0, res_2 = 1;
    for (int i = 0; i < n; i++)
    {
        cout << "Input number #" << i + 1 << "\n";
        cin >> m[i];
    }

    for (int i = 0; i < n; i++)
    {
        res_1 += m[i];
        res_2 *= m[i];
    }
    cout << "+ " << res_1 << "\n";
    cout << "* " << res_2 << "\n";
    return 0;
}