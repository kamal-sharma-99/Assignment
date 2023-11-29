#include<stdio.h>
int main(){
	int days,rd,yd,year;
	int rdm,md,month;
	int rdw,wd,week;
	printf("Enter days\n");
	scanf("%d",&days);
	
	
//		for finding year
		rd = days%365; //remaining days
		yd = days-rd;  
		year = yd/365;
		
//		for finding month
		rdm=rd%30;
		md = rd-rdm;
		month = md/30;
		
//		for finding week
		rdw=rdm%7;
		wd = rdm-rdw;
		week = wd/7;
		
		
	printf("%d years %d months %d weeks and %d days in %d days\n", year,month,week,rdw,days);
	
}