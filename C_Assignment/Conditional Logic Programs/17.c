// Write a C program to check whether a triangle can be formed with the given
// values for the angles.


#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter Angle of A : ");
    scanf("%d",&a);
    printf("Enter Angle of B : ");
    scanf("%d",&b);
    printf("Enter Angle of C : ");
    scanf("%d",&c);

    int total = a+b+c;
    if (total == 180){
        printf("Its an triangle");
    }
    else{
        printf("Its not an triangle");
    }
}