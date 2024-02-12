// Write a program in C to find the maximum number of characters in a string.
// Concept Not Clear

#include<stdio.h>
#include<string.h>
int main(){
    char str[100] = "hemendra Singh THAPA";
    int counting[26] = {0};

    for (int i = 0; i < strlen(str); i++)
    {
        char c = str[i];
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
            if((c >= 'a' && c <= 'z')){
                counting[c - 'a']++;
            }
            else{
                counting[c - 'A']++;
            }
        }
    }
    
    printf("Occurences of each alphabet :\n");
    for (int i = 0; i < 26; i++)
    {
        if (counting[i] > 0)
        {
            printf("%c : %d\n", 'a' + i, counting[i]);
        }
    }
}