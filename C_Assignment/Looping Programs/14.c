#include<stdio.h>
int main(){
    int num[5];
    int fact[] = {1,1,1,1,1};
    int loop[] = {0,0,0,0,0};
    for (int i = 0; i < 5; i++){
        printf("Enter Number You Want Factorial Of : ");
        scanf("%d",&num[i]);
    }
    
    for (int i = 0; i < 5; i++){
        int k = num[i];
        while (k>loop[i]){
            fact[i] = fact[i] * (loop[i]+1);
            loop[i]++;
        }
    }
    
    for (int i = 0; i < 5; i++){
        printf("Factorial of %d is %d\n",num[i],fact[i]);
    }
}