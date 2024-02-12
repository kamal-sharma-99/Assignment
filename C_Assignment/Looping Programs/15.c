#include<stdio.h>
int main(){
    int num[10], sum = 0, j = 0;

    for (int i = 0; i < 10; i++){
        printf("Enter Number %d : ",i+1);
        scanf("%d",&num[i]);
    }

    while (j<10){
        sum += num[j];
        j++;
    }
    printf("Sum of all given number is %d",sum);
}