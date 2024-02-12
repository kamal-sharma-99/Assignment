// 1 2 3 6 9 18 27 54...
#include<stdio.h>
int main(){
    int len;
    int num1 = 1, num2 = 2, num3 = 0;
    printf("Enter Length : ");
    scanf("%d",&len);

    printf("%d ",num1);
    printf("%d ",num2);
    for (int i = 2; i < len+2; i++){
        if (i%2==0){
            num3 = num1+num2;
            printf("%d ",num3);
            
        }
        else{
            num3 = num3*2;
            printf("%d ",num3);
        }
        num1=num3;

    }
}
// 1+2 =  3
// 3*2 =  6
// 3+6 =  9
// 9*2 =  18
// 9+18 = 27
// 27*2 = 54
