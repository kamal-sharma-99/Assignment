// Write a program in C to separate individual characters from a string.

#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int i;
    printf("Enter a string : ");
    scanf("%s",&s);

    int length = strlen(s);
    // for ( i = 0; i < s[i] != '\0'; i++)
    for ( i = 0; i < length; i++)
    {
        printf("%c\n",s[i]);
    }
}