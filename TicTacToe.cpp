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
    std::cout << board[0][0] << " " << board[0][1] << " " << board[0][2] << std::endl;
    std::cout << board[1][0] << " " << board[1][1] << " " << board[1][2] << std::endl;
    std::cout << board[2][0] << " " << board[2][1] << " " << board[2][2] << std::endl;
}

int main() {
    int **board = CreateBoard();
}