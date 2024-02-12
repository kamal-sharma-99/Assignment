// (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include<stdio.h>
int main(){
    int num;
    printf("Enter Length : ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++){
            printf("(");
        for (int j = 1; j <= i; j++){
            printf("%d+",j);
        }
            printf(")");
            printf(" + ");
    }
}