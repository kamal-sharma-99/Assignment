// Write a program in C to extract a substring from a given string.
// Concept not clear....

#include<stdio.h>
#include<string.h>
int main(){
    char str[100] = "hemendra singh thapa kamal naresh mahipal";
    char sub_str[20];
    printf("%s\n\n",str);
    printf("Enter sub string you want to remove form above string : ");
    gets(sub_str);

    char arr[10][100];
    int len = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < len; i++){
        if (arr[i] != sub_str){
            printf("%s ",arr[i]);
        }
    }
}