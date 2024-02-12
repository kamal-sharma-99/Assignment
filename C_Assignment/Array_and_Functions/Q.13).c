// WAP to accept 5 numbers from user and check entered number is even or odd using of array.

#include<stdio.h>
int main(){
    int arr[5];

    for (int i = 0; i < 5; i++){
        printf("Enter Value of number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Even Numbers are :\n");
    for (int i = 0; i < 5; i++){
        if (arr[i]%2==0){
            printf("%d  ",arr[i]);
        }
    }
    printf("\n");

    printf("Odd Numbers are :\n");
    for (int i = 0; i < 5; i++){
        if (arr[i]%2!=0){
            printf("%d  ",arr[i]);
        }
    }
}