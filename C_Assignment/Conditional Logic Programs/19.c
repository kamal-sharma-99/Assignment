#include<stdio.h>
int main(){
    int a;
    printf("Enter Number of month : ");
    scanf("%d",&a);

    if (a>=1 && a<=12){
        if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12){
            printf("There are 31 Days in given month.");
        }
        else if(a==4 || a==6 || a==9 || a==11){
            printf("There are 30 Days in given month.");
        }
        else{
            printf("There are 28 or 29 Days in given month.");
        }
    }
    else{
        printf("Bro, you should enter between 1 to 12");
    }
}