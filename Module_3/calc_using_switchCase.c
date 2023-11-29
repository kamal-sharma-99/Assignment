#include<stdio.h>
int main(){
	 float a,b;
    int c;
    printf("type 1 for add here\n");
    printf("type 2 for sub here\n");
    printf("type 3 for mult here\n");
    printf("type 4 for div here\n");
    scanf("%d",&c);
	
	switch(c){
	case 1:
		printf("add\n");
		printf("enter two num\n");
		scanf("%f",&a);
		scanf("%f",&b);
		printf("sum  %f\n",a+b);
		break;
	case 2:
		printf("sub\n");
		printf("enter two num\n");
		scanf("%f",&a);
		scanf("%f",&b);
		printf("sub  %f\n",a-b);
		break;
	case 3:
		printf("mult\n");
		printf("enter two num\n");
		scanf("%f",&a);
		scanf("%f",&b);
		printf("mult  %f\n",a*b);
		break;
	case 4:
		printf("div\n");
		printf("enter two num\n");
		scanf("%f",&a);
		scanf("%f",&b);
		printf("div  %f\n",a/b);
		break;
		
		}
	}