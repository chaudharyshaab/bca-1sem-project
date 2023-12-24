
// write a c program  to calculate sum of digits of a number
 
#include<stdio.h>

int  main()

{
  int num,sum=0;
  
  
  printf (" enter any number to find sum of its digit:");
  scanf (" %d\n",&num);
  while ( num!=0){
  
  sum=sum+=num%10;
 
 num=num/10;
  }
 printf ("sum of digits=%d",sum);
 return 0;
}    