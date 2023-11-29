#include<stdio.h>
int main(){
	int n1=0,n2=1,n3,num,i;
	printf("Enter Length of the series\n");
	scanf("%d",&num);
	
	for(i=2;i<=num;++i){
		n3=n1+n2;
		printf("%d  ",n3);
		n1=n2;
		n2=n3;
	}
}