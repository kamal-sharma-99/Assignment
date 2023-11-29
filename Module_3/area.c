#include<stdio.h>

	int choice,l,br,ar;
	float areat,b,h,ac,r,p=3.14;
	
int main(){
	printf("type 1 for Circle\n");
	printf("type 2 for Triangle\n");
	printf("type 3 for Rectangle\n");
	scanf("%d",&choice);
	
	if(choice == 1){
		printf("Enter base and height of Triangle\n");
		scanf("%f %f",&b,&h);
		areat = b*h/2;
		printf("Area of Triangle is %.2f\n",areat);
	}
	else if(choice == 2){
		printf("Enter length and breadth of Rectangle\n");
		scanf("%d %d",&l,&br);
		ar = l*br;
		printf("Area of Rectangle is %d\n",ar);
	}
	else if(choice == 3){
		printf("Enter Radius of Circle\n");
		scanf("%f",&r);
		ac = p*r*r;
		printf("Area of Circle is %.1f\n",ac);
	}
	
}