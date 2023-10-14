#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    // 8

    int stones = 0, max = 109, player = 2, type;

    cout << "Введите начальное кол-во камней: ";
    cin >> stones;

    stones = abs(stones);

    if (stones >= max) {
        cout << "Камней не может быть больше или равно победному числу.";
        return 0;
    }

    while (stones < max) {
        if (player == 1) {
            player = 2;
        }
        else {
            player = 1;
        }

        cout << "Кол-во камней в куче: " << stones << endl;
        cout << "Ход игрока №" << player << "\n";
        cout << "Выберите\n 1. +1 камень в кучу\n 2. x3 камни в куче\nВаш ввод: ";

        while (true) {
            cin >> type;
            if (type != 1 and type != 2) {
                cout << "1 или 2";
                continue;
            }
            switch (type)
            {
                case 1:
                    stones += 1;
                    break;
                case 2:
                    stones *= 3;
                    break;
            }
            break;
        }
    }

    cout << "Победил игрок №" << player;
    
    return 0;
}
