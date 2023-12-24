
// write a c program to find sum of all natural number between 1to n
 
#include<stdio.h>

void main()

{
  int i,n,sum=0;
  printf (" enter upper limit:");
  scanf (" %d\n",&n);
 
 for (i=1;i<=n;i++){
 sum +=i;
 }
 printf (" sum of frist %d naturalnumber =%d",n,sum);
}    