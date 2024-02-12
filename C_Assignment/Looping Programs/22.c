// Accept 3 numbers from user using while loop and check each numbers palindrome

#include<stdio.h>
int main(){
    int pal[3], reverse[3];
    int org[3];
    for (int i = 0; i < 3; i++){
        printf("Enter Number %d : ",i+1);
        scanf("%d",&pal[i]);
    }

    for (int i = 0; i < 3; i++){
        org[i] = pal[i];
    }
    
    for (int i = 0; i < 3; i++){
             reverse[i]=0;

        while (pal[i]>0){
             int remain = pal[i]%10;
             reverse[i] = reverse[i] * 10 + remain; 
             pal[i] = pal[i]/10;
        }        
    }

    for (int i = 0; i < 3; i++){
        if (org[i] == reverse[i]){
            printf("%d is a palindrome number\n",org[i]);
        }
        else{
            printf("%d is not a palindrome number\n",org[i]);
        }
    }    
}