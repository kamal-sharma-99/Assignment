// WAP of Addition, Subtraction, Multiplication and Division using Switch
// case.(Must Be Menu Driven).

#include<stdio.h>
int main(){
    int choice,a,b;
	printf("Press 1 for Addition\n"); 
	printf("Press 2 for Substraction\n"); 
	printf("Press 3 for Multiplication\n"); 
	printf("Press 4 for Division\n");
	printf("Press : ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Enter First Number : ");
        scanf("%d",&a);
        printf("Enter Second Number : ");
        scanf("%d",&b);
        printf("Addtion of given number is : %d",a+b);
        break;
        case 2:
        printf("Enter First Number : ");
        scanf("%d",&a);
        printf("Enter Second Number : ");
        scanf("%d",&b);
        printf("Substraction of given number is : %d",a-b);
        break;

        case 3:
        printf("Enter First Number : ");
        scanf("%d",&a);
        printf("Enter Second Number : ");
        scanf("%d",&b);
        printf("Addtion of given number is : %d",a*b);
        break;

        case 4:
        printf("Enter First Number : ");
        scanf("%d",&a);
        printf("Enter Second Number : ");
        scanf("%d",&b);
        printf("Addtion of given number is : %d",a/b);
        break;

    }
}