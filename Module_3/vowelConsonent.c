#include<stdio.h>
int main(){
	
	char alpha;
	printf("Enter Character\n");
	scanf("%c",&alpha);
	switch(alpha){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("%c is Vowel\n",alpha);
			break;
		default :
			printf("%c is Consonent\n",alpha);
			break;
	}
}