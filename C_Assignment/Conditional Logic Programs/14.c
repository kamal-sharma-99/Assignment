#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter First Integer : ");
    scanf("%d",&a);
    printf("Enter Second Integer : ");
    scanf("%d",&b);
    printf("Enter Third Integer : ");
    scanf("%d",&c);

    if (a>b && a>c){
        printf("%d is largest",a);
    }
    else if (b>a && b>c){
        printf("%d is largest",b);
    }
    else if (c>a && c>b){
        printf("%d is largest",c);
    }
}