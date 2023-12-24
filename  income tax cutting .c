

//write a c program tax cut of sailry

#include <stdio.h>
void main()

{
 float  income,sailry,tax;
 printf ("enter your income \n");
 scanf("%f", &income);
 if (income>=250000 && income<=500000)
 {
     tax =tax+0.5*(income-250000);
 }
 if(income>=500000 && income <=1000000)
 {
     tax =tax+0.20*(income-1000000);
     
 }
 if(income >=1000000)
 {
   tax =tax+0.30*(income -1000000); 
 }
 printf ("your net income  tax to be paid by 26th of this month %f\n",tax);
}