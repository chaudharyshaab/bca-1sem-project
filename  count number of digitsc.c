
// write a c program  count number of digits in a number 
 
#include<stdio.h>

int  main()

{
  int n,count=0;
  
  printf (" enter an enteger number:");
  scanf (" %d\n",&n);
  
  while (n!=0){
      n/=10; // n=n/10
      ++count;
  }
 
 {
 printf (" number of digits :%d",count);
 }
 return 0;
}    