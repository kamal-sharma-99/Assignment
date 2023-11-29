#include<stdio.h>
int reversestr();
main()
{
	printf("Enter string : ");
	reversestr();
}
int reversestr()
{
	char c;
	scanf("%c",&c);
	if(c != '\n')
	{
		reversestr();
		printf("%c",c);
	}
}
	
	
	
	
	
	
