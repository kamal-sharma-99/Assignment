// WAP to accept 5 numbers from user and display in reverse order using for loop and array.

#include<stdio.h>
int main(){
    int arr[5];

    for (int i = 0; i < 5; i++){
        printf("Enter Value of number %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = 4; i >= 0; i--){
        printf("%d  ",arr[i]);
    }
}