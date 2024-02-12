// WAP Find out length of string without using inbuilt function

#include<stdio.h>
int main(){
    char str[100];
    int count=0;
    printf("Enter String : ");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == ' '){
        }
        else{
            count++;
        }
    }
    printf("Length of given String is %d (white spaces are not included)",count);
}