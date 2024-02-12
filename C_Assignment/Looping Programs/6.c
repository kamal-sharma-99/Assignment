// WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746.

#include<stdio.h>
int main(){
    int number, remainder;
    printf("Enter Number : ");
    scanf("%d",&number);

    while (number!=0){
        remainder = number%10;
		number = number/10;
		printf("%d",remainder);
    }
}