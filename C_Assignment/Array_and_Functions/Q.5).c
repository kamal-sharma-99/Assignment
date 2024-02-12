// WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice.

#include<stdio.h>
int main(){
    int arr[100];
    int choice, len, temp;

    printf("Enter Size of array : ");
    scanf("%d",&len);

    for (int i = 0; i < len; i++){
        printf("Enter Value of %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    
    printf("Type 1 for Ascending Order, 2 for Descending Order : ");
    scanf("%d",&choice);

    if (choice==1){
        for (int i = 0; i < len-1; i++){
        for (int j = i+1; j < len; j++){
            if (arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
        printf("Ascending Array Is : ");
        for (int i = 0; i < len; i++){
            printf("%d ",arr[i]);
        }
    }
    else if (choice==2){
        for (int i = 0; i < len-1; i++){
        for (int j = i+1; j < len; j++){
            if (arr[i]<arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
        printf("Descending Array Is : ");
        for (int i = 0; i < len; i++){
            printf("%d ",arr[i]);
        }
    }    
}