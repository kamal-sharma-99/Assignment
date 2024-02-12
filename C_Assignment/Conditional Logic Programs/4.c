#include<stdio.h>
int main(){
    int a,b,choice;
    printf("Enter first Integer : ");
    scanf("%d",&a);
    printf("Enter second Integer : ");
    scanf("%d",&b);


    printf("type 1 for addition : \n");
    printf("type 2 for substraction : \n");
    printf("type 3 for multiplication : \n");
    printf("type 4 for division : \n");
   
    printf("What tpye of operation you wanna run : ");
    scanf("%d",&choice);

    if (choice==1){
        printf("Addition of given number is %d",a+b);
    }
    else if (choice==2){
        printf("Sub of given number is %d",a-b);
    }
    else if (choice==3){
        printf("Mult of given number is %d",a*b);
    }
    else if (choice==4){
        printf("Division of given number is %d",a/b);
    }
}