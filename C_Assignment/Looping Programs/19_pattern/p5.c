#include <stdio.h>
int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows * 2 - 1; i++) {
        // Calculate number of stars
        // Print stars
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }
}