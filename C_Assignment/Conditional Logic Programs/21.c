#include<stdio.h>
int main(){
    int a;
    printf("Enter a Number between 1 to 7 : ");
    scanf("%d",&a);

    switch (a){
    case 1:
        printf("Its Monday");
        break;
    case 2:
        printf("Its Tueday");
        break;
    case 3:
        printf("Its Wednesday");
        break;
    case 4:
        printf("Its Thursday");
        break;
    case 5:
        printf("Its Friday");
        break;
    case 6:
        printf("Its Saturday");
        break;
    case 7:
        printf("Its Sunday");
        break;
    default:
        printf("You have done something wrong");
        break;
    }
}