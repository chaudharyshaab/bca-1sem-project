
// write a c program  to print all ASCII charecter with their valu
 
#include<stdio.h>

int  main()

{
  int i;
  for ( i=0;i<=255;i++)
  {
  printf("ASCII value of charecter%c=%d\n",i,i);
  }
  return 0;
}    