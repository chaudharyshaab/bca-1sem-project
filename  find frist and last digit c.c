
// write a c program  find 
 
#include<stdio.h>

int  main()

{
  int n,fristdigit,lastdigit;
  
  
  printf (" enter an enteger number:");
  scanf (" %d\n",&n);
  lastdigit=n=n%10;
  while ( n>=10){
  
  n=n/10;
 }
 
 fristdigit=n;
 printf (" fristdigit=%dand lastdigit=%d",fristdigit,lastdigit);
 return 0;
}    