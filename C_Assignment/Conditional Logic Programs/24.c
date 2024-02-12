#include<stdio.h>
int main(){
    char c;
    printf("Enter Alphabet : ");
    scanf("%c",&c);

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
        switch (c){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("Vowel");
                break;
            
            default:
                printf("Consonent");
                break;
        }
    }
    else{
        printf("You should enter alphabets only");
    }
}