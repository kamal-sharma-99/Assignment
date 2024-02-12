#include<stdio.h>
int main(){
    int a;
    printf("Enter Integer : ");
    scanf("%d",&a);

    if (a>0 || a==0){
        printf("Positive");
    }
    else{
        printf("Negative");
    }
    
}