/*
Write a program in C to calculate and print the electricity bill of a given
customer. The customer ID, name, and unit consumed by the user should
be captured from the keyboard to display the total amount to be paid to the
customer. The charge are as follow :
20. Unit 21. Charge/unit
22. upto 350 23. @1.20
24. 350 and above but less than 600 25. @1.50
26. 600 and above but less than 800 27. @1.80
28. 800 and above 29. @2.00
If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
minimum bill should be of Rs. 256/-
*/


#include<stdio.h>
int main(){
    int c_id;
    float units, bill,f_unit;
    char name[50];
    printf("Enter Customer ID: ");
    scanf("%d",&c_id);
    printf("Enter Customer Name : ");
    scanf("%s",&name);
    printf("Enter Unit Consumed : ");
    scanf("%f",&units);

    if (units<=350){
        bill = units*1.20;
        if (bill >=256)
        {
            return bill;
        }
        else{
            bill = 256;
        } 
    }
    else if (units>350 && units<=600){
        f_unit = units - 350;
        bill = (f_unit*1.50) + (350*1.20);
    }
    else if (units>600 && units<=800){
        f_unit = units - 600;
        bill = (f_unit*1.80) + (350*1.20) + (250*1.50);
    }
    else if (units>800){
        f_unit = units - 800;
        bill = (f_unit*2.00) + (350*1.20) + (250*1.50) + (200*1.80);
        int surcharge = bill*18/100;
        bill = surcharge + bill;
    }
    

    printf("Customer ID is %d\n",c_id);
    printf("Customer Name is \n",name);
    printf("Bill is %.2f\n",bill);
}