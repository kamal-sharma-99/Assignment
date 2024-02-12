// Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa.

#include<stdio.h>
int main(){

    char str[100];
    printf("Enter a String in lower case : ");
    scanf("%s",&str);
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] >= 'a' || str[i] <= 'z'){
            char ch = str[i];
            // h=104 ascii number
            // H=72 ascii number
            int asciiNum = (int)ch;

            str[i] = (char)asciiNum-32;
            printf("%c",str[i]);
        }
    }
}