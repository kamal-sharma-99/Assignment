#include<stdio.h>
int main(){
    int num;
    printf("Enter Number You Want Multiplication Table Of : ");
    scanf("%d",&num);

    for (int i = 1; i < 11; i++){
        printf("%d * %d = %d\n",num,i,num*i);
    }
}