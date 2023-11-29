#include <stdio.h>

int main() {
    int num, firstNum, lastNum, sum;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    lastNum = num % 10;
    
    while (num >= 10) {
        num = num / 10;
//        1234.5   = 12345  / 10;

    }
    
    firstNum = num;
    
    sum = firstNum + lastNum;
    printf("Sum of first and last digit: %d\n", sum);

}