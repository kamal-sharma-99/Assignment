#include<stdio.h>
int main(){
    int n1 = 0, n2 = 1;
    int number, n3;
    printf("Enter Number : ");
    scanf("%d",&number);

    printf("%d, ",n1);
    printf("%d, ",n2);
    for (int i = 2; i <= number; i++){
        n3 = n1+ n2;
        printf("%d, ",n3);
        n1=n2;
        n2=n3;
    }
}