#include<stdio.h>
int choice,q,total=0,fBill=0;
int pizza=150,burger=80,pasta=250,sandwich=120;
char loop;

int menu(){
	printf("Press 1 for Pizza : price = 150rs/pcs\n");
	printf("Press 2 for Burger : price = 80rs/pcs\n");
	printf("Press 3 for Pasta : price = 250rs/pcs\n");
	printf("Press 4 for Sandwich : price = 120rs/pcs\n");
	scanf("%d",&choice);
	
		if(choice==1){
			printf("You have selected Pizza\n");
			printf("Enter quantity\n");
			scanf("%d",&q);
			total = pizza*q;
			fBill += total;
			printf("Amount : %d\n",total);
		}
		
		else if(choice==2){
			printf("You have selected Burger\n");
			printf("Enter quantity\n");
			scanf("%d",&q);
			total = burger*q;
			fBill += total;
			printf("Amount : %d\n",total);
		}
		
		else if(choice==3){
			printf("You have selected Pasta\n");
			printf("Enter quantity\n");
			scanf("%d",&q);
			total = pasta*q;
			fBill += total;
			printf("Amount : %d\n",total);
		}
		
		else if(choice==4){
			printf("You have selected Sandwich\n");
			printf("Enter quantity\n");
			scanf("%d",&q);
			total = sandwich*q;
			fBill += total;
			printf("Amount : %d\n",total);
		}
}
int main(){
		printf("Welcome to our restaurant, What would you like to have?\n");
	do{
		menu();
		printf("Do you want to place more orders? y & n\n");
		scanf("%s",&loop);
		}
	while(loop=='y' || loop=='Y');
		printf("Total amount of your order is : %d\n",fBill);
}