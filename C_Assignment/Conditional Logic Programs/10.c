#include<stdio.h>
int main(){
    int a;
    printf("Enter Integer : ");
    scanf("%d",&a);

    if (a>0){
        printf("Positive");
    }
    else if (a<0){
        printf("Negative");
    }
    else{
        printf("Zero");
    }
    
}