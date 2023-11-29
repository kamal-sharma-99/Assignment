#include<stdio.h>
int main(){
	int year;
	printf("Enter year\n");
	scanf("%d",&year);
	
	if(year>3){
		if(year)
		printf("%d Days in %d year",year);
	}
	
	else{
		printf("%d Days in %d year",year*365,year);
	}
}
