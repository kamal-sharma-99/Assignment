#include<stdio.h>
int main(){
	int numbers[10], i,en=0,on=0;
		printf("Enter 10 numbers\n");
	for(i=0;i<10;i++){
		scanf("%d",&numbers[i]);
	}
	
			printf("Even Number\n");
	for(i=0;i<10;i++){
		if(numbers[i]%2==0){
			printf("%d\n",numbers[i]);
			en = en+numbers[i];
		}
	}
			printf("Odd Number\n");
	for(i=0;i<10;i++){
		if(numbers[i]%2!=0){
			printf("%d\n",numbers[i]);
			on = on+numbers[i];
		}
	}
			printf("Sum of all Even Number is %d\n",en);
			printf("Sum of all Odd Number is %d\n",on);
			
}