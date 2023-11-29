#include<stdio.h>

int main(){
	int num,r,total=0;
	printf("Enter number you want reverse\n");
	scanf("%d",&num);
	
	while(num>0){
		r = num%10;
		num = num/10;
		total=total+r;
	}
		printf("Sum of given number is %d",r);
}