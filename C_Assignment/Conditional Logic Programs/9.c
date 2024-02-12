#include<stdio.h>
int main(){
    char a;
    printf("Enter Whatever You Want : ");
    scanf("%c",&a);

    if (a >= '0' && a <= '9'){
        printf("Number");
        }
    else if (a >= 'A' && a <= 'Z'){
        printf("Upeercase Alphabet");
        }
    else if (a >= 'a' && a <= 'z'){
        printf("Lowercase Alphabet");
        }
    else{
        printf("Symbol");
        }
}