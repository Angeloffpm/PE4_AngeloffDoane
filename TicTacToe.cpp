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

void PlaceMarker(int* choice, int marker, int**board) {
    board[choice[0]][choice[1]] = marker;
}

int* GetPlayerChoice() {
    int* arr = new int[2];
    std::cout << "Which row would you like to play in?" << std::endl;
    std::cin >> arr[0];
    std::cout << "Which column would you like to play in?" << std::endl;
    std::cin >> arr[1];
    return arr;
}

int main() {
    int **board = CreateBoard();
}