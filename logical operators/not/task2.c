#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter value of a:");
scanf("%d",&a);
printf("Enter value of b:");
scanf("%d",&b);
c=(a>=b);
printf("The statement c(a>=b) is:%d\n",c);
printf("not of c is:%d",!c);
return 0;
} 