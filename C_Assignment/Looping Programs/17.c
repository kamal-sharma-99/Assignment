#include<stdio.h>
int main(){
    int num[5], j = 0, k = 0;
    int even = 0, odd = 0;

    while (j<5){
        printf("Enter Number %d : ",j+1);
        scanf("%d",&num[j]);
        j++;
    }

    while (k<5){
        if (num[k]%2==0){
            even++;
        }
        else{
            odd++;
        }
        k++;
    }
    printf("There are %d Even Numbers in Given List\n",even);
    printf("There are %d Odd Numbers in Given List",odd);
}