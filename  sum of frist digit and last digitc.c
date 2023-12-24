
// write a c program  find sum of fist digit and last digit 
 
#include<stdio.h>

int  main()

{
  int n,fristdigit,lastdigit,sum;
  
  
  printf (" enter an enteger number:");
  scanf (" %d\n",&n);
  lastdigit=n=n%10;
  while ( n>=10){
  
  n=n/10;
 }
 sum=fristdigit+lastdigit;
 fristdigit=n;
 printf (" fristdigit=%dand lastdigit=%d sum=%d" ,fristdigit,lastdigit,sum);
 return 0;
}    