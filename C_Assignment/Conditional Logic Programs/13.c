#include<stdio.h>
int main(){
    int a,b,c,min;
    printf("Enter First Integer : ");
    scanf("%d",&a);
    printf("Enter Second Integer : ");
    scanf("%d",&b);
    printf("Enter Third Integer : ");
    scanf("%d",&c);
    

    min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    printf("%d is the smallest number",min);
}