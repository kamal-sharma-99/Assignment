// (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include<stdio.h>
int main(){
    int num;
    printf("Enter Length : ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++){
        printf("(%d*%d) + ",i,i);
    }
}