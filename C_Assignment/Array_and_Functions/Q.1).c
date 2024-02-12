// Write a program to find out the max number from given array using function

#include<stdio.h>

int max,arr[] = {25, 119, 7, 75,180, 56,10,12,130};          
int funcMax(){
    int length = sizeof(arr)/sizeof(arr[0]);  
	  for (int i = 0; i < length; i++){
       if(arr[i] > max)    
           max = arr[i];
       }
		   printf("max number %d",max); 
}

int main(){
    funcMax();
}