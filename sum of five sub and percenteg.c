
//find the calculate sum of five subject $ print sum and its percenteg 

#include <stdio.h>

int main()
{
    float english,physics,chemistry,math,computer;
    float total,average,percenteg;

    printf("mark in english\n");
    scanf("%f\n",&english);
    printf("mark in physics\n");
    scanf("%f\n",&physics);
    printf("mark in chemistry\n");
    scanf("%f\n",&chemistry);
    printf("mark in math\n");
    scanf("%f\n",&math);
    printf("mark in computer");
    scanf("%f\n",&computer);
    
    total=english+physics+chemistry+math+computer;
    percenteg=total/5;
    printf("%f\n",total);
    printf("%f\n",percenteg);
}
  

