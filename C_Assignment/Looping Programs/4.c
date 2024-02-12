#include<stdio.h>
int main(){
    int fact = 1;
    int number;
    printf("Enter Number : ");
    scanf("%d",&number);

    for (int i = 1; i <= number; i++){
        fact = fact*i;
    }

    printf("Factorial of given number is %d",fact);
    
}