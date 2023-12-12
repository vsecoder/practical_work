#include <iostream>
#include <fstream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    // 6
    const string fileName = "numbers.txt";
    const string evenFileName = "even_numbers.txt";
    const string oddFileName = "odd_numbers.txt";

    ifstream inputFile(fileName);
    if (!inputFile.is_open()) {
        cerr << "Ошибка открытия файла." << endl;
        return 1;
    }

    ofstream evenFile(evenFileName);
    ofstream oddFile(oddFileName);

    if (!evenFile.is_open() || !oddFile.is_open()) {
        cerr << "Ошибка открытия файлов для записи." << endl;
        return 1;
    }

    int num;
    int position = 1;

    while (inputFile >> num) {
        if (position % 2 == 0) {
            evenFile << num << " ";
        } else {
            oddFile << num << " ";
        }
        position++;
    }

    inputFile.close();
    evenFile.close();
    oddFile.close();

    // Вывод успешного завершения
    cout << "Файлы успешно созданы." << endl;

    return 0;
}