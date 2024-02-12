//  Write a program in C to combine two strings manually.

#include <stdio.h>
int main() {
    char str1[50], str2[50], combine_str[100];
    int i, j;
    
    // Input the first string
    printf("Enter the first string: ");
    scanf("%s", str1);

    // Input the second string
    printf("Enter the second string: ");
    scanf("%s", str2);

    for (i = 0; str1[i] != '\0'; ++i){
        combine_str[i] = str1[i];
    }

    combine_str[i] = ' ';
    i++;

    for (j = 0; str2[j] != '\0'; ++j){
        combine_str[i + j] = str2[j];
    }
        printf("Combined String : %s",combine_str);
}