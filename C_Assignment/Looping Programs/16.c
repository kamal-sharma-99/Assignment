#include<stdio.h>
int main(){
    int num, sum = 0, j = 0;

    printf("Enter Number : ");
    scanf("%d",&num);

    while (j<=num){
        sum += j;
        j++;
    }

    printf("Sum of given number is %d",sum);
}