#include<stdio.h>
int main(){
    int num = 11;
    int num2 = 1;
    
    for (int j = 0; j < 9; j++){
            printf("0%d ",num2);
            num2++;
        }
        printf("10 ");
        printf("\n");

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 10; j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
}