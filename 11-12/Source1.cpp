#include <iostream>
#include <ctime>

using namespace std;


int* randMas(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 101 + 1;
    }
    return arr;
}

void printMas(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int* bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return arr;
}


int* choiceSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i)
    {
        int smallestIndex = i;

        for (int j = i + 1; j < size; ++j)
        {
            if (arr[j] < arr[smallestIndex])
                smallestIndex = j;
        }

        swap(arr[i], arr[smallestIndex]);
    }
    return arr;
}


int* insertSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
    return arr;
}


int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    // 1
    const int n = 5;

    int arr[n];

    cout << "Ваш массив: ";
    randMas(arr, n);
    printMas(arr, n);

    cout << "Сортировка пузырьком: ";
    printMas(bubbleSort(arr, n), n);


    cout << "Ваш массив: ";
    randMas(arr, n);
    printMas(arr, n);

    cout << "Сортировка выбором: ";
    printMas(choiceSort(arr, n), n);


    cout << "Ваш массив: ";
    randMas(arr, n);
    printMas(arr, n);

    cout << "Сортировка вставками: ";
    printMas(insertSort(arr, n), n);

    return 0;
}
