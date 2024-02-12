// WAP to find factorial using recursion.

#include <stdio.h>

int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}

int main(){
    int num;
    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is non-negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Call the recursive function to calculate factorial
        int result = factorial(num);
        // Display the result
        printf("Factorial of %d is: %d\n", num, result);
    }
}