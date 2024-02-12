#include<stdio.h>
int main(){
    int a,b,c,max;
    printf("Enter First Integer : ");
    scanf("%d",&a);
    printf("Enter Second Integer : ");
    scanf("%d",&b);
    printf("Enter Third Integer : ");
    scanf("%d",&c);
    

    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("%d is the Largest number",max);
}