// Write a program in C to print individual characters of a string in reverse order.

#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int i;
    printf("Enter a string : ");
    scanf("%s",&s);

    int length = strlen(s);
    int reverse = length;
    for ( i = 0; i <= length; i++)
    {
        printf("%c\n",s[reverse]);
        reverse--;
    }
        
}