// Write a program in C to count the total number of alphabets, digits and special
// characters in a string.

// char str1[100] = "Hello Friends m$%^& name4676978 is python!@";
char str1[100];
int len = 0;
int alphabets=0,numbers=0,symbols=0,spaces=0;

#include<stdio.h>
int main(){

    printf("Enter a String : ");
    gets(str1);
    printf("%s\n",str1);

    for (int i = 0; str1[i] != '\0'; i++)
    {
        len++;
    }
    
    // printf("Length of given string: %d",len);

    for (int i = 0; i < len; i++)
    {
        char c = str1[i];

        if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
            alphabets++;
        }
        else if(c >= '0' && c <= '9'){
            numbers++;
        }
        else if(c == ' '){
            spaces++;
        }
        else{
            symbols++;
        }
    }
        
    printf("Total Alphabaets : %d\n",alphabets);
    printf("Total Numbers : %d\n",numbers);
    printf("Total Spaces : %d\n",spaces);
    printf("Total Symbols : %d\n",symbols);
}