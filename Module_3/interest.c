#include<stdio.h>
float interest, amount, tenure, roi;

int main(){


printf("Enter Loan amount\n");
scanf("%f",&amount);
printf("Enter Rate of Interest\n");
scanf("%f",&roi);

printf("Loan Amount : %.2f\n",amount);
printf("Rate of interest : %.2f\n",roi);
interest = amount*roi/100;
printf("You have to pay %.2f of Interest per year\n",interest);
	
}