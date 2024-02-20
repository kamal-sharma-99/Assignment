// WAP to reverse a string and check that the string is palindrome or not

#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("Enter string : ");
    scanf("%s",str);
    int len = strlen(str);
    int l = len-1;
    int count = 0;
    // printf("%d",l);

    for (int i = 0; str[i]!='\0'; i++){
        if (str[i] == str[l]){
            count++;
        }
        else{
            count--;
        }
        l--;
    }

    if (len==count){
        printf(" %s is a Palindrome",str);
    }
    else{
        printf(" %s is a not a Palindrome",str);
    }
}