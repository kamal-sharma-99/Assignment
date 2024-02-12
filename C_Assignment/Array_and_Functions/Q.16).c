// Accept 5 numbers from user and perform sum of array.


#include<stdio.h>
int main(){
    int arr[5], sum=0;

    for (int i = 0; i < 5; i++){
        printf("Enter Value of number %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < 5; i++){
        sum += arr[i];
    }
    printf("Sum Of Array Numbers : %d\n",sum);
}