#include<stdio.h>
	int i, num,fact;
	
	int factorial(int n){
		if(n==0)
		return 1;
	else
		return(n * factorial(n-1));
	}
int main(){
	
	printf("Enter number\n");
	scanf("%d",&num);
	
	fact = factorial(num);
	printf("Factorial is %d",fact);
	
}