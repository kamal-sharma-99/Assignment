// Write a program in C to copy one string to another string.

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    char str2[100];
    printf("Enter string : ");
    gets(str);
    int length = strlen(str);

    printf("original string : %s\n",str);

    for (int i = 0; i <= length; i++){
        str2[i] = str[i];
    }
    printf("copy string : %s\n",str2);
}