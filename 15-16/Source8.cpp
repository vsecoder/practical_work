#include <iostream>

using namespace std;

void initializeBoard(char** board, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            board[i][j] = ' ';
        }
    }
}

void printBoard(char** board, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << board[i][j];
            if (j < size - 1) {
                cout << '|';
            }
        }
        cout << endl;
        if (i < size - 1) {
            for (int k = 0; k < size - 1; ++k) {
                cout << "---";
            }
            cout << endl;
        }
    }
    cout << endl;
}

void makeMove(char** board, int size, int row, int col, char player) {
    board[row][col] = player;
}

bool isValidInput(int input, int size) {
    return input >= 1 && input <= size;
}

bool isCellEmpty(char** board, int row, int col) {
    return board[row][col] == ' ';
}

bool isHaveMoovs(char** board, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (board[i][j] == ' ') {
                return true;
            }
        }
    }
    return false;
}

bool checkWin(char** board, int size, char player) {
    bool win = true;
    // главная диагональ
    for (int i = 0; i < size; ++i) {
        if (board[i][i] != player) {
            win = false;
            break;
        }
    }
    if (win) return true;

    win = true;
    // побочная диагональ
    for (int i = 0; i < size; ++i) {
        if (board[i][size - 1 - i] != player) {
            win = false;
            break;
        }
    }
    if (win) return true;

    // строки и столбцы
    for (int i = 0; i < size; ++i) {
        win = true;
        for (int j = 0; j < size; ++j) {
            if (board[i][j] != player) {
                win = false;
                break;
            }
        }
        if (win) return true;
    }

    for (int i = 0; i < size; ++i) {
        win = true;
        for (int j = 0; j < size; ++j) {
            if (board[j][i] != player) {
                win = false;
                break;
            }
        }
        if (win) return true;
    }

    return false;
}

int main() {
    setlocale(LC_ALL, "Russian");
    // 8
    int size;
    cout << "Введите размер игрового поля (3): ";
    cin >> size;

    char** board = new char* [size];
    for (int i = 0; i < size; ++i) {
        board[i] = new char[size];
    }

    initializeBoard(board, size);

    string player1, player2;
    cout << "Введите имя первого игрока: ";
    cin >> player1;
    cout << "Введите имя второго игрока: ";
    cin >> player2;

    int currentPlayer = 1;

    while (true) {
        printBoard(board, size);

        int row, col;
        cout << "Ход игрока " << (currentPlayer == 1 ? player1 : player2) << endl;

        while (true) {
            cout << "Введите номер строки (1-3): ";
            cin >> row;
            cout << "Введите номер столбца (1-3): ";
            cin >> col;

            if (isValidInput(row, size) && isValidInput(col, size) && isCellEmpty(board, row - 1, col - 1)) {
                break;
            }
            cout << "Ход не засчитан!" << endl;
        }

        char symbol = (currentPlayer == 1 ? 'X' : 'O');
        makeMove(board, size, row - 1, col - 1, symbol);

        if (checkWin(board, size, symbol)) {
            printBoard(board, size);
            cout << "Игрок " << (currentPlayer == 1 ? player1 : player2) << " победил!" << endl;
            break;
        }

        if (!isHaveMoovs(board, size)) {
            printBoard(board, size);
            cout << "Ничья, расходимся!" << endl;
            break;
        }

        currentPlayer = (currentPlayer == 1 ? 2 : 1);
    }

    for (int i = 0; i < size; ++i) {
        delete[] board[i];
    }
    delete[] board;

    return 0;
}
