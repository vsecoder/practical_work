#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;


void printMas(int arr[][5], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}


int main() {  
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    // 2
    const int n = 10;
    const int m = 5;

    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = rand() % 101 + 1;
        }
    }

    cout << "Ваш массив: ";
    printMas(arr, n, m);

    for (int i = 0; i < m; i++) {
        sort(arr[i], arr[i] + m);
        if (i % 2 != 0) {
            reverse(begin(arr[i]), end(arr[i]));
        }
    }

    cout << "Отсортированный массив: ";
    printMas(arr, n, m);

    return 0;
}
