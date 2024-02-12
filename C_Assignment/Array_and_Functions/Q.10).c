// WAP to perform Palindrome number using for loop and function.

#include<stdio.h>

int number, digit;

int palindromeFunc(int num){
    int revNum = 0;
    int originalNum = num;
    for (int i = 0; num > 0; i++){
        digit = num%10;
        revNum = revNum * 10 + digit;
        num/=10;    
    }
    if (originalNum == revNum){
        printf("Its a Palinfrome Number");
    }
    else{
        printf("Its Not a Palinfrome Number");
    }
}

int main(){
    printf("Enter Number : ");
    scanf("%d",&number);    

    palindromeFunc(number);
}