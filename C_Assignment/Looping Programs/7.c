// Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include<stdio.h>
int main(){
    int number, remainder,sum=0;
    printf("Enter Number : ");
    scanf("%d",&number);

    while (number!=0){
        remainder = number%10;
		number = number/10;
        sum = sum+remainder;
    }
		printf("%d",sum);
}