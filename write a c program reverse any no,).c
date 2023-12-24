

#include <stdio.h>

void  main()
{
int sum=0,x,y;
printf("any no of\n");
scanf("%d\n",&x);
for (int i=1;x>0;i++);
{
    y=x%10;
    sum=sum+y;
    x=x/10;
    printf("%d",sum);
}
}



