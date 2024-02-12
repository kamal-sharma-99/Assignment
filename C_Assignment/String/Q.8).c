// Write a program in C to count the total number of vowels or consonants in a string.


#include<stdio.h>
#include<string.h>

int main(){
    int vowels = 0;
    int consonants = 0;
    char str[100];
    printf("Enter string : ");
    gets(str);
    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z'){
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
                vowels++;
            }
            else if(str[i] == ' '){
                // for white spaces
            }
            else{
                consonants++;
            }
        }
    }
    printf("Vowels : %d\n",vowels);
    printf("Consonents : %d\n",consonants);
}