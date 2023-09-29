using namespace std;
#include <iostream>

void fun()
{
    static double a = 2.2;
    a += 2.8;
    cout << a << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    // 7
    fun();
    fun();
    fun();
    return 0;
}