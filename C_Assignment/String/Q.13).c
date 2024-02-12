// Write a program in C to remove characters from a string except alphabets.

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    // char str[100] = "pyt$%hon @#$%98765 program565ming &(*)^";

    printf("Enter String : ");
    gets(str);

    for (int i = 0; i < strlen(str); i++){
        char c = str[i];
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c == ' ')){
            printf("%c",c);
        }
    }
}