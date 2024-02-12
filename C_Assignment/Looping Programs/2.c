#include<stdio.h>
int main(){
    int number[10];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Number : ");
        scanf("%d",&number[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d, ",number[i]);
    }
}