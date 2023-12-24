
// write a c program to find sum of all odd  number between 1to n
 
#include<stdio.h>

void main()

{
  int i,n,sum=0;
  printf (" enter upper limit:");
  scanf (" %d\n",&n);
 
 for (i=2;i<=n;i+=2){
 sum +=i;
 }
 printf (" sum of frist %d odd number =%d",n,sum);
}    