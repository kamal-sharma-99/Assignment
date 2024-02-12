// Write a program in C to count the total number of words in a string.

#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int i;
    printf("Enter a string : ");
    // scanf("%[^\n]",&s);
    gets(s);

    int length = strlen(s);
    printf("Given String : %s",s);
    
    printf("Number of words in given string is %d",length);
}