// WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array.
#include<stdio.h>
int len;
int func(){
    printf("Enter Size of array : ");
    scanf("%d",&len);

    int arr1[2][len];
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < len; j++){
            printf("Enter Value of [%d][%d] Index: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Addition of two Matrices : \n");
    for (int i = 0; i < len; i++){
        printf("[%d] [%d] = %d\n",arr1[0][i],arr1[1][i],arr1[0][i]+arr1[1][i]);
    }
    printf("Substraction of two Matrices : \n");
    for (int i = 0; i < len; i++){
        printf("[%d] [%d] = %d\n",arr1[0][i],arr1[1][i],arr1[0][i]-arr1[1][i]);
    }
    printf("Multiplcation of two Matrices : \n");
    for (int i = 0; i < len; i++){
        printf("[%d] [%d] = %d\n",arr1[0][i],arr1[1][i],arr1[0][i]*arr1[1][i]);
    }
}

int main(){
    func();
}