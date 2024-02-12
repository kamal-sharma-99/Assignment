// Write a program you have to make a summation of first and last Digit. (E.g. 1234 Ans: -5).

#include<stdio.h>
int main(){
    int number, remainder,first=0,last=0,sum=0;
    printf("Enter Number : ");
    scanf("%d",&number);

    last = number%10;

    while (number>=10){
		number = number/10;
    }
        first = number;
        sum = first + last;
		printf("%d",sum);
}