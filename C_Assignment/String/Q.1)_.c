// Write a program in C to find the length of a string without using library functions.

#include<stdio.h>
int main(){
    char s[100];
    int length=0;
    printf("Enter a string : ");
    scanf("%s",&s);
    

    while (s[length] != '\0')
    {
        length++;
    }

    printf("Length of given string is : %d",length);
    
}