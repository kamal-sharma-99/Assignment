#include<stdio.h>
int main(){
    int a;
    printf("Enter Your Height : ");
    scanf("%d",&a);

    if (a<160){
        printf("Short");
    }
    else if (a>=160 && a<=170){
        printf("Average");
    }
    else if (a>170){
        printf("The Great Khali");
    }
}