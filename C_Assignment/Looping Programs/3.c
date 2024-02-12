#include<stdio.h>
int main(){
    int number[10];
    int esum=0,osum=0;

    for (int i = 0; i < 10; i++){
        printf("Enter Number : ");
        scanf("%d",&number[i]);
    }

    printf("Even Numbers : ");
    for (int i = 0; i < 10; i++){
        if (number[i]%2==0){
            printf("%d, ",number[i]);
        }
    }
    printf("\n");

    printf("Odd Numbers : ");
    for (int i = 0; i < 10; i++){
        if (number[i]%2!=0){
            printf("%d, ",number[i]);
        }
    }
    printf("\n");


    for (int i = 0; i < 10; i++){
        if (number[i]%2!=0){
            osum = osum+number[i];
        }
    }

    for (int i = 0; i < 10; i++){
        if (number[i]%2==0){
            esum = esum+number[i];
        }
    }
    printf("Sum of Even Numbers is %d\n",esum);
    printf("Sum of Odd Numbers is %d\n",osum);
}
