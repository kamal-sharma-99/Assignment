// C Program to Reverse a Number Using FOR Loop


#include<stdio.h>
int main(){
    int num, reverse=0;
    int org;
        printf("Enter Number : ");
        scanf("%d",&num);
        org = num;

        for (int i = 0; num>0; i++){
             int remain = num%10;
             reverse = reverse * 10 + remain; 
             num = num/10;
        }
        printf("Orginal Number : %d\n",org);
        printf("Reversed Number : %d",reverse);
}