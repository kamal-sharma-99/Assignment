// WAP to accept 5 students name and store it in array

#include<stdio.h>
int main(){
    char name[5][100];

    for (int i = 0; i < 5; i++){
        printf("Enter Name %d : ",i+1);
        gets(name[i]);
    }

    for (int i = 0; i < 5; i++){
        printf("%s\n",name[i]);
    }
}