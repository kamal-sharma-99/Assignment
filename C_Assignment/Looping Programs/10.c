// Accept 5 names from user at run time.

#include<stdio.h>
int main(){
    char names[5][50];
    for (int i = 0; i < 5; i++){
        printf("Enter Name : ");
        scanf("%s",names[i]);
    }

    printf("Names are : \n");
    for (int i = 0; i < 5; i++){
        printf("%s\n",names[i]);
    }
}