/*
Write a C program to input basic salary of an employee and calculateits
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
*/

#include<stdio.h>
int main(){
    int a, hra, da;
    printf("Enter Salary : ");
    scanf("%d",&a);

        if(a<10000){
            hra = a*20/100;
            da = (a-hra)*80/100;
        }
        else if(a>10000 && a<=20000){
            hra = a*25/100;
            da = (a-hra)*90/100;
        }
        else if(a>20000){
            hra = a*30/100;
            da = (a-hra)*95/100;
        }

        printf("HRA of particular salary is %d\n",hra);
        printf("DA of particular salary is %d",da);
}