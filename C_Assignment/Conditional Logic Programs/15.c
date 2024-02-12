/*
Write a C program to determine eligibility for admission to a professional
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
in Chem>=50 and Total in all three subject >=190 or Total in Maths and
Physics >=140 --------------------------------------Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
188 Total marks of Maths and Physics : 137 The candidate is not eligible.
*/

#include<stdio.h>
int main(){
    int p,c,m;
    printf("Enter Marks of Physics : ");
    scanf("%d",&p);
    printf("Enter Marks of Chemistry : ");
    scanf("%d",&c);
    printf("Enter Marks of Maths : ");
    scanf("%d",&m);

    int t_marks = p+c+m;
    int pm = p+m;

    if (m>=65 && p>=55 && c>=50 && t_marks>=190 && pm>=140){
        printf("Eligible For Addmission");
    }
    else{
        printf("Not Eligible For Addmission");
    }
}