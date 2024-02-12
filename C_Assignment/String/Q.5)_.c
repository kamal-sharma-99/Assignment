// Write a program in C to compare two strings without using string library functions.


#include<stdio.h>
int main(){
    // char str1 = "kamal";
    // char str2 = "kamal";
    char str1[100];
    char str2[100];
    int count1=0;
    int count2=0;
    printf("Enter 1st string : ");
    scanf("%s",str1);
    // fflush(stdin);
    printf("Enter 2nd string : ");
    scanf("%s",str2);

    for (int i = 0; i < str1[i] != '\0'; i++){
        count1++;  
    }

    for (int i = 0; i < str2[i] != '\0'; i++){
        count2++;  
    }

    if(count1==count2){
        for (int i = 0; i < count1; i++){
            if (str1[i]==str2[i]){
                // printf("Comparing your string, please wait\n");
            }
        }
                printf("Both Strings Are Equal\n");            
    }
    else{
        printf("Both Strings Are Not Equal.\n");
    }
}