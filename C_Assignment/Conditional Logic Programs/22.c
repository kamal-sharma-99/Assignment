#include<stdio.h>
int main(){
    int a;
    printf("Enter a Number between 1 to 12 : ");
    scanf("%d",&a);

    switch (a){
    case 1:
        printf("Its January");
        break;
    case 2:
        printf("Its February");
        break;
    case 3:
        printf("Its March");
        break;
    case 4:
        printf("Its April");
        break;
    case 5:
        printf("Its May");
        break;
    case 6:
        printf("Its June");
        break;
    case 7:
        printf("Its July");
        break;
    case 8:
        printf("Its August");
        break;
    case 9:
        printf("Its September");
        break;
    case 10:
        printf("Its October");
        break;
    case 11:
        printf("Its November");
        break;
    case 12:
        printf("Its December");
        break;
    default:
        printf("You have done something wrong");
        break;
    }
}