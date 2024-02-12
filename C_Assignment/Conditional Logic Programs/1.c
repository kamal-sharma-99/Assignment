// Write a C program to accept two integers and check whether they are equal or not.

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter first integer : ");
    scanf("%d",&a);
    printf("Enter second integer : ");
    scanf("%d",&b);

    if (a==b){
        printf("Both are equals");
    }
    else{
        printf("Both are not equals");
    }
    
}