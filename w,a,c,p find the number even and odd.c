// write a c program find the number even and odd



#include <stdio.h>

void main()
{
    int x;
    printf ("enter the number ");
    scanf("%d",&x);
    if(x % 2 == 0)
    {
      printf ("even");
    }
    else
    printf ("odd");
}
