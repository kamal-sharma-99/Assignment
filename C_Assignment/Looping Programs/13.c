#include<stdio.h>
int main(){
    int num, i=1, fact=1;
    printf("Enter a number you want factorial of : ");
    scanf("%d",&num);
    while (i<=num){
        fact = fact*i;
        i++;
    }
    printf("Factorial of given number is %d",fact);

}