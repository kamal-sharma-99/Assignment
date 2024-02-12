#include<stdio.h>
int main(){
    int num;
    printf("Enter Length : ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++){
        printf("%d + ",i);
    }
}