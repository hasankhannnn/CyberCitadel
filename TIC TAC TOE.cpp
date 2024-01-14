#include <stdio.h>

char board[3][3];
const char PLAYER1 = 'X';
const char PLAYER2 = 'O';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf(" | ");
        }
        if (i < 2) printf("\n---------\n");
    }
    printf("\n");
}

int checkFreeSpaces() {
    int freeSpaces = 9;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != ' ') {
                freeSpaces--;
            }
        }
    }

    return freeSpaces;
}

int checkWinner() {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            if (board[i][0] != ' ') return board[i][0];
        }
    }

    // Check columns
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            if (board[0][i] != ' ') return board[0][i];
        }
    }

    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        if (board[0][0] != ' ') return board[0][0];
    }

    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        if (board[0][2] != ' ') return board[0][2];
    }

    return ' ';
}

void playerMove(char player) {
    int x, y;

    do {
        printf("Player %c, enter row #(1-3) and column #(1-3): ", player);
        scanf("%d%d", &x, &y);
        x--; y--;

    } while (x < 0 || x > 2 || y < 0 || y > 2 || board[x][y] != ' ');

    board[x][y] = player;
}

int main() {
    initializeBoard();
    printBoard();
    char currentPlayer = PLAYER1;

    while (1) {
        playerMove(currentPlayer);
        printBoard();
        if (checkWinner() != ' ' || checkFreeSpaces() == 0) break;

        currentPlayer = (currentPlayer == PLAYER1) ? PLAYER2 : PLAYER1;
    }

    char winner = checkWinner();

    if (winner != ' ') {
        printf("Player %c wins!\n", winner);
    } else {
        printf("It's a tie!\n");
    }
}
