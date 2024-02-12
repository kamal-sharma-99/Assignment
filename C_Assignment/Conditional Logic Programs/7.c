#include<stdio.h>
int main(){
    char a;
    printf("Enter Marks : ");
    scanf("%d",&a);

    if (a>35){
        printf("Pass");
    }
    else{
        printf("Fail");
    }
}