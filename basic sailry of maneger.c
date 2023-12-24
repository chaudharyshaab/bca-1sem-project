

#include <stdio.h>

int main()
{
    float sal,basic_sal, hra,ta,da;
    hra=12%50000;
    ta=3%50000;
    da=12%50000;
    printf("find the basic sailry of maneger\n");
    printf(" enter the basic sal\n");
    scanf("%f\n",&basic_sal);
    printf("enter the value of hr\n");
    scanf("%f\n",&hra);
    printf("enter the value ta\n");
    scanf("%f\n",&ta);
    printf("enter the value da\n");
    scanf("%f\n",&da);
    sal=basic_sal+ta+da+hra;
    printf("%F\n",sal);
    
}


