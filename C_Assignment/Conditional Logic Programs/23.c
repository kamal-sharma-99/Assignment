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
    float units, bill,f_unit;

    printf("Enter Unit Consumed : ");
    scanf("%f",&units);

    if (units<=50 && units>0){
        bill = units*.5;
    }
    else if (units>50 && units<=150){
        f_unit = units - 50;
        bill = (f_unit*.75) + (50*.5);
    }
    else if (units>150 && units<=250){
        f_unit = units - 150;
        bill = (f_unit*1.20) + (50*.5) + (100*.75);
    }
    else if (units>250){
        f_unit = units - 250;
        bill = (f_unit*1.5) + (50*.5) + (100*.75) + (100*1.2);
        int surcharge = bill*20/100;
        bill = surcharge + bill;
    }
    printf("Bill is %.2f\n",bill);
}