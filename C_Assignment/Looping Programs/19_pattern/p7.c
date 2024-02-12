#include <stdio.h>

#define N 10

int main() {
    int grid[N][N];
    int num = 1;
    int row = 0, col = 0;
    int direction = 0; // 0 for right, 1 for down, 2 for left, 3 for up

    // Initialize the grid with zeros
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            grid[i][j] = 0;
        }
    }

    // Fill the grid with numbers
    while (num <= N * N) {
        grid[row][col] = num++;

        // Determine the next position based on direction
        if (direction == 0) { // Right
            if (col == N - 1 || grid[row][col + 1] != 0) {
                direction = 1; // Change direction to down
                row++;
            } else {
                col++;
            }
        } else if (direction == 1) { // Down
            if (row == N - 1 || grid[row + 1][col] != 0) {
                direction = 2; // Change direction to left
                col--;
            } else {
                row++;
            }
        } else if (direction == 2) { // Left
            if (col == 0 || grid[row][col - 1] != 0) {
                direction = 3; // Change direction to up
                row--;
            } else {
                col--;
            }
        } else if (direction == 3) { // Up
            if (row == 0 || grid[row - 1][col] != 0) {
                direction = 0; // Change direction to right
                col++;
            } else {
                row--;
            }
        }
    }

    // Print the grid
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%3d ", grid[i][j]);
        }
        printf("\n");
    }
}