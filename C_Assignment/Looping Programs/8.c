// Write a program to find out the max from given number (E.g., No: -1562 Max number is 6).

#include<stdio.h>
int main(){
    int number, remainder,max=0;
    printf("Enter Number : ");
    scanf("%d",&number);

    while (number!=0){
        remainder = number%10;
		number = number/10;
        if (remainder>max)
        {
            max = remainder;
        }
    }
		printf("%d",max);
}