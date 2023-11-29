#include<stdio.h>
int main(){
	
	int age,d,m,y;
	char name[20],add[20];
	printf("Enter your name\n");
	scanf("%s",&name);
	fflush(stdin);
	printf("Enter your age\n");
	scanf("%d",&age);
	printf("Enter your date of birth\n");
	printf("Day\n");
	scanf("%d",&d);
	printf("Month\n");
	scanf("%d",&m);
	printf("Year\n");
	scanf("%d",&y);
	printf("Enter your address\n");
	scanf("%s",&add);
	
	
	printf("Details\n");
	printf("Name : %s\n",name);
	printf("Age : %d\n",age);
	printf("Date of birth : %d:%d:%d\n",d,m,y);
	printf("Name : %s\n",add);
	
	
	
	
}