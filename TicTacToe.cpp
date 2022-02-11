#include <vector>
#include <iostream>

int** CreateBoard() {
    int** arr = new int*[3];
    for (int i = 0; i < 3; i++) {
        arr[i] = new int[3];
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = 0;
        }
    }
    return arr;
}

void DisplayBoard(int** board) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << board[i][j];
        }
        std::cout << std::endl;
    }
}

int main() {
    int **board = CreateBoard();
}